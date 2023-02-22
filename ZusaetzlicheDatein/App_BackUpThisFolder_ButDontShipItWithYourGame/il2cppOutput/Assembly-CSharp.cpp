#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Datenbank
struct Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// EinzeleingabeScript
struct EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// FinalerTextScript
struct FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D;
// FotoScript
struct FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LeseScript
struct LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Notification
struct Notification_t935ED056029A6F99D5AB2797AB3032EBD2F8A3F5;
// Nuetzliches
struct Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartBildschirm
struct StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// EinzeleingabeScript/<CheckIfServerBusy>d__6
struct U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7;
// EinzeleingabeScript/<FotoAnzeigenRequest>d__15
struct U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9;
// EinzeleingabeScript/<TextSendenRequest>d__13
struct U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C;
// FinalerTextScript/<getFinalTextRequest>d__6
struct U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE;
// FinalerTextScript/<setFinalTextRequest>d__8
struct U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6;
// FotoScript/<FotoIE>d__15
struct U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE;
// FotoScript/<SendeFotoRequest>d__18
struct U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// LeseScript/<AktualisierenRequest>d__15
struct U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Nuetzliches/<GetRequest2>d__5
struct U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EDF102D79FB2C91D1F26AB09A19A4EEA8EF2516;
IL2CPP_EXTERN_C String_t* _stringLiteral10FA9CA0516770E56683987A0383FFB444803A2C;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral184191A5A561AAD74CC1AB93BAAE25F99AA51CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral1B10C0A893C5AE544E442A08AA65C1542235C40F;
IL2CPP_EXTERN_C String_t* _stringLiteral23957383F8F592D181722CBA0A2F2E9EE36F9854;
IL2CPP_EXTERN_C String_t* _stringLiteral26B95C5AB43C6BB11F241ABB128BE01AE384345F;
IL2CPP_EXTERN_C String_t* _stringLiteral290EBB0748839637C59B28BDDBD8C6F10B9A42AA;
IL2CPP_EXTERN_C String_t* _stringLiteral33EB4888CAE68C6E8097B4B342A9AB4E78BCCE5B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E26D6E9ED7CB9DF205DD7433C05FD21C674469F;
IL2CPP_EXTERN_C String_t* _stringLiteral436FC160ECC0F045E704F1A03E277463AB35A431;
IL2CPP_EXTERN_C String_t* _stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69;
IL2CPP_EXTERN_C String_t* _stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87;
IL2CPP_EXTERN_C String_t* _stringLiteral49AFB738E78FEF2EB4AFD54E44E905C02F976BA5;
IL2CPP_EXTERN_C String_t* _stringLiteral597A5FF92E7AD49BC50D72FFCA6A88FE70C5E81F;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral625111796A30C4C7238FD5C403EA0964A211D8F7;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3;
IL2CPP_EXTERN_C String_t* _stringLiteral6C0BD551E305ECA3B6EBB24AC5A11077C0E5FC88;
IL2CPP_EXTERN_C String_t* _stringLiteral7725E3DF96C7A36E06FD9F3348315180FC13FBA3;
IL2CPP_EXTERN_C String_t* _stringLiteral800981F38C4B8CC9D58A8F899C0F450220C2F458;
IL2CPP_EXTERN_C String_t* _stringLiteral901BD2CEF383AF3534BFD2FA421727B903257D1B;
IL2CPP_EXTERN_C String_t* _stringLiteral991B6BE86901B2A90CB317871544C76004951426;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812;
IL2CPP_EXTERN_C String_t* _stringLiteralB5B1C0CC27ADC06DA6556C0F8878C6C15A77DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralB7725A61903B9C3798C36ED5B3F794056DB11965;
IL2CPP_EXTERN_C String_t* _stringLiteralB8BE8C44048516475EF9BFF8707407A532195F9E;
IL2CPP_EXTERN_C String_t* _stringLiteralBA52DE1A7340D9A868F2F8E6D1E91F7E45A3BE78;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC068B1D5D98B52EEBEB48B649BFA59B8B61602;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC0C849CE9C01D9394549350B263E7E710FF5A1D6;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E40705EFD475FBA58D5BFB67D64748F1343856;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2E091C5DF3BE51D8137C2F41BC32B5AA220E256;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFA9859617B6D33D0AA9E530299F77DC941E9DDF;
IL2CPP_EXTERN_C String_t* _stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B8F0D43296363B5CB7F7E8CF8940156F9220BA;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DB6FB5A90B74747D37E7732F5CC575DB992063;
IL2CPP_EXTERN_C String_t* _stringLiteralF2BE123BCA3F6FBFB7DC8B0C90B3274B5D6A4B00;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5D3BCF7F24F3956EE525A6C7D4E0E518C77B20;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDatenbank_tD3A307858FEC1713F958D514EB140E1537EA8417_mD58811CB600318768E25D4C3C85DCC9935AED9A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAktualisierenRequestU3Ed__15_System_Collections_IEnumerator_Reset_m52BB1D1F136BBBF79D7557EEA296928815466CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckIfServerBusyU3Ed__6_System_Collections_IEnumerator_Reset_m8FC40999083280B703BE0D4340DFBE6337EB1A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFotoAnzeigenRequestU3Ed__15_System_Collections_IEnumerator_Reset_m8D63404E1FE8CB83E98FB97CACFF4C6870B7BEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFotoIEU3Ed__15_System_Collections_IEnumerator_Reset_mDF6CD687863B9348809A050F6CF36238EB894FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequest2U3Ed__5_System_Collections_IEnumerator_Reset_mA1D7BE1F5E301BE2E8DF5612317364158B8BE33D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendeFotoRequestU3Ed__18_System_Collections_IEnumerator_Reset_m58344EF7CFC5119D652A8FFA4C349FCAEB33DD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTextSendenRequestU3Ed__13_System_Collections_IEnumerator_Reset_m01A7C7E5B3A665A5051723F3C2E8B6C1EAA40A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetFinalTextRequestU3Ed__6_System_Collections_IEnumerator_Reset_m36A6F02D1C098EFBC6AF07938172681ADE7625F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CsetFinalTextRequestU3Ed__8_System_Collections_IEnumerator_Reset_mBB0D2A007D97817F2BDF5FC043EA09B7DBD0D2B2_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Datenbank
struct Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417  : public RuntimeObject
{
	// System.String Datenbank::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Datenbank::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Datenbank::<Foto>k__BackingField
	String_t* ___U3CFotoU3Ek__BackingField_2;
	// System.String Datenbank::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// EinzeleingabeScript/<CheckIfServerBusy>d__6
struct U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7  : public RuntimeObject
{
	// System.Int32 EinzeleingabeScript/<CheckIfServerBusy>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EinzeleingabeScript/<CheckIfServerBusy>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EinzeleingabeScript EinzeleingabeScript/<CheckIfServerBusy>d__6::<>4__this
	EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest EinzeleingabeScript/<CheckIfServerBusy>d__6::<request>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__1_3;
};

// EinzeleingabeScript/<FotoAnzeigenRequest>d__15
struct U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9  : public RuntimeObject
{
	// System.Int32 EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String EinzeleingabeScript/<FotoAnzeigenRequest>d__15::uri
	String_t* ___uri_2;
	// EinzeleingabeScript EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<>4__this
	EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<request>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__1_4;
	// System.String EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<a>5__2
	String_t* ___U3CaU3E5__2_5;
	// System.Byte[] EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<k>5__3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CkU3E5__3_6;
	// UnityEngine.Texture2D EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<neu>5__4
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CneuU3E5__4_7;
};

// EinzeleingabeScript/<TextSendenRequest>d__13
struct U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C  : public RuntimeObject
{
	// System.Int32 EinzeleingabeScript/<TextSendenRequest>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EinzeleingabeScript/<TextSendenRequest>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String EinzeleingabeScript/<TextSendenRequest>d__13::url
	String_t* ___url_2;
	// EinzeleingabeScript EinzeleingabeScript/<TextSendenRequest>d__13::<>4__this
	EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest EinzeleingabeScript/<TextSendenRequest>d__13::<webrequest>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebrequestU3E5__1_4;
	// System.Byte[] EinzeleingabeScript/<TextSendenRequest>d__13::<buffer>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbufferU3E5__2_5;
	// UnityEngine.Networking.UnityWebRequest/Result EinzeleingabeScript/<TextSendenRequest>d__13::<>s__3
	int32_t ___U3CU3Es__3_6;
};

// FinalerTextScript/<getFinalTextRequest>d__6
struct U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE  : public RuntimeObject
{
	// System.Int32 FinalerTextScript/<getFinalTextRequest>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FinalerTextScript/<getFinalTextRequest>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FinalerTextScript FinalerTextScript/<getFinalTextRequest>d__6::<>4__this
	FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest FinalerTextScript/<getFinalTextRequest>d__6::<request>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__1_3;
};

// FinalerTextScript/<setFinalTextRequest>d__8
struct U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6  : public RuntimeObject
{
	// System.Int32 FinalerTextScript/<setFinalTextRequest>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FinalerTextScript/<setFinalTextRequest>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FinalerTextScript FinalerTextScript/<setFinalTextRequest>d__8::<>4__this
	FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest FinalerTextScript/<setFinalTextRequest>d__8::<webrequest>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebrequestU3E5__1_3;
	// System.Byte[] FinalerTextScript/<setFinalTextRequest>d__8::<buffer>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbufferU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequest/Result FinalerTextScript/<setFinalTextRequest>d__8::<>s__3
	int32_t ___U3CU3Es__3_5;
};

// FotoScript/<FotoIE>d__15
struct U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE  : public RuntimeObject
{
	// System.Int32 FotoScript/<FotoIE>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FotoScript/<FotoIE>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FotoScript FotoScript/<FotoIE>d__15::<>4__this
	FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* ___U3CU3E4__this_2;
	// System.Int32 FotoScript/<FotoIE>d__15::<orientierung>5__1
	int32_t ___U3CorientierungU3E5__1_3;
};

// FotoScript/<SendeFotoRequest>d__18
struct U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B  : public RuntimeObject
{
	// System.Int32 FotoScript/<SendeFotoRequest>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FotoScript/<SendeFotoRequest>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FotoScript FotoScript/<SendeFotoRequest>d__18::<>4__this
	FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* ___U3CU3E4__this_2;
	// System.String FotoScript/<SendeFotoRequest>d__18::<url>5__1
	String_t* ___U3CurlU3E5__1_3;
	// UnityEngine.Networking.UnityWebRequest FotoScript/<SendeFotoRequest>d__18::<webrequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebrequestU3E5__2_4;
	// System.Byte[] FotoScript/<SendeFotoRequest>d__18::<buffer>5__3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbufferU3E5__3_5;
	// UnityEngine.Networking.UnityWebRequest/Result FotoScript/<SendeFotoRequest>d__18::<>s__4
	int32_t ___U3CU3Es__4_6;
};

// LeseScript/<AktualisierenRequest>d__15
struct U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F  : public RuntimeObject
{
	// System.Int32 LeseScript/<AktualisierenRequest>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeseScript/<AktualisierenRequest>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String LeseScript/<AktualisierenRequest>d__15::url
	String_t* ___url_2;
	// LeseScript LeseScript/<AktualisierenRequest>d__15::<>4__this
	LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest LeseScript/<AktualisierenRequest>d__15::<webrequest>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebrequestU3E5__1_4;
	// System.Byte[] LeseScript/<AktualisierenRequest>d__15::<buffer>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbufferU3E5__2_5;
	// UnityEngine.Networking.UnityWebRequest/Result LeseScript/<AktualisierenRequest>d__15::<>s__3
	int32_t ___U3CU3Es__3_6;
};

// Nuetzliches/<GetRequest2>d__5
struct U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732  : public RuntimeObject
{
	// System.Int32 Nuetzliches/<GetRequest2>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Nuetzliches/<GetRequest2>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String Nuetzliches/<GetRequest2>d__5::uri
	String_t* ___uri_2;
	// Nuetzliches Nuetzliches/<GetRequest2>d__5::<>4__this
	Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest Nuetzliches/<GetRequest2>d__5::<request>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__1_4;
	// Datenbank Nuetzliches/<GetRequest2>d__5::<results>5__2
	Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* ___U3CresultsU3E5__2_5;
	// System.Byte[] Nuetzliches/<GetRequest2>d__5::<k>5__3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CkU3E5__3_6;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
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
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC 
{
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::<Importance>k__BackingField
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanBypassDnd>k__BackingField
	bool ___U3CCanBypassDndU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanShowBadge>k__BackingField
	bool ___U3CCanShowBadgeU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableLights>k__BackingField
	bool ___U3CEnableLightsU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableVibration>k__BackingField
	bool ___U3CEnableVibrationU3Ek__BackingField_7;
	// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::<VibrationPattern>k__BackingField
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___U3CVibrationPatternU3Ek__BackingField_8;
	// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::<LockScreenVisibility>k__BackingField
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
	char* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
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
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 
{
	// System.String Unity.Notifications.Android.AndroidNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotification::<SmallIcon>k__BackingField
	String_t* ___U3CSmallIconU3Ek__BackingField_2;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::<FireTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.AndroidNotification::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_4;
	// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::<Style>k__BackingField
	int32_t ___U3CStyleU3Ek__BackingField_5;
	// System.Int32 Unity.Notifications.Android.AndroidNotification::<Number>k__BackingField
	int32_t ___U3CNumberU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShouldAutoCancel>k__BackingField
	bool ___U3CShouldAutoCancelU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<UsesStopwatch>k__BackingField
	bool ___U3CUsesStopwatchU3Ek__BackingField_8;
	// System.String Unity.Notifications.Android.AndroidNotification::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_9;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<GroupSummary>k__BackingField
	bool ___U3CGroupSummaryU3Ek__BackingField_10;
	// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::<GroupAlertBehaviour>k__BackingField
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	// System.String Unity.Notifications.Android.AndroidNotification::<SortKey>k__BackingField
	String_t* ___U3CSortKeyU3Ek__BackingField_12;
	// System.String Unity.Notifications.Android.AndroidNotification::<IntentData>k__BackingField
	String_t* ___U3CIntentDataU3Ek__BackingField_13;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowTimestamp>k__BackingField
	bool ___U3CShowTimestampU3Ek__BackingField_14;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowCustomTimestamp>k__BackingField
	bool ___U3CShowCustomTimestampU3Ek__BackingField_15;
	// UnityEngine.Color Unity.Notifications.Android.AndroidNotification::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	// System.TimeSpan Unity.Notifications.Android.AndroidNotification::m_RepeatInterval
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::m_CustomTimestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::m_SilentInForeground
	bool ___m_SilentInForeground_19;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke
{
	char* ___U3CTitleU3Ek__BackingField_0;
	char* ___U3CTextU3Ek__BackingField_1;
	char* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	char* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	char* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	char* ___U3CSortKeyU3Ek__BackingField_12;
	char* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
	int32_t ___m_SilentInForeground_19;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com
{
	Il2CppChar* ___U3CTitleU3Ek__BackingField_0;
	Il2CppChar* ___U3CTextU3Ek__BackingField_1;
	Il2CppChar* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	Il2CppChar* ___U3CSortKeyU3Ek__BackingField_12;
	Il2CppChar* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
	int32_t ___m_SilentInForeground_19;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
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
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
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
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// EinzeleingabeScript
struct EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField EinzeleingabeScript::input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input_4;
	// System.String EinzeleingabeScript::jsonDaten
	String_t* ___jsonDaten_5;
	// UnityEngine.UI.Image EinzeleingabeScript::bild
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bild_6;
	// System.Boolean EinzeleingabeScript::serverBusy
	bool ___serverBusy_7;
};

// FinalerTextScript
struct FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField FinalerTextScript::input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input_4;
	// System.String FinalerTextScript::jsonDaten
	String_t* ___jsonDaten_5;
};

// FotoScript
struct FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.WebCamTexture FotoScript::webCamTexture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___webCamTexture_4;
	// UnityEngine.Texture2D FotoScript::hilfsTextur
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___hilfsTextur_5;
	// UnityEngine.UI.Image FotoScript::bild
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bild_6;
	// UnityEngine.WebCamDevice[] FotoScript::devices
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* ___devices_7;
	// UnityEngine.WebCamDevice FotoScript::device
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___device_8;
	// System.String FotoScript::jsonDaten
	String_t* ___jsonDaten_9;
	// System.Boolean FotoScript::fotoGemacht
	bool ___fotoGemacht_10;
};

// LeseScript
struct LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI LeseScript::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_4;
	// System.String LeseScript::jsonDaten
	String_t* ___jsonDaten_5;
	// UnityEngine.WebCamTexture LeseScript::webCamTexture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___webCamTexture_6;
	// UnityEngine.UI.RawImage LeseScript::hintergrund
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___hintergrund_7;
	// UnityEngine.WebCamDevice[] LeseScript::devices
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* ___devices_8;
	// System.Int32 LeseScript::deviceIndex
	int32_t ___deviceIndex_9;
	// TMPro.TextMeshProUGUI LeseScript::idAnzeige
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___idAnzeige_10;
};

// Notification
struct Notification_t935ED056029A6F99D5AB2797AB3032EBD2F8A3F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Nuetzliches
struct Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.WebCamDevice[] Nuetzliches::devices
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* ___devices_4;
	// UnityEngine.WebCamDevice Nuetzliches::device
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___device_5;
};

// StartBildschirm
struct StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI StartBildschirm::idAnzeige
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___idAnzeige_4;
	// UnityEngine.UI.InputField StartBildschirm::inputID
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputID_5;
	// UnityEngine.UI.InputField StartBildschirm::inputIp
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputIp_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// Datenbank

// Datenbank

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// System.Net.IPHostEntry

// System.Net.IPHostEntry

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// EinzeleingabeScript/<CheckIfServerBusy>d__6

// EinzeleingabeScript/<CheckIfServerBusy>d__6

// EinzeleingabeScript/<FotoAnzeigenRequest>d__15

// EinzeleingabeScript/<FotoAnzeigenRequest>d__15

// EinzeleingabeScript/<TextSendenRequest>d__13

// EinzeleingabeScript/<TextSendenRequest>d__13

// FinalerTextScript/<getFinalTextRequest>d__6

// FinalerTextScript/<getFinalTextRequest>d__6

// FinalerTextScript/<setFinalTextRequest>d__8

// FinalerTextScript/<setFinalTextRequest>d__8

// FotoScript/<FotoIE>d__15

// FotoScript/<FotoIE>d__15

// FotoScript/<SendeFotoRequest>d__18

// FotoScript/<SendeFotoRequest>d__18

// LeseScript/<AktualisierenRequest>d__15

// LeseScript/<AktualisierenRequest>d__15

// Nuetzliches/<GetRequest2>d__5

// Nuetzliches/<GetRequest2>d__5

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// Unity.Notifications.Android.AndroidNotificationChannel

// Unity.Notifications.Android.AndroidNotificationChannel

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WebCamDevice

// UnityEngine.WebCamDevice

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// Unity.Notifications.Android.AndroidNotification

// Unity.Notifications.Android.AndroidNotification

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.WebCamTexture

// UnityEngine.WebCamTexture

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// EinzeleingabeScript

// EinzeleingabeScript

// FinalerTextScript

// FinalerTextScript

// FotoScript

// FotoScript

// LeseScript

// LeseScript

// Notification

// Notification

// Nuetzliches

// Nuetzliches

// StartBildschirm
struct StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields
{
	// System.String StartBildschirm::personid
	String_t* ___personid_7;
	// System.String StartBildschirm::ipaddress
	String_t* ___ipaddress_8;
};

// StartBildschirm

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___0_value, const RuntimeMethod* method) ;

// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, float ___2_repeatRate, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EinzeleingabeScript::CheckIfServerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EinzeleingabeScript_CheckIfServerBusy_m482888FEFEC4E1A26B2BEFFC14E15E2BE98CF91F (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6__ctor_m26E59F76FB4F61E6BF965749DD9DB4362EAD9BDB (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EinzeleingabeScript::TextSendenRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EinzeleingabeScript_TextSendenRequest_m0FA525B0FED8E435CEC561897624E67FDB57EA42 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13__ctor_m4C90DD337D4574CA7BAF283835C095436ED50DD5 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EinzeleingabeScript::FotoAnzeigenRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EinzeleingabeScript_FotoAnzeigenRequest_m254774F7576C5F8383FB520B77DEAAC880AEDF18 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, String_t* ___0_uri, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15__ctor_m94114CF93C2669E2C80B134B3396DE78E0F0D052 (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6_U3CU3Em__Finally1_m2071956E2279AC6AFA09C4A883A561CFB4F85D0A (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6_System_IDisposable_Dispose_m72FCA1FFEED5910940356CEFBB7DFBDFF4274180 (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript::FotoAnzeigen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_FotoAnzeigen_m7C6298D2CFBFF688014D6F964ACC555BCB07A2BD (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13_U3CU3Em__Finally1_m99E52FE897E79B2E88BDFC579FEF18D439074658 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13_System_IDisposable_Dispose_m0EF08F2C76DDDCD60AF40EBD63B933FA9CC8224C (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15_U3CU3Em__Finally1_m92099A0753C03D2067C03246F2CE17EE04915DFF (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15_System_IDisposable_Dispose_mA5B015EBABD0EFEA4DEEAEBDC5E0C56BC08B91C2 (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_ToString_mFF63E812FA486F6B6BBB6FDA2F8A6FDA6F7B4A04 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___0_value, const RuntimeMethod* method) ;
// System.Void EinzeleingabeScript::SzenewechselninFinaleTexteingabe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_SzenewechselninFinaleTexteingabe_mF982266CCF621966F962787173BBE73BE46B03DA (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivot, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FinalerTextScript::getFinalTextRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinalerTextScript_getFinalTextRequest_m69B113547B547E3CFABAC16FFA034226FF4552F8 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) ;
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6__ctor_mE682DA83F109D75AD33CAD0190A7435ADDEE665D (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FinalerTextScript::setFinalTextRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinalerTextScript_setFinalTextRequest_mEFA61B8D6354E56C5C09C822946FC4B5AF814515 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) ;
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8__ctor_m464832DB94D048346AA541405906098B1D4ECC25 (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6_U3CU3Em__Finally1_m2B4465FF7D47EB85E6F66838EB83BBB4B9897A5F (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) ;
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6_System_IDisposable_Dispose_m9ACD23E235A54116473A4DC77A4B7D6D239BD931 (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) ;
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8_U3CU3Em__Finally1_m0D2F06194B65A8529A2427A7A6DE00F1174831A6 (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) ;
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8_System_IDisposable_Dispose_m02B996D7703D794283F784FE10CF86E0EBE802AC (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) ;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA (const RuntimeMethod* method) ;
// System.Void FotoScript::StartCamera(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_StartCamera_m0309DC3A1354E49F235B905578D8830D6679A464 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___0_device, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void FotoScript::StopCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_StopCamera_mE0324FC2EA8DCAE82CC6FDCFD76BF838B62DB2EB (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mAF6018FD8752F8527E23C6A800A314C87322D1DD (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___0_deviceName, int32_t ___1_requestedWidth, int32_t ___2_requestedHeight, int32_t ___3_requestedFPS, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Texture2D FotoScript::TextureToT2D(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FotoScript_TextureToT2D_mB3D06FA66A3B6999477A3A2E1D4BDF1797703F4B (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FotoScript::FotoIE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FotoScript_FotoIE_mA4E3FF9275790581B3FF0E76DFCA3E1D26DB7F53 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) ;
// System.Void FotoScript/<FotoIE>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoIEU3Ed__15__ctor_mB5C8B21ED7CF979EAB43C58262FC7AFA4F34C20A (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_dst, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_blockWidth, int32_t ___3_blockHeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_colors, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FotoScript::SendeFotoRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FotoScript_SendeFotoRequest_m811421AC72915C523681BCFD4F7551C530B42C47 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) ;
// System.Void FotoScript/<SendeFotoRequest>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18__ctor_mA8644089C1B0038AE7BD6E4864FB2B15002FD849 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void FotoScript/<SendeFotoRequest>d__18::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18_U3CU3Em__Finally1_mED781ABA3E95106F89057F2A2194C1A2F9AF1299 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) ;
// System.Void FotoScript/<SendeFotoRequest>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18_System_IDisposable_Dispose_mC06658865E0D03A3750FB1DB07FD091895D87294 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) ;
// System.Void FotoScript::SzeneEinzeleingabe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_SzeneEinzeleingabe_m3E7B68E460840C1BFD0318BD74668B5AD1A91D56 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) ;
// System.Void LeseScript::StartCamera(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_StartCamera_mFC68257349D9211E548233EBAFB435EE86D4217B (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___0_device, const RuntimeMethod* method) ;
// System.Void LeseScript::StopCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_StopCamera_m4C0C8210BAB0D1920127C6A715DBAE924C7C1E08 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LeseScript::AktualisierenRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeseScript_AktualisierenRequest_m46BC80266656057C588EEDAF5A531797C87AD864 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void LeseScript/<AktualisierenRequest>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15__ctor_mBB80A49EA60B6C36CE3A4CF1F47684AD7F258D78 (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void LeseScript/<AktualisierenRequest>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15_U3CU3Em__Finally1_m319FF6C8F4060A737388EFCAE15B521A1EABFB0C (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) ;
// System.Void LeseScript/<AktualisierenRequest>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15_System_IDisposable_Dispose_mE0CF051361FEF94C48D6016B5FD82B3C143538DD (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___0_channel, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_SendNotification_mFADE76DB5826511F62598D5DDC8982904AAD7684 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___0_notification, String_t* ___1_channelId, const RuntimeMethod* method) ;
// Unity.Notifications.Android.NotificationStatus Unity.Notifications.Android.AndroidNotificationCenter::CheckScheduledNotificationStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_CheckScheduledNotificationStatus_m497C97BA3C4F769675FA5A0138E4BB1F81EDB9A7 (int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllNotifications_mF5AFE29E7FC1F8D7155855CC67A671B4DC649B87 (const RuntimeMethod* method) ;
// System.Void Datenbank::set_ID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_ID_m94B3C00D0D2A77943E13D4919AF213786C0AEC7C_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Datenbank::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_Name_mA8ED2E7F320E57D4E8752C7AFA450A88B3DAE089_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Datenbank::set_Foto(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_Foto_m790AB37C6C1F868578E2007D4B11FF2FAF4B906D_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Datenbank::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_Text_m0D51931322E1A8660EB370F8ADE0F74C225DD4EF_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083 (const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53 (String_t* ___0_hostNameOrAddress, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void Nuetzliches/<GetRequest2>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5__ctor_m3AB9CDF85E1877D2A3DA47C53D80C2D6530FAEE4 (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Nuetzliches/<GetRequest2>d__5::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5_U3CU3Em__Finally1_m421657927D756BAAE9BA0559411F7D5BE942794B (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) ;
// System.Void Nuetzliches/<GetRequest2>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5_System_IDisposable_Dispose_mD8B9B699213470CDD33DB9B0DA34055B99EE4879 (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Datenbank>(System.String)
inline Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* JsonConvert_DeserializeObject_TisDatenbank_tD3A307858FEC1713F958D514EB140E1537EA8417_mD58811CB600318768E25D4C3C85DCC9935AED9A0 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// System.String Datenbank::get_Foto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Datenbank_get_Foto_m7F4488A0C61F07ED7DF1B02F6DA19328A03D734F_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, const RuntimeMethod* method) ;
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
// System.Void EinzeleingabeScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_Start_m535376CDB8C7B5FB5DC5C139AD65C1FBEB425948 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4888CAE68C6E8097B4B342A9AB4E78BCCE5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C0BD551E305ECA3B6EBB24AC5A11077C0E5FC88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.text = "Wait for Server";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_4;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, _stringLiteral33EB4888CAE68C6E8097B4B342A9AB4E78BCCE5B, NULL);
		// InvokeRepeating("CheckServer", 1, 5);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral6C0BD551E305ECA3B6EBB24AC5A11077C0E5FC88, (1.0f), (5.0f), NULL);
		// }
		return;
	}
}
// System.Void EinzeleingabeScript::CheckServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_CheckServer_m66792177FE43DEF040CBB2BF3F83DB15996AF6D2 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CheckIfServerBusy());
		RuntimeObject* L_0;
		L_0 = EinzeleingabeScript_CheckIfServerBusy_m482888FEFEC4E1A26B2BEFFC14E15E2BE98CF91F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EinzeleingabeScript::CheckIfServerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EinzeleingabeScript_CheckIfServerBusy_m482888FEFEC4E1A26B2BEFFC14E15E2BE98CF91F (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* L_0 = (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7*)il2cpp_codegen_object_new(U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckIfServerBusyU3Ed__6__ctor_m26E59F76FB4F61E6BF965749DD9DB4362EAD9BDB(L_0, 0, NULL);
		U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EinzeleingabeScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_Update_mD60A8C48270237556A56E71EDDAA6F82664AAAE9 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EinzeleingabeScript::SzenewechselnFoto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_SzenewechselnFoto_m94E4BDCA4AD8D306A4AC4CDB1ACB0F4ECA78DCEA (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void EinzeleingabeScript::SzenewechselninStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_SzenewechselninStart_mF220ED49A8B9EBBBDB288D72AC4403C52A8EBEA0 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void EinzeleingabeScript::SzenewechselScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_SzenewechselScreen_m308434C4B9B47ED96445F18D2354DB63414F110F (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void EinzeleingabeScript::SzenewechselninFinaleTexteingabe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_SzenewechselninFinaleTexteingabe_mF982266CCF621966F962787173BBE73BE46B03DA (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(4, NULL);
		// }
		return;
	}
}
// System.Void EinzeleingabeScript::TextSenden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_TextSenden_m7EF8AEF68E386F1BF8223027207E0445DEE584D8 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23957383F8F592D181722CBA0A2F2E9EE36F9854);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC068B1D5D98B52EEBEB48B649BFA59B8B61602);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// var tempText = input.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		V_0 = L_1;
		// Dictionary<string, string> JZeug = new Dictionary<string, string>()
		// {
		//     {"text", tempText },
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_1 = L_3;
		// jsonDaten = JsonConvert.SerializeObject(JZeug);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_5, NULL);
		__this->___jsonDaten_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonDaten_5), (void*)L_6);
		// StartCoroutine(TextSendenRequest(StartBildschirm.ipaddress+"/sendeText"));
		String_t* L_7 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralBEC068B1D5D98B52EEBEB48B649BFA59B8B61602, NULL);
		RuntimeObject* L_9;
		L_9 = EinzeleingabeScript_TextSendenRequest_m0FA525B0FED8E435CEC561897624E67FDB57EA42(__this, L_8, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// Invoke("FotoAnzeigen", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral23957383F8F592D181722CBA0A2F2E9EE36F9854, (1.0f), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EinzeleingabeScript::TextSendenRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EinzeleingabeScript_TextSendenRequest_m0FA525B0FED8E435CEC561897624E67FDB57EA42 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* L_0 = (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C*)il2cpp_codegen_object_new(U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTextSendenRequestU3Ed__13__ctor_m4C90DD337D4574CA7BAF283835C095436ED50DD5(L_0, 0, NULL);
		U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		return L_2;
	}
}
// System.Void EinzeleingabeScript::FotoAnzeigen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript_FotoAnzeigen_m7C6298D2CFBFF688014D6F964ACC555BCB07A2BD (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0C849CE9C01D9394549350B263E7E710FF5A1D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(FotoAnzeigenRequest(StartBildschirm.ipaddress+"/fotoAnzeigen"));
		String_t* L_0 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralC0C849CE9C01D9394549350B263E7E710FF5A1D6, NULL);
		RuntimeObject* L_2;
		L_2 = EinzeleingabeScript_FotoAnzeigenRequest_m254774F7576C5F8383FB520B77DEAAC880AEDF18(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EinzeleingabeScript::FotoAnzeigenRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EinzeleingabeScript_FotoAnzeigenRequest_m254774F7576C5F8383FB520B77DEAAC880AEDF18 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, String_t* ___0_uri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* L_0 = (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9*)il2cpp_codegen_object_new(U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFotoAnzeigenRequestU3Ed__15__ctor_m94114CF93C2669E2C80B134B3396DE78E0F0D052(L_0, 0, NULL);
		U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* L_2 = L_1;
		String_t* L_3 = ___0_uri;
		NullCheck(L_2);
		L_2->___uri_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___uri_2), (void*)L_3);
		return L_2;
	}
}
// System.Void EinzeleingabeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EinzeleingabeScript__ctor_mD04EB1F500BE169DB5F678F3B2CA6AA53D18D6B7 (EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* __this, const RuntimeMethod* method) 
{
	{
		// private Boolean serverBusy = true;
		__this->___serverBusy_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6__ctor_m26E59F76FB4F61E6BF965749DD9DB4362EAD9BDB (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6_System_IDisposable_Dispose_m72FCA1FFEED5910940356CEFBB7DFBDFF4274180 (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CCheckIfServerBusyU3Ed__6_U3CU3Em__Finally1_m2071956E2279AC6AFA09C4A883A561CFB4F85D0A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean EinzeleingabeScript/<CheckIfServerBusy>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckIfServerBusyU3Ed__6_MoveNext_m0D6381CEDE1372D704445AECE3C62854CB6CA29B (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901BD2CEF383AF3534BFD2FA421727B903257D1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E40705EFD475FBA58D5BFB67D64748F1343856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFA9859617B6D33D0AA9E530299F77DC941E9DDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2BE123BCA3F6FBFB7DC8B0C90B3274B5D6A4B00);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0108:
			{// begin fault (depth: 1)
				U3CCheckIfServerBusyU3Ed__6_System_IDisposable_Dispose_m72FCA1FFEED5910940356CEFBB7DFBDFF4274180(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_0067_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_0110;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest request = UnityWebRequest.Get(StartBildschirm.ipaddress+"/checkServerStatus"))
				String_t* L_3 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
				String_t* L_4;
				L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralDFA9859617B6D33D0AA9E530299F77DC941E9DDF, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
				L_5 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_4, NULL);
				__this->___U3CrequestU3E5__1_3 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_6);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
				L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
				__this->___U3CU3E2__current_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0110;
			}

IL_0067_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (request.downloadHandler.text == "Server beschaeftigt")
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_8);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_9;
				L_9 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_8, NULL);
				NullCheck(L_9);
				String_t* L_10;
				L_10 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_9, NULL);
				bool L_11;
				L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralC1E40705EFD475FBA58D5BFB67D64748F1343856, NULL);
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_009b_1;
				}
			}
			{
				// serverBusy= true;
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_13 = __this->___U3CU3E4__this_2;
				NullCheck(L_13);
				L_13->___serverBusy_7 = (bool)1;
			}

IL_009b_1:
			{
				// if (request.downloadHandler.text == "Server frei" & serverBusy == true)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_14);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_15;
				L_15 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_14, NULL);
				NullCheck(L_15);
				String_t* L_16;
				L_16 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_15, NULL);
				bool L_17;
				L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF2BE123BCA3F6FBFB7DC8B0C90B3274B5D6A4B00, NULL);
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_18 = __this->___U3CU3E4__this_2;
				NullCheck(L_18);
				bool L_19 = L_18->___serverBusy_7;
				V_3 = (bool)((int32_t)((int32_t)L_17&(int32_t)L_19));
				bool L_20 = V_3;
				if (!L_20)
				{
					goto IL_00f5_1;
				}
			}
			{
				// serverBusy = false;
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_21 = __this->___U3CU3E4__this_2;
				NullCheck(L_21);
				L_21->___serverBusy_7 = (bool)0;
				// FotoAnzeigen();
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_22 = __this->___U3CU3E4__this_2;
				NullCheck(L_22);
				EinzeleingabeScript_FotoAnzeigen_m7C6298D2CFBFF688014D6F964ACC555BCB07A2BD(L_22, NULL);
				// input.text = "Click to enter text";
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_23 = __this->___U3CU3E4__this_2;
				NullCheck(L_23);
				InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_24 = L_23->___input_4;
				NullCheck(L_24);
				InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_24, _stringLiteral901BD2CEF383AF3534BFD2FA421727B903257D1B, NULL);
			}

IL_00f5_1:
			{
				U3CCheckIfServerBusyU3Ed__6_U3CU3Em__Finally1_m2071956E2279AC6AFA09C4A883A561CFB4F85D0A(__this, NULL);
				__this->___U3CrequestU3E5__1_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0110;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0110:
	{
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6_U3CU3Em__Finally1_m2071956E2279AC6AFA09C4A883A561CFB4F85D0A (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__1_3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__1_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object EinzeleingabeScript/<CheckIfServerBusy>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfServerBusyU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m21F6DE756708C08D64EC3175440A2A2C44751996 (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EinzeleingabeScript/<CheckIfServerBusy>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfServerBusyU3Ed__6_System_Collections_IEnumerator_Reset_m8FC40999083280B703BE0D4340DFBE6337EB1A95 (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckIfServerBusyU3Ed__6_System_Collections_IEnumerator_Reset_m8FC40999083280B703BE0D4340DFBE6337EB1A95_RuntimeMethod_var)));
	}
}
// System.Object EinzeleingabeScript/<CheckIfServerBusy>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfServerBusyU3Ed__6_System_Collections_IEnumerator_get_Current_m2227DF7EAD88FF06F9DC6ABB48856DB08670D40B (U3CCheckIfServerBusyU3Ed__6_t40D13E2B201A55B3151FB73F73A9EDA3A06A3FB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13__ctor_m4C90DD337D4574CA7BAF283835C095436ED50DD5 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13_System_IDisposable_Dispose_m0EF08F2C76DDDCD60AF40EBD63B933FA9CC8224C (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CTextSendenRequestU3Ed__13_U3CU3Em__Finally1_m99E52FE897E79B2E88BDFC579FEF18D439074658(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean EinzeleingabeScript/<TextSendenRequest>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTextSendenRequestU3Ed__13_MoveNext_m223C3055B906D4E041F249F103D9253D7DA5E3A8 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991B6BE86901B2A90CB317871544C76004951426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0162:
			{// begin fault (depth: 1)
				U3CTextSendenRequestU3Ed__13_System_IDisposable_Dispose_m0EF08F2C76DDDCD60AF40EBD63B933FA9CC8224C(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00be_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_016a;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using UnityWebRequest webrequest = new UnityWebRequest(url, "POST");
				String_t* L_3 = __this->___url_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_4, L_3, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
				__this->___U3CwebrequestU3E5__1_4 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebrequestU3E5__1_4), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webrequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_5);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_5, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				// byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
				L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_7 = __this->___U3CU3E4__this_3;
				NullCheck(L_7);
				String_t* L_8 = L_7->___jsonDaten_5;
				NullCheck(L_6);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
				__this->___U3CbufferU3E5__2_5 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__2_5), (void*)L_9);
				// webrequest.uploadHandler = new UploadHandlerRaw(buffer);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwebrequestU3E5__1_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___U3CbufferU3E5__2_5;
				UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_12 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_12, L_11, NULL);
				NullCheck(L_10);
				UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_10, L_12, NULL);
				// webrequest.downloadHandler = new DownloadHandlerBuffer();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebrequestU3E5__1_4;
				DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_14 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_14, NULL);
				NullCheck(L_13);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_13, L_14, NULL);
				// yield return webrequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_15);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_16;
				L_16 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_15, NULL);
				__this->___U3CU3E2__current_1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_016a;
			}

IL_00be_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// input.text = "";
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_17 = __this->___U3CU3E4__this_3;
				NullCheck(L_17);
				InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_18 = L_17->___input_4;
				NullCheck(L_18);
				InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				// switch (webrequest.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_19, NULL);
				V_2 = L_20;
				int32_t L_21 = V_2;
				__this->___U3CU3Es__3_6 = L_21;
				int32_t L_22 = __this->___U3CU3Es__3_6;
				V_3 = L_22;
				int32_t L_23 = V_3;
				switch (L_23)
				{
					case 0:
					{
						goto IL_0112_1;
					}
					case 1:
					{
						goto IL_011f_1;
					}
					case 2:
					{
						goto IL_0121_1;
					}
					case 3:
					{
						goto IL_012e_1;
					}
					case 4:
					{
						goto IL_013b_1;
					}
				}
			}
			{
				goto IL_0148_1;
			}

IL_0112_1:
			{
				// Debug.Log("InProgress");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A, NULL);
				// break;
				goto IL_0155_1;
			}

IL_011f_1:
			{
				// break;
				goto IL_0155_1;
			}

IL_0121_1:
			{
				// Debug.Log("ConnectionError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3, NULL);
				// break;
				goto IL_0155_1;
			}

IL_012e_1:
			{
				// Debug.Log("ProtocolError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87, NULL);
				// break;
				goto IL_0155_1;
			}

IL_013b_1:
			{
				// Debug.Log("DataProcessingError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral991B6BE86901B2A90CB317871544C76004951426, NULL);
				// break;
				goto IL_0155_1;
			}

IL_0148_1:
			{
				// Debug.Log("FehlerUnbekannt");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69, NULL);
				// break;
				goto IL_0155_1;
			}

IL_0155_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0159_1;
			}

IL_0159_1:
			{
				U3CTextSendenRequestU3Ed__13_U3CU3Em__Finally1_m99E52FE897E79B2E88BDFC579FEF18D439074658(__this, NULL);
				goto IL_016a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_016a:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13_U3CU3Em__Finally1_m99E52FE897E79B2E88BDFC579FEF18D439074658 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebrequestU3E5__1_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebrequestU3E5__1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object EinzeleingabeScript/<TextSendenRequest>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTextSendenRequestU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC1111C552C674D83553BB1811970DD5203A33741 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EinzeleingabeScript/<TextSendenRequest>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextSendenRequestU3Ed__13_System_Collections_IEnumerator_Reset_m01A7C7E5B3A665A5051723F3C2E8B6C1EAA40A13 (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTextSendenRequestU3Ed__13_System_Collections_IEnumerator_Reset_m01A7C7E5B3A665A5051723F3C2E8B6C1EAA40A13_RuntimeMethod_var)));
	}
}
// System.Object EinzeleingabeScript/<TextSendenRequest>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTextSendenRequestU3Ed__13_System_Collections_IEnumerator_get_Current_mC56B9DF6766CC0A3ADBF71DE83D4CF231012F19A (U3CTextSendenRequestU3Ed__13_t02E90683317E1ADB58772B08E10AEDACA8736F8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15__ctor_m94114CF93C2669E2C80B134B3396DE78E0F0D052 (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15_System_IDisposable_Dispose_mA5B015EBABD0EFEA4DEEAEBDC5E0C56BC08B91C2 (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CFotoAnzeigenRequestU3Ed__15_U3CU3Em__Finally1_m92099A0753C03D2067C03246F2CE17EE04915DFF(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean EinzeleingabeScript/<FotoAnzeigenRequest>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFotoAnzeigenRequestU3Ed__15_MoveNext_m322172D3F2265E0F57E8BAB192DAA3B7CE2694AF (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FA9CA0516770E56683987A0383FFB444803A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8BE8C44048516475EF9BFF8707407A532195F9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA52DE1A7340D9A868F2F8E6D1E91F7E45A3BE78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E40705EFD475FBA58D5BFB67D64748F1343856);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_01af:
			{// begin fault (depth: 1)
				U3CFotoAnzeigenRequestU3Ed__15_System_IDisposable_Dispose_mA5B015EBABD0EFEA4DEEAEBDC5E0C56BC08B91C2(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_005e_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_01b7;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest request = UnityWebRequest.Get(uri))
				String_t* L_3 = __this->___uri_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
				L_4 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_3, NULL);
				__this->___U3CrequestU3E5__1_4 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_4), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_5);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
				L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
				__this->___U3CU3E2__current_1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_01b7;
			}

IL_005e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// var a = JsonConvert.ToString(request.result);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_7, NULL);
				int32_t L_9 = L_8;
				RuntimeObject* L_10 = Box(Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var, &L_9);
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				String_t* L_11;
				L_11 = JsonConvert_ToString_mFF63E812FA486F6B6BBB6FDA2F8A6FDA6F7B4A04((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_10, NULL);
				__this->___U3CaU3E5__2_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaU3E5__2_5), (void*)L_11);
				// if (request.result == UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_12, NULL);
				V_2 = (bool)((((int32_t)L_13) == ((int32_t)2))? 1 : 0);
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00a0_1;
				}
			}
			{
				// Debug.Log("Connection Error");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral10FA9CA0516770E56683987A0383FFB444803A2C, NULL);
			}

IL_00a0_1:
			{
				// if(request.downloadHandler.text == "Alle Bilder verarbeitet")
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_15);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_16;
				L_16 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_15, NULL);
				NullCheck(L_16);
				String_t* L_17;
				L_17 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_16, NULL);
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralB8BE8C44048516475EF9BFF8707407A532195F9E, NULL);
				V_3 = L_18;
				bool L_19 = V_3;
				if (!L_19)
				{
					goto IL_00cc_1;
				}
			}
			{
				// SzenewechselninFinaleTexteingabe();
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_20 = __this->___U3CU3E4__this_3;
				NullCheck(L_20);
				EinzeleingabeScript_SzenewechselninFinaleTexteingabe_mF982266CCF621966F962787173BBE73BE46B03DA(L_20, NULL);
			}

IL_00cc_1:
			{
				// if (request.downloadHandler.text == "working")
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_21);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_22;
				L_22 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_21, NULL);
				NullCheck(L_22);
				String_t* L_23;
				L_23 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_22, NULL);
				bool L_24;
				L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralBA52DE1A7340D9A868F2F8E6D1E91F7E45A3BE78, NULL);
				V_4 = L_24;
				bool L_25 = V_4;
				if (!L_25)
				{
					goto IL_00fe_1;
				}
			}
			{
				// Debug.Log("Server beschaeftigt");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC1E40705EFD475FBA58D5BFB67D64748F1343856, NULL);
				goto IL_0195_1;
			}

IL_00fe_1:
			{
				// byte[] k = Convert.FromBase64String(request.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_26);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_27;
				L_27 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_26, NULL);
				NullCheck(L_27);
				String_t* L_28;
				L_28 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_27, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
				L_29 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_28, NULL);
				__this->___U3CkU3E5__3_6 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkU3E5__3_6), (void*)L_29);
				// Texture2D neu = new Texture2D(2, 2);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_30, 2, 2, NULL);
				__this->___U3CneuU3E5__4_7 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CneuU3E5__4_7), (void*)L_30);
				// neu.LoadImage(k);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___U3CneuU3E5__4_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___U3CkU3E5__3_6;
				bool L_33;
				L_33 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_31, L_32, NULL);
				// bild.sprite = Sprite.Create(neu, new Rect(0, 0, neu.width, neu.height), new Vector2());
				EinzeleingabeScript_t23079A1D32731C6D8A143390FB3B5A3F3674EA3C* L_34 = __this->___U3CU3E4__this_3;
				NullCheck(L_34);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = L_34->___bild_6;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = __this->___U3CneuU3E5__4_7;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->___U3CneuU3E5__4_7;
				NullCheck(L_37);
				int32_t L_38;
				L_38 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->___U3CneuU3E5__4_7;
				NullCheck(L_39);
				int32_t L_40;
				L_40 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_39);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41;
				memset((&L_41), 0, sizeof(L_41));
				Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_41), (0.0f), (0.0f), ((float)L_38), ((float)L_40), /*hidden argument*/NULL);
				il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_5;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_43;
				L_43 = Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7(L_36, L_41, L_42, NULL);
				NullCheck(L_35);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_35, L_43, NULL);
				__this->___U3CkU3E5__3_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkU3E5__3_6), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				__this->___U3CneuU3E5__4_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CneuU3E5__4_7), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			}

IL_0195_1:
			{
				__this->___U3CaU3E5__2_5 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaU3E5__2_5), (void*)(String_t*)NULL);
				U3CFotoAnzeigenRequestU3Ed__15_U3CU3Em__Finally1_m92099A0753C03D2067C03246F2CE17EE04915DFF(__this, NULL);
				__this->___U3CrequestU3E5__1_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_01b7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01b7:
	{
		bool L_44 = V_0;
		return L_44;
	}
}
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15_U3CU3Em__Finally1_m92099A0753C03D2067C03246F2CE17EE04915DFF (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__1_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object EinzeleingabeScript/<FotoAnzeigenRequest>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFotoAnzeigenRequestU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCF20E4E777F3343335A9F763752F163454DEBD69 (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EinzeleingabeScript/<FotoAnzeigenRequest>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoAnzeigenRequestU3Ed__15_System_Collections_IEnumerator_Reset_m8D63404E1FE8CB83E98FB97CACFF4C6870B7BEF1 (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFotoAnzeigenRequestU3Ed__15_System_Collections_IEnumerator_Reset_m8D63404E1FE8CB83E98FB97CACFF4C6870B7BEF1_RuntimeMethod_var)));
	}
}
// System.Object EinzeleingabeScript/<FotoAnzeigenRequest>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFotoAnzeigenRequestU3Ed__15_System_Collections_IEnumerator_get_Current_mB7B0F0281063EBBD0937954BC9F6C6C3BADE961E (U3CFotoAnzeigenRequestU3Ed__15_t7C4EB2FF3648AC37AC949C19027078DD4F6229A9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FinalerTextScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalerTextScript_Start_m8042783758963BFED2211BC130162470CCF9BD16 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E26D6E9ED7CB9DF205DD7433C05FD21C674469F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("getFinalText", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral3E26D6E9ED7CB9DF205DD7433C05FD21C674469F, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void FinalerTextScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalerTextScript_Update_mD475489326752EDE3361B9DAEFD1EB75E4B9E9DA (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FinalerTextScript::wechselZuStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalerTextScript_wechselZuStart_m4E3F081BB429BADF97654434EE7FCE412A771CC5 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void FinalerTextScript::getFinalText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalerTextScript_getFinalText_m4DC92F5EA5F9DD30AD8022D152C5FE39CC72CA9B (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(getFinalTextRequest());
		RuntimeObject* L_0;
		L_0 = FinalerTextScript_getFinalTextRequest_m69B113547B547E3CFABAC16FFA034226FF4552F8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FinalerTextScript::getFinalTextRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinalerTextScript_getFinalTextRequest_m69B113547B547E3CFABAC16FFA034226FF4552F8 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* L_0 = (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE*)il2cpp_codegen_object_new(U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CgetFinalTextRequestU3Ed__6__ctor_mE682DA83F109D75AD33CAD0190A7435ADDEE665D(L_0, 0, NULL);
		U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FinalerTextScript::setFinalText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalerTextScript_setFinalText_m8F7FB3F437721E25C3E98FE3B7FC5C146609E03C (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5B1C0CC27ADC06DA6556C0F8878C6C15A77DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	{
		// var tempText = input.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		V_0 = L_1;
		// Dictionary<string, string> JZeug = new Dictionary<string, string>()
		// {
		//     {"text", tempText },
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_1 = L_3;
		// jsonDaten = JsonConvert.SerializeObject(JZeug);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_5, NULL);
		__this->___jsonDaten_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonDaten_5), (void*)L_6);
		// StartCoroutine(setFinalTextRequest());
		RuntimeObject* L_7;
		L_7 = FinalerTextScript_setFinalTextRequest_mEFA61B8D6354E56C5C09C822946FC4B5AF814515(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// Invoke("wechselZuStart", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB5B1C0CC27ADC06DA6556C0F8878C6C15A77DE26, (2.0f), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FinalerTextScript::setFinalTextRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinalerTextScript_setFinalTextRequest_mEFA61B8D6354E56C5C09C822946FC4B5AF814515 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* L_0 = (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6*)il2cpp_codegen_object_new(U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CsetFinalTextRequestU3Ed__8__ctor_m464832DB94D048346AA541405906098B1D4ECC25(L_0, 0, NULL);
		U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FinalerTextScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalerTextScript__ctor_mC83253E626E78F4C855DC6BF0EBE37C90BEEB8F2 (FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6__ctor_mE682DA83F109D75AD33CAD0190A7435ADDEE665D (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6_System_IDisposable_Dispose_m9ACD23E235A54116473A4DC77A4B7D6D239BD931 (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CgetFinalTextRequestU3Ed__6_U3CU3Em__Finally1_m2B4465FF7D47EB85E6F66838EB83BBB4B9897A5F(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FinalerTextScript/<getFinalTextRequest>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetFinalTextRequestU3Ed__6_MoveNext_mAC770EDE983E4EE0D274C384C106A5D64603AE55 (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7725A61903B9C3798C36ED5B3F794056DB11965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00f2:
			{// begin fault (depth: 1)
				U3CgetFinalTextRequestU3Ed__6_System_IDisposable_Dispose_m9ACD23E235A54116473A4DC77A4B7D6D239BD931(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_0067_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00fa;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest request = UnityWebRequest.Get(StartBildschirm.ipaddress+"/getFinalText"))
				String_t* L_3 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
				String_t* L_4;
				L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralB7725A61903B9C3798C36ED5B3F794056DB11965, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
				L_5 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_4, NULL);
				__this->___U3CrequestU3E5__1_3 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_6);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
				L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
				__this->___U3CU3E2__current_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00fa;
			}

IL_0067_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// Debug.Log(request.result);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_8, NULL);
				int32_t L_10 = L_9;
				RuntimeObject* L_11 = Box(Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var, &L_10);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
				// Debug.Log(request.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_12);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_13;
				L_13 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_12, NULL);
				NullCheck(L_13);
				String_t* L_14;
				L_14 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_13, NULL);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
				// if (request.result == UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_15, NULL);
				V_2 = (bool)((((int32_t)L_16) == ((int32_t)2))? 1 : 0);
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_00bc_1;
				}
			}
			{
				// Debug.Log("Error");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
				goto IL_00df_1;
			}

IL_00bc_1:
			{
				// input.text = request.downloadHandler.text;
				FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* L_18 = __this->___U3CU3E4__this_2;
				NullCheck(L_18);
				InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_19 = L_18->___input_4;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CrequestU3E5__1_3;
				NullCheck(L_20);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_21;
				L_21 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_20, NULL);
				NullCheck(L_21);
				String_t* L_22;
				L_22 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_21, NULL);
				NullCheck(L_19);
				InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_19, L_22, NULL);
			}

IL_00df_1:
			{
				U3CgetFinalTextRequestU3Ed__6_U3CU3Em__Finally1_m2B4465FF7D47EB85E6F66838EB83BBB4B9897A5F(__this, NULL);
				__this->___U3CrequestU3E5__1_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00fa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fa:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6_U3CU3Em__Finally1_m2B4465FF7D47EB85E6F66838EB83BBB4B9897A5F (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__1_3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__1_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object FinalerTextScript/<getFinalTextRequest>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgetFinalTextRequestU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F5491761C1A4045C0050B2F2DCAA3ADC2582FFA (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FinalerTextScript/<getFinalTextRequest>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetFinalTextRequestU3Ed__6_System_Collections_IEnumerator_Reset_m36A6F02D1C098EFBC6AF07938172681ADE7625F8 (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetFinalTextRequestU3Ed__6_System_Collections_IEnumerator_Reset_m36A6F02D1C098EFBC6AF07938172681ADE7625F8_RuntimeMethod_var)));
	}
}
// System.Object FinalerTextScript/<getFinalTextRequest>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgetFinalTextRequestU3Ed__6_System_Collections_IEnumerator_get_Current_m8EF7C1ADED11F9A878B1C97B021E20DE5A8FC84A (U3CgetFinalTextRequestU3Ed__6_t78268B6A53791ED3A5FC0C5D72EAB5C8F566DCFE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8__ctor_m464832DB94D048346AA541405906098B1D4ECC25 (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8_System_IDisposable_Dispose_m02B996D7703D794283F784FE10CF86E0EBE802AC (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CsetFinalTextRequestU3Ed__8_U3CU3Em__Finally1_m0D2F06194B65A8529A2427A7A6DE00F1174831A6(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FinalerTextScript/<setFinalTextRequest>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CsetFinalTextRequestU3Ed__8_MoveNext_mEEF10CBFF48191D94D1316A527309CDB3CBD387C (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597A5FF92E7AD49BC50D72FFCA6A88FE70C5E81F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991B6BE86901B2A90CB317871544C76004951426);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0155:
			{// begin fault (depth: 1)
				U3CsetFinalTextRequestU3Ed__8_System_IDisposable_Dispose_m02B996D7703D794283F784FE10CF86E0EBE802AC(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00c7_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_015d;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using UnityWebRequest webrequest = new UnityWebRequest(StartBildschirm.ipaddress+"/setFinalText", "POST");
				String_t* L_3 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
				String_t* L_4;
				L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral597A5FF92E7AD49BC50D72FFCA6A88FE70C5E81F, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_5, L_4, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
				__this->___U3CwebrequestU3E5__1_3 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebrequestU3E5__1_3), (void*)L_5);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webrequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CwebrequestU3E5__1_3;
				NullCheck(L_6);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_6, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				// byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
				L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				FinalerTextScript_t36A7C02B2298587E4757D59C43C3033CE6302B8D* L_8 = __this->___U3CU3E4__this_2;
				NullCheck(L_8);
				String_t* L_9 = L_8->___jsonDaten_5;
				NullCheck(L_7);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
				L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_9);
				__this->___U3CbufferU3E5__2_4 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__2_4), (void*)L_10);
				// webrequest.uploadHandler = new UploadHandlerRaw(buffer);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwebrequestU3E5__1_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___U3CbufferU3E5__2_4;
				UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_13 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_13, L_12, NULL);
				NullCheck(L_11);
				UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_11, L_13, NULL);
				// webrequest.downloadHandler = new DownloadHandlerBuffer();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CwebrequestU3E5__1_3;
				DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_15 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_15, NULL);
				NullCheck(L_14);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_14, L_15, NULL);
				// yield return webrequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___U3CwebrequestU3E5__1_3;
				NullCheck(L_16);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_17;
				L_17 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_16, NULL);
				__this->___U3CU3E2__current_1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_015d;
			}

IL_00c7_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// switch (webrequest.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___U3CwebrequestU3E5__1_3;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_18, NULL);
				V_2 = L_19;
				int32_t L_20 = V_2;
				__this->___U3CU3Es__3_5 = L_20;
				int32_t L_21 = __this->___U3CU3Es__3_5;
				V_3 = L_21;
				int32_t L_22 = V_3;
				switch (L_22)
				{
					case 0:
					{
						goto IL_0105_1;
					}
					case 1:
					{
						goto IL_0112_1;
					}
					case 2:
					{
						goto IL_0114_1;
					}
					case 3:
					{
						goto IL_0121_1;
					}
					case 4:
					{
						goto IL_012e_1;
					}
				}
			}
			{
				goto IL_013b_1;
			}

IL_0105_1:
			{
				// Debug.Log("InProgress");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A, NULL);
				// break;
				goto IL_0148_1;
			}

IL_0112_1:
			{
				// break;
				goto IL_0148_1;
			}

IL_0114_1:
			{
				// Debug.Log("ConnectionError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3, NULL);
				// break;
				goto IL_0148_1;
			}

IL_0121_1:
			{
				// Debug.Log("ProtocolError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87, NULL);
				// break;
				goto IL_0148_1;
			}

IL_012e_1:
			{
				// Debug.Log("DataProcessingError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral991B6BE86901B2A90CB317871544C76004951426, NULL);
				// break;
				goto IL_0148_1;
			}

IL_013b_1:
			{
				// Debug.Log("FehlerUnbekannt");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69, NULL);
				// break;
				goto IL_0148_1;
			}

IL_0148_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_014c_1;
			}

IL_014c_1:
			{
				U3CsetFinalTextRequestU3Ed__8_U3CU3Em__Finally1_m0D2F06194B65A8529A2427A7A6DE00F1174831A6(__this, NULL);
				goto IL_015d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_015d:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8_U3CU3Em__Finally1_m0D2F06194B65A8529A2427A7A6DE00F1174831A6 (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebrequestU3E5__1_3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebrequestU3E5__1_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object FinalerTextScript/<setFinalTextRequest>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsetFinalTextRequestU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED8DACAC17FE2BEA11344D05A2921EB97B31B205 (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FinalerTextScript/<setFinalTextRequest>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsetFinalTextRequestU3Ed__8_System_Collections_IEnumerator_Reset_mBB0D2A007D97817F2BDF5FC043EA09B7DBD0D2B2 (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CsetFinalTextRequestU3Ed__8_System_Collections_IEnumerator_Reset_mBB0D2A007D97817F2BDF5FC043EA09B7DBD0D2B2_RuntimeMethod_var)));
	}
}
// System.Object FinalerTextScript/<setFinalTextRequest>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsetFinalTextRequestU3Ed__8_System_Collections_IEnumerator_get_Current_mBCB7008DF4959288437AB153D47660A021E6335E (U3CsetFinalTextRequestU3Ed__8_t04CCB792B4B2E314A70E2DBABEEF19FA969119F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FotoScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_Start_m0633E0C181AC91E4FD3939D3DC8CAAFC26F8355B (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_0;
		L_0 = WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA(NULL);
		__this->___devices_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___devices_7), (void*)L_0);
		// WebCamDevice device = default;
		il2cpp_codegen_initobj((&V_0), sizeof(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C));
		// StartCamera(device);
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_1 = V_0;
		FotoScript_StartCamera_m0309DC3A1354E49F235B905578D8830D6679A464(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void FotoScript::StopCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_StopCamera_mE0324FC2EA8DCAE82CC6FDCFD76BF838B62DB2EB (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (webCamTexture == null)
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_0 = __this->___webCamTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_002c;
	}

IL_0014:
	{
		// webCamTexture.Stop();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_3 = __this->___webCamTexture_4;
		NullCheck(L_3);
		WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184(L_3, NULL);
		// Destroy(webCamTexture);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___webCamTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void FotoScript::StartCamera(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_StartCamera_m0309DC3A1354E49F235B905578D8830D6679A464 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___0_device, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCamera();
		FotoScript_StopCamera_mE0324FC2EA8DCAE82CC6FDCFD76BF838B62DB2EB(__this, NULL);
		// webCamTexture = new WebCamTexture(device.name, Screen.width, Screen.height, 60);
		String_t* L_0;
		L_0 = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E((&___0_device), NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_3 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)il2cpp_codegen_object_new(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebCamTexture__ctor_mAF6018FD8752F8527E23C6A800A314C87322D1DD(L_3, L_0, L_1, L_2, ((int32_t)60), NULL);
		__this->___webCamTexture_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webCamTexture_4), (void*)L_3);
		// webCamTexture.Play();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___webCamTexture_4;
		NullCheck(L_4);
		WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26(L_4, NULL);
		// }
		return;
	}
}
// System.Void FotoScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_Update_m522C8FBCA7583BE3829EA6C7176837E4F2E9EFE5 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!fotoGemacht)
		bool L_0 = __this->___fotoGemacht_10;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		// int orientierung = -webCamTexture.videoRotationAngle;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_2 = __this->___webCamTexture_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F(L_2, NULL);
		V_1 = ((-L_3));
		// bild.rectTransform.localEulerAngles = new Vector3(0, 0, orientierung);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___bild_6;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_4, NULL);
		int32_t L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), ((float)L_6), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_5, L_7, NULL);
		// hilfsTextur = TextureToT2D(webCamTexture);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_8 = __this->___webCamTexture_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = FotoScript_TextureToT2D_mB3D06FA66A3B6999477A3A2E1D4BDF1797703F4B(__this, L_8, NULL);
		__this->___hilfsTextur_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hilfsTextur_5), (void*)L_9);
		// bild.sprite = Sprite.Create(hilfsTextur, new Rect(0, 0, hilfsTextur.width, hilfsTextur.height), new Vector2());
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___bild_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___hilfsTextur_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___hilfsTextur_5;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___hilfsTextur_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_16), (0.0f), (0.0f), ((float)L_13), ((float)L_15), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18;
		L_18 = Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7(L_11, L_16, L_17, NULL);
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_18, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void FotoScript::SzenewechselnFoto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_SzenewechselnFoto_mE9EFE34516F2A4F5ECE2F607A34CC47FD58DD48B (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCamera();
		FotoScript_StopCamera_mE0324FC2EA8DCAE82CC6FDCFD76BF838B62DB2EB(__this, NULL);
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void FotoScript::SzenewechselninStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_SzenewechselninStart_mD6AAFEFA73A31BF046F19BEAEBE2BD5AE2C46B5D (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCamera();
		FotoScript_StopCamera_mE0324FC2EA8DCAE82CC6FDCFD76BF838B62DB2EB(__this, NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void FotoScript::SzeneEinzeleingabe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_SzeneEinzeleingabe_m3E7B68E460840C1BFD0318BD74668B5AD1A91D56 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCamera();
		FotoScript_StopCamera_mE0324FC2EA8DCAE82CC6FDCFD76BF838B62DB2EB(__this, NULL);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void FotoScript::Foto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_Foto_m4F32833FD69E73DC9D58731089FD33AE3CF105BA (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// fotoGemacht= true;
		__this->___fotoGemacht_10 = (bool)1;
		// if (webCamTexture == null)
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_0 = __this->___webCamTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// StartCamera(device);
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_3 = __this->___device_8;
		FotoScript_StartCamera_m0309DC3A1354E49F235B905578D8830D6679A464(__this, L_3, NULL);
	}

IL_0027:
	{
		// StartCoroutine(FotoIE());
		RuntimeObject* L_4;
		L_4 = FotoScript_FotoIE_mA4E3FF9275790581B3FF0E76DFCA3E1D26DB7F53(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FotoScript::FotoIE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FotoScript_FotoIE_mA4E3FF9275790581B3FF0E76DFCA3E1D26DB7F53 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* L_0 = (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE*)il2cpp_codegen_object_new(U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFotoIEU3Ed__15__ctor_mB5C8B21ED7CF979EAB43C58262FC7AFA4F34C20A(L_0, 0, NULL);
		U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// UnityEngine.Texture2D FotoScript::TextureToT2D(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FotoScript_TextureToT2D_mB3D06FA66A3B6999477A3A2E1D4BDF1797703F4B (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		// Texture2D tempT2D = new Texture2D(texture.width, texture.height, TextureFormat.RGBA32,false);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_4, L_1, L_3, 4, (bool)0, NULL);
		V_0 = L_4;
		// Graphics.CopyTexture(texture, tempT2D);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___0_texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58(L_5, L_6, NULL);
		// tempT2D.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		NullCheck(L_7);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_7, (bool)1, NULL);
		// return tempT2D;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = V_0;
		V_1 = L_8;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = V_1;
		return L_9;
	}
}
// System.Void FotoScript::SendeFoto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript_SendeFoto_mDC5164406FF50F9486CFF9DDF7B7A5ADFA332392 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800981F38C4B8CC9D58A8F899C0F450220C2F458);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	String_t* V_4 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_5 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Texture2D temp = new Texture2D(hilfsTextur.width,hilfsTextur.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___hilfsTextur_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___hilfsTextur_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_4, L_1, L_3, NULL);
		V_0 = L_4;
		// var pixels = bild.sprite.texture.GetPixels((int)bild.sprite.textureRect.x,
		// (int)bild.sprite.textureRect.y,
		// (int)bild.sprite.textureRect.width,
		// (int)bild.sprite.textureRect.height);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___bild_6;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1(L_5, NULL);
		NullCheck(L_6);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7;
		L_7 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_6, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___bild_6;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1(L_8, NULL);
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_9, NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_6), NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___bild_6;
		NullCheck(L_12);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13;
		L_13 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1(L_12, NULL);
		NullCheck(L_13);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_13, NULL);
		V_6 = L_14;
		float L_15;
		L_15 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_6), NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___bild_6;
		NullCheck(L_16);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17;
		L_17 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1(L_16, NULL);
		NullCheck(L_17);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		L_18 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_17, NULL);
		V_6 = L_18;
		float L_19;
		L_19 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_6), NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = __this->___bild_6;
		NullCheck(L_20);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21;
		L_21 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1(L_20, NULL);
		NullCheck(L_21);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_21, NULL);
		V_6 = L_22;
		float L_23;
		L_23 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_6), NULL);
		NullCheck(L_7);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_24;
		L_24 = Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE(L_7, il2cpp_codegen_cast_double_to_int<int32_t>(L_11), il2cpp_codegen_cast_double_to_int<int32_t>(L_15), il2cpp_codegen_cast_double_to_int<int32_t>(L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_23), NULL);
		V_1 = L_24;
		// temp.SetPixels(pixels);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_26 = V_1;
		NullCheck(L_25);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_25, L_26, NULL);
		// int orientierung = -webCamTexture.videoRotationAngle;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_27 = __this->___webCamTexture_4;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F(L_27, NULL);
		V_2 = ((-L_28));
		// bild.rectTransform.localEulerAngles = new Vector3(0, 0, orientierung);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___bild_6;
		NullCheck(L_29);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30;
		L_30 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_29, NULL);
		int32_t L_31 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), ((float)L_31), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_30, L_32, NULL);
		// byte[] bytes = temp.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_33, NULL);
		V_3 = L_34;
		// string fotoString = Convert.ToBase64String(bytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_35, NULL);
		V_4 = L_36;
		// Dictionary<string, string> JZeug = new Dictionary<string, string>()
		// {
		//     {"name", StartBildschirm.personid },
		//     {"foto", fotoString },
		//     {"text", "" },
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_37 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_37, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = L_37;
		String_t* L_39 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___personid_7;
		NullCheck(L_38);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_38, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_39, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_40 = L_38;
		String_t* L_41 = V_4;
		NullCheck(L_40);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_40, _stringLiteral800981F38C4B8CC9D58A8F899C0F450220C2F458, L_41, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = L_40;
		NullCheck(L_42);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_42, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_5 = L_42;
		// jsonDaten = JsonConvert.SerializeObject(JZeug);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = V_5;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_43, NULL);
		__this->___jsonDaten_9 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonDaten_9), (void*)L_44);
		// StartCoroutine(SendeFotoRequest());
		RuntimeObject* L_45;
		L_45 = FotoScript_SendeFotoRequest_m811421AC72915C523681BCFD4F7551C530B42C47(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_46;
		L_46 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_45, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FotoScript::SendeFotoRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FotoScript_SendeFotoRequest_m811421AC72915C523681BCFD4F7551C530B42C47 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* L_0 = (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B*)il2cpp_codegen_object_new(U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendeFotoRequestU3Ed__18__ctor_mA8644089C1B0038AE7BD6E4864FB2B15002FD849(L_0, 0, NULL);
		U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FotoScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FotoScript__ctor_m36874449CDB6EF3A30B2A0BE8C0F6ADC28DC9813 (FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* __this, const RuntimeMethod* method) 
{
	{
		// private WebCamDevice device = default;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* L_0 = (&__this->___device_8);
		il2cpp_codegen_initobj(L_0, sizeof(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C));
		// Boolean fotoGemacht = false;
		__this->___fotoGemacht_10 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FotoScript/<FotoIE>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoIEU3Ed__15__ctor_mB5C8B21ED7CF979EAB43C58262FC7AFA4F34C20A (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FotoScript/<FotoIE>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoIEU3Ed__15_System_IDisposable_Dispose_mCC58E17EB0451D5B06828B90A5AA8325334C3CF0 (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FotoScript/<FotoIE>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFotoIEU3Ed__15_MoveNext_m8043BCE86E61CF64769FB7A3D8F49D5321EC96A7 (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int orientierung = -webCamTexture.videoRotationAngle;
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_5 = L_4->___webCamTexture_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F(L_5, NULL);
		__this->___U3CorientierungU3E5__1_3 = ((-L_6));
		// bild.rectTransform.localEulerAngles = new Vector3(0, 0, orientierung);
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7->___bild_6;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_8, NULL);
		int32_t L_10 = __this->___U3CorientierungU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), (0.0f), ((float)L_10), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_9, L_11, NULL);
		// hilfsTextur = TextureToT2D(webCamTexture);
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_12 = __this->___U3CU3E4__this_2;
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_13 = __this->___U3CU3E4__this_2;
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_15 = L_14->___webCamTexture_4;
		NullCheck(L_13);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16;
		L_16 = FotoScript_TextureToT2D_mB3D06FA66A3B6999477A3A2E1D4BDF1797703F4B(L_13, L_15, NULL);
		NullCheck(L_12);
		L_12->___hilfsTextur_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___hilfsTextur_5), (void*)L_16);
		// bild.sprite = Sprite.Create(hilfsTextur, new Rect(0, 0, hilfsTextur.width, hilfsTextur.height), new Vector2());
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = L_17->___bild_6;
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = L_19->___hilfsTextur_5;
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = L_21->___hilfsTextur_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_24 = __this->___U3CU3E4__this_2;
		NullCheck(L_24);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = L_24->___hilfsTextur_5;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_27), (0.0f), (0.0f), ((float)L_23), ((float)L_26), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29;
		L_29 = Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7(L_20, L_27, L_28, NULL);
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_29, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FotoScript/<FotoIE>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFotoIEU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41E7519EE0935D3FE40643F1D5C10E51139733D0 (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FotoScript/<FotoIE>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFotoIEU3Ed__15_System_Collections_IEnumerator_Reset_mDF6CD687863B9348809A050F6CF36238EB894FF8 (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFotoIEU3Ed__15_System_Collections_IEnumerator_Reset_mDF6CD687863B9348809A050F6CF36238EB894FF8_RuntimeMethod_var)));
	}
}
// System.Object FotoScript/<FotoIE>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFotoIEU3Ed__15_System_Collections_IEnumerator_get_Current_m249C0A5AD5CB538194DA793802F1CA7C57D0CE24 (U3CFotoIEU3Ed__15_t7AAB1F292184D7007A66055AA97A5F8BC18BA0BE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FotoScript/<SendeFotoRequest>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18__ctor_mA8644089C1B0038AE7BD6E4864FB2B15002FD849 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FotoScript/<SendeFotoRequest>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18_System_IDisposable_Dispose_mC06658865E0D03A3750FB1DB07FD091895D87294 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CSendeFotoRequestU3Ed__18_U3CU3Em__Finally1_mED781ABA3E95106F89057F2A2194C1A2F9AF1299(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FotoScript/<SendeFotoRequest>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendeFotoRequestU3Ed__18_MoveNext_m813527F3924EF5C96D4F3E309B934FEDA3BD3243 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7725E3DF96C7A36E06FD9F3348315180FC13FBA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991B6BE86901B2A90CB317871544C76004951426);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_016d:
			{// begin fault (depth: 1)
				U3CSendeFotoRequestU3Ed__18_System_IDisposable_Dispose_mC06658865E0D03A3750FB1DB07FD091895D87294(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00df_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0175;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// string url = StartBildschirm.ipaddress+"/sendeFoto";
				String_t* L_3 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
				String_t* L_4;
				L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral7725E3DF96C7A36E06FD9F3348315180FC13FBA3, NULL);
				__this->___U3CurlU3E5__1_3 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CurlU3E5__1_3), (void*)L_4);
				// using UnityWebRequest webrequest = new UnityWebRequest(url, "POST");
				String_t* L_5 = __this->___U3CurlU3E5__1_3;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_6, L_5, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
				__this->___U3CwebrequestU3E5__2_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebrequestU3E5__2_4), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webrequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwebrequestU3E5__2_4;
				NullCheck(L_7);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_7, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				// byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
				L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_9 = __this->___U3CU3E4__this_2;
				NullCheck(L_9);
				String_t* L_10 = L_9->___jsonDaten_9;
				NullCheck(L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
				L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, L_10);
				__this->___U3CbufferU3E5__3_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__3_5), (void*)L_11);
				// webrequest.uploadHandler = new UploadHandlerRaw(buffer);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CwebrequestU3E5__2_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___U3CbufferU3E5__3_5;
				UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_14 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_14, L_13, NULL);
				NullCheck(L_12);
				UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_12, L_14, NULL);
				// webrequest.downloadHandler = new DownloadHandlerBuffer();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebrequestU3E5__2_4;
				DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_16 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_16, NULL);
				NullCheck(L_15);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_15, L_16, NULL);
				// SzeneEinzeleingabe();
				FotoScript_tDFF85CBEA6BEBD5C84ED52ED297BC7A152132B4B* L_17 = __this->___U3CU3E4__this_2;
				NullCheck(L_17);
				FotoScript_SzeneEinzeleingabe_m3E7B68E460840C1BFD0318BD74668B5AD1A91D56(L_17, NULL);
				// yield return webrequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___U3CwebrequestU3E5__2_4;
				NullCheck(L_18);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_19;
				L_19 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_18, NULL);
				__this->___U3CU3E2__current_1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0175;
			}

IL_00df_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// switch (webrequest.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CwebrequestU3E5__2_4;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_20, NULL);
				V_2 = L_21;
				int32_t L_22 = V_2;
				__this->___U3CU3Es__4_6 = L_22;
				int32_t L_23 = __this->___U3CU3Es__4_6;
				V_3 = L_23;
				int32_t L_24 = V_3;
				switch (L_24)
				{
					case 0:
					{
						goto IL_011d_1;
					}
					case 1:
					{
						goto IL_012a_1;
					}
					case 2:
					{
						goto IL_012c_1;
					}
					case 3:
					{
						goto IL_0139_1;
					}
					case 4:
					{
						goto IL_0146_1;
					}
				}
			}
			{
				goto IL_0153_1;
			}

IL_011d_1:
			{
				// Debug.Log("InProgress");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A, NULL);
				// break;
				goto IL_0160_1;
			}

IL_012a_1:
			{
				// break;
				goto IL_0160_1;
			}

IL_012c_1:
			{
				// Debug.Log("ConnectionError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0139_1:
			{
				// Debug.Log("ProtocolError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0146_1:
			{
				// Debug.Log("DataProcessingError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral991B6BE86901B2A90CB317871544C76004951426, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0153_1:
			{
				// Debug.Log("FehlerUnbekannt");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4432DEE88182180C3D5374C9AAD2780E01B66A69, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0160_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0164_1;
			}

IL_0164_1:
			{
				U3CSendeFotoRequestU3Ed__18_U3CU3Em__Finally1_mED781ABA3E95106F89057F2A2194C1A2F9AF1299(__this, NULL);
				goto IL_0175;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0175:
	{
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Void FotoScript/<SendeFotoRequest>d__18::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18_U3CU3Em__Finally1_mED781ABA3E95106F89057F2A2194C1A2F9AF1299 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebrequestU3E5__2_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebrequestU3E5__2_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object FotoScript/<SendeFotoRequest>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendeFotoRequestU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD2EA681901EBF6D226966EF1FAF758CD70941F4 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FotoScript/<SendeFotoRequest>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendeFotoRequestU3Ed__18_System_Collections_IEnumerator_Reset_m58344EF7CFC5119D652A8FFA4C349FCAEB33DD10 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendeFotoRequestU3Ed__18_System_Collections_IEnumerator_Reset_m58344EF7CFC5119D652A8FFA4C349FCAEB33DD10_RuntimeMethod_var)));
	}
}
// System.Object FotoScript/<SendeFotoRequest>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendeFotoRequestU3Ed__18_System_Collections_IEnumerator_get_Current_mA546277BCB18DA88F1A17911BFD26C9B19E631C4 (U3CSendeFotoRequestU3Ed__18_tEC8F87C0A7E29D57854428CD8CEF0FF2C0B8752B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LeseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_Start_mDCE7EA317E82F874FBCD9C0F59B61E59DF981E38 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9DB6FB5A90B74747D37E7732F5CC575DB992063);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// idAnzeige.text = StartBildschirm.personid;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___idAnzeige_10;
		String_t* L_1 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___personid_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_2;
		L_2 = WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA(NULL);
		__this->___devices_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___devices_8), (void*)L_2);
		// WebCamDevice device = default;
		il2cpp_codegen_initobj((&V_0), sizeof(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C));
		// StartCamera(device);
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_3 = V_0;
		LeseScript_StartCamera_mFC68257349D9211E548233EBAFB435EE86D4217B(__this, L_3, NULL);
		// InvokeRepeating("Aktualisiere", 0f, 10f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralE9DB6FB5A90B74747D37E7732F5CC575DB992063, (0.0f), (10.0f), NULL);
		// }
		return;
	}
}
// System.Void LeseScript::StopCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_StopCamera_m4C0C8210BAB0D1920127C6A715DBAE924C7C1E08 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (webCamTexture == null)
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_0 = __this->___webCamTexture_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_002c;
	}

IL_0014:
	{
		// webCamTexture.Stop();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_3 = __this->___webCamTexture_6;
		NullCheck(L_3);
		WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184(L_3, NULL);
		// Destroy(webCamTexture);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___webCamTexture_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void LeseScript::StartCamera(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_StartCamera_mFC68257349D9211E548233EBAFB435EE86D4217B (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___0_device, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// StopCamera();
		LeseScript_StopCamera_m4C0C8210BAB0D1920127C6A715DBAE924C7C1E08(__this, NULL);
		// webCamTexture = new WebCamTexture(device.name, Screen.width, Screen.height, 60);
		String_t* L_0;
		L_0 = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E((&___0_device), NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_3 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)il2cpp_codegen_object_new(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebCamTexture__ctor_mAF6018FD8752F8527E23C6A800A314C87322D1DD(L_3, L_0, L_1, L_2, ((int32_t)60), NULL);
		__this->___webCamTexture_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webCamTexture_6), (void*)L_3);
		// webCamTexture.Play();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___webCamTexture_6;
		NullCheck(L_4);
		WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26(L_4, NULL);
		// int orientation = -webCamTexture.videoRotationAngle;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_5 = __this->___webCamTexture_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F(L_5, NULL);
		V_0 = ((-L_6));
		// hintergrund.rectTransform.localEulerAngles = new Vector3(0, 0, orientation);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_7 = __this->___hintergrund_7;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_7, NULL);
		int32_t L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), ((float)L_9), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_8, L_10, NULL);
		// hintergrund.texture= webCamTexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_11 = __this->___hintergrund_7;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_12 = __this->___webCamTexture_6;
		NullCheck(L_11);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void LeseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_Update_mD6DF3F0E6DD304D52A40FE1B058CC0D491DCDD6D (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LeseScript::SzeneWechselnInFoto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_SzeneWechselnInFoto_mF5BFF648125B221E7887D10C9A6ADB3E759812FB (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCamera();
		LeseScript_StopCamera_m4C0C8210BAB0D1920127C6A715DBAE924C7C1E08(__this, NULL);
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void LeseScript::Groe?er()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_GroeUDFer_mF311B339EB6ABE16FF7D4329D5B0A01C7FF00541 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	{
		// text.fontSize = text.fontSize + 5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___text_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___text_4;
		NullCheck(L_1);
		float L_2;
		L_2 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731(L_1, NULL);
		NullCheck(L_0);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_0, ((float)il2cpp_codegen_add(L_2, (5.0f))), NULL);
		// }
		return;
	}
}
// System.Void LeseScript::Kleiner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_Kleiner_m46821220B81A6623A2718ABD247AEE3E291966B2 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	{
		// text.fontSize = text.fontSize - 5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___text_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___text_4;
		NullCheck(L_1);
		float L_2;
		L_2 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731(L_1, NULL);
		NullCheck(L_0);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_0, ((float)il2cpp_codegen_subtract(L_2, (5.0f))), NULL);
		// }
		return;
	}
}
// System.Void LeseScript::Aktualisiere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript_Aktualisiere_m2357579421F94A5957984CB588E9F2E11F21D194 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral436FC160ECC0F045E704F1A03E277463AB35A431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		// Dictionary<string, string> TextJson = new Dictionary<string, string>()
		// {
		//     {"name", StartBildschirm.personid },
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		String_t* L_2 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___personid_7;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		V_0 = L_1;
		// jsonDaten = JsonConvert.SerializeObject(TextJson);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_3, NULL);
		__this->___jsonDaten_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonDaten_5), (void*)L_4);
		// StartCoroutine(AktualisierenRequest(StartBildschirm.ipaddress+"/text"));
		String_t* L_5 = ((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral436FC160ECC0F045E704F1A03E277463AB35A431, NULL);
		RuntimeObject* L_7;
		L_7 = LeseScript_AktualisierenRequest_m46BC80266656057C588EEDAF5A531797C87AD864(__this, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LeseScript::AktualisierenRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeseScript_AktualisierenRequest_m46BC80266656057C588EEDAF5A531797C87AD864 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* L_0 = (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F*)il2cpp_codegen_object_new(U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAktualisierenRequestU3Ed__15__ctor_mBB80A49EA60B6C36CE3A4CF1F47684AD7F258D78(L_0, 0, NULL);
		U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		return L_2;
	}
}
// System.Void LeseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeseScript__ctor_mF230A21331DB6F63971189547A761D6A5AA99411 (LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeseScript/<AktualisierenRequest>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15__ctor_mBB80A49EA60B6C36CE3A4CF1F47684AD7F258D78 (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeseScript/<AktualisierenRequest>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15_System_IDisposable_Dispose_mE0CF051361FEF94C48D6016B5FD82B3C143538DD (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CAktualisierenRequestU3Ed__15_U3CU3Em__Finally1_m319FF6C8F4060A737388EFCAE15B521A1EABFB0C(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean LeseScript/<AktualisierenRequest>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAktualisierenRequestU3Ed__15_MoveNext_m2692CDC9851C614762471B5AEC56531E34F9E62E (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991B6BE86901B2A90CB317871544C76004951426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2E091C5DF3BE51D8137C2F41BC32B5AA220E256);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_016d:
			{// begin fault (depth: 1)
				U3CAktualisierenRequestU3Ed__15_System_IDisposable_Dispose_mE0CF051361FEF94C48D6016B5FD82B3C143538DD(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00be_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0175;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using UnityWebRequest webrequest = new UnityWebRequest(url, "POST");
				String_t* L_3 = __this->___url_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_4, L_3, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
				__this->___U3CwebrequestU3E5__1_4 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebrequestU3E5__1_4), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webrequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_5);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_5, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				// byte[] buffer = Encoding.UTF8.GetBytes(jsonDaten);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
				L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* L_7 = __this->___U3CU3E4__this_3;
				NullCheck(L_7);
				String_t* L_8 = L_7->___jsonDaten_5;
				NullCheck(L_6);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
				__this->___U3CbufferU3E5__2_5 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__2_5), (void*)L_9);
				// webrequest.uploadHandler = new UploadHandlerRaw(buffer);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwebrequestU3E5__1_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___U3CbufferU3E5__2_5;
				UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_12 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_12, L_11, NULL);
				NullCheck(L_10);
				UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_10, L_12, NULL);
				// webrequest.downloadHandler = new DownloadHandlerBuffer();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwebrequestU3E5__1_4;
				DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_14 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_14, NULL);
				NullCheck(L_13);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_13, L_14, NULL);
				// yield return webrequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_15);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_16;
				L_16 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_15, NULL);
				__this->___U3CU3E2__current_1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0175;
			}

IL_00be_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// switch (webrequest.result)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_17);
				int32_t L_18;
				L_18 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_17, NULL);
				V_2 = L_18;
				int32_t L_19 = V_2;
				__this->___U3CU3Es__3_6 = L_19;
				int32_t L_20 = __this->___U3CU3Es__3_6;
				V_3 = L_20;
				int32_t L_21 = V_3;
				switch (L_21)
				{
					case 0:
					{
						goto IL_00fc_1;
					}
					case 1:
					{
						goto IL_0109_1;
					}
					case 2:
					{
						goto IL_012c_1;
					}
					case 3:
					{
						goto IL_0139_1;
					}
					case 4:
					{
						goto IL_0146_1;
					}
				}
			}
			{
				goto IL_0153_1;
			}

IL_00fc_1:
			{
				// Debug.Log("InProgress");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C060DB021DEDB12AAC2509468CF9849B303646A, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0109_1:
			{
				// text.text = webrequest.downloadHandler.text;
				LeseScript_t873D8AFCE220194E1F2B9797A48DC1E203C5CB9C* L_22 = __this->___U3CU3E4__this_3;
				NullCheck(L_22);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = L_22->___text_4;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwebrequestU3E5__1_4;
				NullCheck(L_24);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
				L_25 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_24, NULL);
				NullCheck(L_25);
				String_t* L_26;
				L_26 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_25, NULL);
				NullCheck(L_23);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_26);
				// break;
				goto IL_0160_1;
			}

IL_012c_1:
			{
				// Debug.Log("ConnectionError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral69592EE8E1683C0ED850C2CAC7927FA14CD02EF3, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0139_1:
			{
				// Debug.Log("ProtocolError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46FC6D44C651FE35B9240ADFC30717FC461DBC87, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0146_1:
			{
				// Debug.Log("DataProcessingError");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral991B6BE86901B2A90CB317871544C76004951426, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0153_1:
			{
				// Debug.Log("UnbekannterFehler");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD2E091C5DF3BE51D8137C2F41BC32B5AA220E256, NULL);
				// break;
				goto IL_0160_1;
			}

IL_0160_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0164_1;
			}

IL_0164_1:
			{
				U3CAktualisierenRequestU3Ed__15_U3CU3Em__Finally1_m319FF6C8F4060A737388EFCAE15B521A1EABFB0C(__this, NULL);
				goto IL_0175;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0175:
	{
		bool L_27 = V_0;
		return L_27;
	}
}
// System.Void LeseScript/<AktualisierenRequest>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15_U3CU3Em__Finally1_m319FF6C8F4060A737388EFCAE15B521A1EABFB0C (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebrequestU3E5__1_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebrequestU3E5__1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object LeseScript/<AktualisierenRequest>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAktualisierenRequestU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDB3733467AB39F2B95D14D4175730131A5E9D01A (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeseScript/<AktualisierenRequest>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAktualisierenRequestU3Ed__15_System_Collections_IEnumerator_Reset_m52BB1D1F136BBBF79D7557EEA296928815466CD9 (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAktualisierenRequestU3Ed__15_System_Collections_IEnumerator_Reset_m52BB1D1F136BBBF79D7557EEA296928815466CD9_RuntimeMethod_var)));
	}
}
// System.Object LeseScript/<AktualisierenRequest>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAktualisierenRequestU3Ed__15_System_Collections_IEnumerator_get_Current_mAEB480AD9204041C3CF1DF4B2E9E0534204B3117 (U3CAktualisierenRequestU3Ed__15_t4727D719B11A459920A0D001C1913D1744685A2F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Notification::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_Start_m3862B8889635C189BA8595F5BB2B0D5C5FD56633 (Notification_t935ED056029A6F99D5AB2797AB3032EBD2F8A3F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Notification::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_Update_mAC8C15D9678D3E2E69A362F233554520788C4C99 (Notification_t935ED056029A6F99D5AB2797AB3032EBD2F8A3F5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Notification::ShowNotification2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_ShowNotification2_mE7F80AF29A25ECCCA91170D97277205ADBD94556 (Notification_t935ED056029A6F99D5AB2797AB3032EBD2F8A3F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral184191A5A561AAD74CC1AB93BAAE25F99AA51CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B10C0A893C5AE544E442A08AA65C1542235C40F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26B95C5AB43C6BB11F241ABB128BE01AE384345F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral290EBB0748839637C59B28BDDBD8C6F10B9A42AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49AFB738E78FEF2EB4AFD54E44E905C02F976BA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral625111796A30C4C7238FD5C403EA0964A211D8F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B8F0D43296363B5CB7F7E8CF8940156F9220BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5D3BCF7F24F3956EE525A6C7D4E0E518C77B20);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC V_3;
	memset((&V_3), 0, sizeof(V_3));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// AndroidNotificationChannel channel = new AndroidNotificationChannel()
		// {
		//     Id = "channel_id",
		//     Name = "Default Channel",
		//     Importance = Importance.High,
		//     Description = "Generic notifications",
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC));
		AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline((&V_3), _stringLiteral290EBB0748839637C59B28BDDBD8C6F10B9A42AA, NULL);
		AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline((&V_3), _stringLiteral1B10C0A893C5AE544E442A08AA65C1542235C40F, NULL);
		AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline((&V_3), 4, NULL);
		AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline((&V_3), _stringLiteral26B95C5AB43C6BB11F241ABB128BE01AE384345F, NULL);
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_0 = V_3;
		V_0 = L_0;
		// AndroidNotificationCenter.RegisterNotificationChannel(channel);
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2(L_1, NULL);
		// AndroidNotification notification = new AndroidNotification();
		il2cpp_codegen_initobj((&V_1), sizeof(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18));
		// notification.Title = "Your Title";
		AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline((&V_1), _stringLiteralFE5D3BCF7F24F3956EE525A6C7D4E0E518C77B20, NULL);
		// notification.Text = "yuhu";
		AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline((&V_1), _stringLiteral49AFB738E78FEF2EB4AFD54E44E905C02F976BA5, NULL);
		// notification.SmallIcon = "icon_0";
		AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline((&V_1), _stringLiteral625111796A30C4C7238FD5C403EA0964A211D8F7, NULL);
		// notification.LargeIcon = "icon_1";
		AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline((&V_1), _stringLiteral184191A5A561AAD74CC1AB93BAAE25F99AA51CC4, NULL);
		// notification.FireTime = System.DateTime.Now.AddSeconds(1);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_4 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_4), (1.0), NULL);
		AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline((&V_1), L_3, NULL);
		// notification.ShowTimestamp = true;
		AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline((&V_1), (bool)1, NULL);
		// Debug.Log("Jo");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE8B8F0D43296363B5CB7F7E8CF8940156F9220BA, NULL);
		// var identifier = AndroidNotificationCenter.SendNotification(notification, "channel_id");
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_4 = V_1;
		int32_t L_5;
		L_5 = AndroidNotificationCenter_SendNotification_mFADE76DB5826511F62598D5DDC8982904AAD7684(L_4, _stringLiteral290EBB0748839637C59B28BDDBD8C6F10B9A42AA, NULL);
		V_2 = L_5;
		// if (AndroidNotificationCenter.CheckScheduledNotificationStatus(identifier) == NotificationStatus.Scheduled)
		int32_t L_6 = V_2;
		int32_t L_7;
		L_7 = AndroidNotificationCenter_CheckScheduledNotificationStatus_m497C97BA3C4F769675FA5A0138E4BB1F81EDB9A7(L_6, NULL);
		V_5 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_00e0;
		}
	}
	{
		// AndroidNotificationCenter.CancelAllNotifications();
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_CancelAllNotifications_mF5AFE29E7FC1F8D7155855CC67A671B4DC649B87(NULL);
		// AndroidNotificationCenter.SendNotification(notification, "channel_id");
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_9 = V_1;
		int32_t L_10;
		L_10 = AndroidNotificationCenter_SendNotification_mFADE76DB5826511F62598D5DDC8982904AAD7684(L_9, _stringLiteral290EBB0748839637C59B28BDDBD8C6F10B9A42AA, NULL);
	}

IL_00e0:
	{
		// }
		return;
	}
}
// System.Void Notification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_m5DC97CC139CC1E6A900EA494D650152F806D7CAB (Notification_t935ED056029A6F99D5AB2797AB3032EBD2F8A3F5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Datenbank::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Datenbank_get_ID_m2FA20050FAB50C16436358098A7D0F8C33CCE11F (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Datenbank::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Datenbank_set_ID_m94B3C00D0D2A77943E13D4919AF213786C0AEC7C (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Datenbank::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Datenbank_get_Name_m0F8A5793F42E9F2D8B39F45C266F2B08DCD73CF4 (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Datenbank::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Datenbank_set_Name_mA8ED2E7F320E57D4E8752C7AFA450A88B3DAE089 (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Datenbank::get_Foto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Datenbank_get_Foto_m7F4488A0C61F07ED7DF1B02F6DA19328A03D734F (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, const RuntimeMethod* method) 
{
	{
		// public string Foto { get; set; }
		String_t* L_0 = __this->___U3CFotoU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Datenbank::set_Foto(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Datenbank_set_Foto_m790AB37C6C1F868578E2007D4B11FF2FAF4B906D (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Foto { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CFotoU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFotoU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Datenbank::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Datenbank_get_Text_mB4A137025007FE842875B1A35D2761FE90D7D70F (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Datenbank::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Datenbank_set_Text_m0D51931322E1A8660EB370F8ADE0F74C225DD4EF (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Datenbank::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Datenbank__ctor_mE612D7B6157469009C741575E254A6C44305AD9D (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_id, String_t* ___1_name, String_t* ___2_foto, String_t* ___3_text, const RuntimeMethod* method) 
{
	{
		// public Datenbank(string id, string name, string foto, string text)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ID = id;
		String_t* L_0 = ___0_id;
		Datenbank_set_ID_m94B3C00D0D2A77943E13D4919AF213786C0AEC7C_inline(__this, L_0, NULL);
		// Name = name;
		String_t* L_1 = ___1_name;
		Datenbank_set_Name_mA8ED2E7F320E57D4E8752C7AFA450A88B3DAE089_inline(__this, L_1, NULL);
		// Foto = foto;
		String_t* L_2 = ___2_foto;
		Datenbank_set_Foto_m790AB37C6C1F868578E2007D4B11FF2FAF4B906D_inline(__this, L_2, NULL);
		// Text = text;
		String_t* L_3 = ___3_text;
		Datenbank_set_Text_m0D51931322E1A8660EB370F8ADE0F74C225DD4EF_inline(__this, L_3, NULL);
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
// System.Void Nuetzliches::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nuetzliches_Start_m6703EBF8CE4D5408B0CA39561928374F8B62FDBB (Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Nuetzliches::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nuetzliches_Update_mAEACAF1C9A5F7546D3A3B05F97086EB216CCED98 (Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String Nuetzliches::GetIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nuetzliches_GetIP_m41C187BF90FE42068B4C371BED500EB247961F69 (Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52);
		s_Il2CppMethodInitialized = true;
	}
	IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* V_0 = NULL;
	String_t* V_1 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_2 = NULL;
	int32_t V_3 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		// string localIP = "0.0.0.0";
		V_1 = _stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52;
		// host = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_0, NULL);
		V_0 = L_1;
		// foreach (IPAddress ip in host.AddressList)
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_2 = V_0;
		NullCheck(L_2);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_3;
		L_3 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_2, NULL);
		V_2 = L_3;
		V_3 = 0;
		goto IL_0044;
	}

IL_001e:
	{
		// foreach (IPAddress ip in host.AddressList)
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (ip.AddressFamily == AddressFamily.InterNetwork)
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_8, NULL);
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		// localIP = ip.ToString();
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_11 = V_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		V_1 = L_12;
		// break;
		goto IL_004a;
	}

IL_003f:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		// foreach (IPAddress ip in host.AddressList)
		int32_t L_14 = V_3;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_004a:
	{
		// return localIP;
		String_t* L_16 = V_1;
		V_6 = L_16;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		String_t* L_17 = V_6;
		return L_17;
	}
}
// System.Collections.IEnumerator Nuetzliches::GetRequest2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Nuetzliches_GetRequest2_m5168240E0645B8D75B19EFD259A4B3A21125548D (Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* __this, String_t* ___0_uri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* L_0 = (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732*)il2cpp_codegen_object_new(U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRequest2U3Ed__5__ctor_m3AB9CDF85E1877D2A3DA47C53D80C2D6530FAEE4(L_0, 0, NULL);
		U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* L_2 = L_1;
		String_t* L_3 = ___0_uri;
		NullCheck(L_2);
		L_2->___uri_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___uri_2), (void*)L_3);
		return L_2;
	}
}
// System.Void Nuetzliches::switchCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nuetzliches_switchCam_mDD341784A0191D589FB85B8168A4F78C088E8BAC (Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Nuetzliches::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nuetzliches__ctor_m487E97389EE3F523D58E8C15D48B97F249EE2E96 (Nuetzliches_t804489C3D40D86E986B2D99CF69B5C53B6EBC2F0* __this, const RuntimeMethod* method) 
{
	{
		// private WebCamDevice device = default;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* L_0 = (&__this->___device_5);
		il2cpp_codegen_initobj(L_0, sizeof(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Nuetzliches/<GetRequest2>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5__ctor_m3AB9CDF85E1877D2A3DA47C53D80C2D6530FAEE4 (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Nuetzliches/<GetRequest2>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5_System_IDisposable_Dispose_mD8B9B699213470CDD33DB9B0DA34055B99EE4879 (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CGetRequest2U3Ed__5_U3CU3Em__Finally1_m421657927D756BAAE9BA0559411F7D5BE942794B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Nuetzliches/<GetRequest2>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequest2U3Ed__5_MoveNext_m19E42FDCF637F525AE52CAAA6647AC590A82E15C (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDatenbank_tD3A307858FEC1713F958D514EB140E1537EA8417_mD58811CB600318768E25D4C3C85DCC9935AED9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDF102D79FB2C91D1F26AB09A19A4EEA8EF2516);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00eb:
			{// begin fault (depth: 1)
				U3CGetRequest2U3Ed__5_System_IDisposable_Dispose_mD8B9B699213470CDD33DB9B0DA34055B99EE4879(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_005e_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00f3;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest request = UnityWebRequest.Get(uri))
				String_t* L_3 = __this->___uri_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
				L_4 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_3, NULL);
				__this->___U3CrequestU3E5__1_4 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_4), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_5);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
				L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
				__this->___U3CU3E2__current_1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00f3;
			}

IL_005e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (request.result == UnityWebRequest.Result.ConnectionError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_7, NULL);
				V_2 = (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0097_1;
				}
			}
			{
				// Debug.Log("Fehler: " + request.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0EDF102D79FB2C91D1F26AB09A19A4EEA8EF2516, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
				goto IL_00d8_1;
			}

IL_0097_1:
			{
				// var results = JsonConvert.DeserializeObject<Datenbank>(request.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CrequestU3E5__1_4;
				NullCheck(L_13);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* L_16;
				L_16 = JsonConvert_DeserializeObject_TisDatenbank_tD3A307858FEC1713F958D514EB140E1537EA8417_mD58811CB600318768E25D4C3C85DCC9935AED9A0(L_15, JsonConvert_DeserializeObject_TisDatenbank_tD3A307858FEC1713F958D514EB140E1537EA8417_mD58811CB600318768E25D4C3C85DCC9935AED9A0_RuntimeMethod_var);
				__this->___U3CresultsU3E5__2_5 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultsU3E5__2_5), (void*)L_16);
				// byte[] k = Convert.FromBase64String(results.Foto);
				Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* L_17 = __this->___U3CresultsU3E5__2_5;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = Datenbank_get_Foto_m7F4488A0C61F07ED7DF1B02F6DA19328A03D734F_inline(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_18, NULL);
				__this->___U3CkU3E5__3_6 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkU3E5__3_6), (void*)L_19);
				__this->___U3CresultsU3E5__2_5 = (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultsU3E5__2_5), (void*)(Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417*)NULL);
				__this->___U3CkU3E5__3_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkU3E5__3_6), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			}

IL_00d8_1:
			{
				U3CGetRequest2U3Ed__5_U3CU3Em__Finally1_m421657927D756BAAE9BA0559411F7D5BE942794B(__this, NULL);
				__this->___U3CrequestU3E5__1_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f3:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Nuetzliches/<GetRequest2>d__5::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5_U3CU3Em__Finally1_m421657927D756BAAE9BA0559411F7D5BE942794B (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__1_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object Nuetzliches/<GetRequest2>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequest2U3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m49ACC6D316B0A275EB6D6B96EB94A4EE9CD614FD (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Nuetzliches/<GetRequest2>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequest2U3Ed__5_System_Collections_IEnumerator_Reset_mA1D7BE1F5E301BE2E8DF5612317364158B8BE33D (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRequest2U3Ed__5_System_Collections_IEnumerator_Reset_mA1D7BE1F5E301BE2E8DF5612317364158B8BE33D_RuntimeMethod_var)));
	}
}
// System.Object Nuetzliches/<GetRequest2>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRequest2U3Ed__5_System_Collections_IEnumerator_get_Current_m55F9DA144F070E2D8C427B4844E6A68EA5B389F5 (U3CGetRequest2U3Ed__5_t54F32458E1F37CD13A60E3AFF46E360FA2132732* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void StartBildschirm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartBildschirm_Start_m3C453EA9BCA4230B853CB30FDAD31192D8EA8C61 (StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StartBildschirm::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartBildschirm_Update_m9BB7F3B13E6CD72A132F44D07B49F0E1E6B84F78 (StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StartBildschirm::SetzeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartBildschirm_SetzeId_m791563C4220EA3CE3DE836FC85E88D5C67220FB3 (StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// idAnzeige.text= inputID.text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___idAnzeige_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___inputID_5;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// personid = inputID.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___inputID_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
		((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___personid_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___personid_7), (void*)L_4);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void StartBildschirm::SetzeIp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartBildschirm_SetzeIp_m757C1C43367AFE3478EE4BDD4338E14C0EC4D098 (StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ipaddress = inputIp.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputIp_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_StaticFields*)il2cpp_codegen_static_fields_for(StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB_il2cpp_TypeInfo_var))->___ipaddress_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void StartBildschirm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartBildschirm__ctor_mA9C5925C2D1A9C65A98DC08DEDA9BD0E1DB5515B (StartBildschirm_t38E87F900B52F67BB0B6AAEB49F1951C5682D3EB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CImportanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTitleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSmallIconU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSmallIconU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CLargeIconU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CFireTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowTimestampU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_ID_m94B3C00D0D2A77943E13D4919AF213786C0AEC7C_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_Name_mA8ED2E7F320E57D4E8752C7AFA450A88B3DAE089_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_Foto_m790AB37C6C1F868578E2007D4B11FF2FAF4B906D_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Foto { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CFotoU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFotoU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Datenbank_set_Text_m0D51931322E1A8660EB370F8ADE0F74C225DD4EF_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Datenbank_get_Foto_m7F4488A0C61F07ED7DF1B02F6DA19328A03D734F_inline (Datenbank_tD3A307858FEC1713F958D514EB140E1537EA8417* __this, const RuntimeMethod* method) 
{
	{
		// public string Foto { get; set; }
		String_t* L_0 = __this->___U3CFotoU3Ek__BackingField_2;
		return L_0;
	}
}
