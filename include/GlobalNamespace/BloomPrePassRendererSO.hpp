// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
  // Forward declaring type: IBloomPrePassParams
  class IBloomPrePassParams;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassRendererSO
  class BloomPrePassRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BloomPrePassRendererSO::PreallocationData
    class PreallocationData;
    // Nested type: GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData
    class LightsRenderingData;
    // private BloomFogSO _bloomFog
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // private UnityEngine.Shader _maxColorShader
    // Offset: 0x20
    UnityEngine::Shader* maxColorShader;
    // private BloomPrePassRendererSO/PreallocationData[] _preallocationData
    // Offset: 0x28
    ::Array<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*>* preallocationData;
    // private UnityEngine.Material _maxColorMaterial
    // Offset: 0x30
    UnityEngine::Material* maxColorMaterial;
    // private System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,BloomPrePassRendererSO/LightsRenderingData> _lightsRenderingData
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>* lightsRenderingData;
    // private UnityEngine.Rendering.CommandBuffer _commandBuffer
    // Offset: 0x40
    UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // private System.Boolean _initialized
    // Offset: 0x48
    bool initialized;
    // Get static field: static private readonly System.Int32 _vertexTransfromMatrixID
    static int _get__vertexTransfromMatrixID();
    // Set static field: static private readonly System.Int32 _vertexTransfromMatrixID
    static void _set__vertexTransfromMatrixID(int value);
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private readonly System.Int32 _bloomPrePassTextureID
    static int _get__bloomPrePassTextureID();
    // Set static field: static private readonly System.Int32 _bloomPrePassTextureID
    static void _set__bloomPrePassTextureID(int value);
    // Get static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
    static int _get__stereoCameraEyeOffsetID();
    // Set static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
    static void _set__stereoCameraEyeOffsetID(int value);
    // Get static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
    static int _get__customFogTextureToScreenRatioID();
    // Set static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
    static void _set__customFogTextureToScreenRatioID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x177CB98
    void OnDisable();
    // public System.Void Init()
    // Offset: 0x177B050
    void Init();
    // public System.Void Cleanup()
    // Offset: 0x177CB9C
    void Cleanup();
    // public System.Void RenderAndSetData(UnityEngine.Vector3 cameraPos, UnityEngine.Matrix4x4 projectionMatrix, UnityEngine.Matrix4x4 viewMatrix, System.Single stereoCameraEyeOffset, IBloomPrePassParams bloomPrePassParams, UnityEngine.RenderTexture dest)
    // Offset: 0x177D134
    void RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest);
    // public System.Void RenderAndSetData(UnityEngine.Vector3 cameraPos, UnityEngine.Matrix4x4 projectionMatrix, UnityEngine.Matrix4x4 viewMatrix, System.Single stereoCameraEyeOffset, IBloomPrePassParams bloomPrePassParams, UnityEngine.RenderTexture dest, UnityEngine.Vector2 textureToScreenRatio)
    // Offset: 0x177B8F4
    void RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest, UnityEngine::Vector2& textureToScreenRatio);
    // public System.Void SetDataToShaders(System.Single stereoCameraEyeOffset, UnityEngine.Vector2 textureToScreenRatio, UnityEngine.RenderTexture renderTexture)
    // Offset: 0x177BF90
    void SetDataToShaders(float stereoCameraEyeOffset, UnityEngine::Vector2 textureToScreenRatio, UnityEngine::RenderTexture* renderTexture);
    // public System.Void SetCustomStereoCameraEyeOffset(System.Single stereoCameraEyeOffset)
    // Offset: 0x177D9A8
    void SetCustomStereoCameraEyeOffset(float stereoCameraEyeOffset);
    // public UnityEngine.RenderTexture CreateBloomPrePassRenderTextureIfNeeded(UnityEngine.RenderTexture renderTexture, IBloomPrePassParams bloomPrePassParams)
    // Offset: 0x177B5E0
    UnityEngine::RenderTexture* CreateBloomPrePassRenderTextureIfNeeded(UnityEngine::RenderTexture* renderTexture, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams);
    // public System.Void EnableBloomFog()
    // Offset: 0x177BF74
    void EnableBloomFog();
    // public System.Void DisableBloomFog()
    // Offset: 0x177C0C0
    void DisableBloomFog();
    // public System.Void UpdateBloomFogParams()
    // Offset: 0x177DA24
    void UpdateBloomFogParams();
    // public System.Void GetCameraParams(UnityEngine.Camera camera, UnityEngine.Matrix4x4 projectionMatrix, UnityEngine.Matrix4x4 viewMatrix, System.Single stereoCameraEyeOffset)
    // Offset: 0x177B474
    void GetCameraParams(UnityEngine::Camera* camera, UnityEngine::Matrix4x4& projectionMatrix, UnityEngine::Matrix4x4& viewMatrix, float& stereoCameraEyeOffset);
    // private System.Void RenderAllLights(UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single linesWidth)
    // Offset: 0x177D180
    void RenderAllLights(UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float linesWidth);
    // private System.Void PrepareLightsMeshRendering(BloomPrePassRendererSO/LightsRenderingData data, System.Int32 numberOfLights)
    // Offset: 0x177CCEC
    void PrepareLightsMeshRendering(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData* data, int numberOfLights);
    // private UnityEngine.Matrix4x4 MatrixLerp(UnityEngine.Matrix4x4 from, UnityEngine.Matrix4x4 to, System.Single t)
    // Offset: 0x177DA3C
    UnityEngine::Matrix4x4 MatrixLerp(UnityEngine::Matrix4x4 from, UnityEngine::Matrix4x4 to, float t);
    // protected override System.Void OnEnable()
    // Offset: 0x177CB70
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x177DB48
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassRendererSO* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x177DBC4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassRendererSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO*, "", "BloomPrePassRendererSO");
#pragma pack(pop)
