struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 84 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//12. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//22. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//23. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//24. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//25. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//26. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//27. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//28. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//29. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//30. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//31. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//32. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//33. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//34. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//35. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//36. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//37. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//38. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//39. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//40. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//41. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//42. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//43. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//44. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//45. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//46. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//47. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//48. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//49. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//50. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//51. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//52. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//53. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//54. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//57. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//58. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//59. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//60. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//61. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//62. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//63. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//64. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//65. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//66. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//72. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//73. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//74. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//75. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//76. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//77. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//78. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//79. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//80. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//81. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//82. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//83. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
