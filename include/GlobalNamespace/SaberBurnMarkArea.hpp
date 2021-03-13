// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x138
  #pragma pack(push, 1)
  // Autogenerated type: SaberBurnMarkArea
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D1B4EC
  class SaberBurnMarkArea : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.LineRenderer _saberBurnMarkLinePrefab
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::LineRenderer* saberBurnMarkLinePrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::LineRenderer*) == 0x8);
    // private System.Single _blackMarkLineRandomOffset
    // Size: 0x4
    // Offset: 0x20
    float blackMarkLineRandomOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _textureWidth
    // Size: 0x4
    // Offset: 0x24
    int textureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _textureHeight
    // Size: 0x4
    // Offset: 0x28
    int textureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _burnMarksFadeOutStrength
    // Size: 0x4
    // Offset: 0x2C
    float burnMarksFadeOutStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Shader _fadeOutShader
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Shader* fadeOutShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // [InjectAttribute] Offset: 0xD2409C
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD240AC
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // private readonly System.Int32 _fadeOutStrengthShaderPropertyID
    // Size: 0x4
    // Offset: 0x50
    int fadeOutStrengthShaderPropertyID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: fadeOutStrengthShaderPropertyID and: sabers
    char __padding9[0x4] = {};
    // private Saber[] _sabers
    // Size: 0x8
    // Offset: 0x58
    ::Array<GlobalNamespace::Saber*>* sabers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::Saber*>*) == 0x8);
    // private UnityEngine.Plane _plane
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Plane plane;
    // Field size check
    static_assert(sizeof(UnityEngine::Plane) == 0x10);
    // private UnityEngine.Vector3[] _prevBurnMarkPos
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::Vector3>* prevBurnMarkPos;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Boolean[] _prevBurnMarkPosValid
    // Size: 0x8
    // Offset: 0x78
    ::Array<bool>* prevBurnMarkPosValid;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private UnityEngine.LineRenderer[] _lineRenderers
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::LineRenderer*>* lineRenderers;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::LineRenderer*>*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Vector3[] _linePoints
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::Vector3>* linePoints;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.RenderTexture[] _renderTextures
    // Size: 0x8
    // Offset: 0x98
    ::Array<UnityEngine::RenderTexture*>* renderTextures;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RenderTexture*>*) == 0x8);
    // private UnityEngine.ParticleSystem/EmitParams _emitParams
    // Size: 0x8F
    // Offset: 0xA0
    UnityEngine::ParticleSystem::EmitParams emitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: emitParams and: fadeOutMaterial
    char __padding18[0x1] = {};
    // private UnityEngine.Material _fadeOutMaterial
    // Size: 0x8
    // Offset: 0x130
    UnityEngine::Material* fadeOutMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: SaberBurnMarkArea
    SaberBurnMarkArea(UnityEngine::LineRenderer* saberBurnMarkLinePrefab_ = {}, float blackMarkLineRandomOffset_ = {}, int textureWidth_ = {}, int textureHeight_ = {}, float burnMarksFadeOutStrength_ = {}, UnityEngine::Shader* fadeOutShader_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, UnityEngine::Renderer* renderer_ = {}, int fadeOutStrengthShaderPropertyID_ = {}, ::Array<GlobalNamespace::Saber*>* sabers_ = {}, UnityEngine::Plane plane_ = {}, ::Array<UnityEngine::Vector3>* prevBurnMarkPos_ = {}, ::Array<bool>* prevBurnMarkPosValid_ = {}, ::Array<UnityEngine::LineRenderer*>* lineRenderers_ = {}, UnityEngine::Camera* camera_ = {}, ::Array<UnityEngine::Vector3>* linePoints_ = {}, ::Array<UnityEngine::RenderTexture*>* renderTextures_ = {}, UnityEngine::ParticleSystem::EmitParams emitParams_ = {}, UnityEngine::Material* fadeOutMaterial_ = {}) noexcept : saberBurnMarkLinePrefab{saberBurnMarkLinePrefab_}, blackMarkLineRandomOffset{blackMarkLineRandomOffset_}, textureWidth{textureWidth_}, textureHeight{textureHeight_}, burnMarksFadeOutStrength{burnMarksFadeOutStrength_}, fadeOutShader{fadeOutShader_}, colorManager{colorManager_}, saberManager{saberManager_}, renderer{renderer_}, fadeOutStrengthShaderPropertyID{fadeOutStrengthShaderPropertyID_}, sabers{sabers_}, plane{plane_}, prevBurnMarkPos{prevBurnMarkPos_}, prevBurnMarkPosValid{prevBurnMarkPosValid_}, lineRenderers{lineRenderers_}, camera{camera_}, linePoints{linePoints_}, renderTextures{renderTextures_}, emitParams{emitParams_}, fadeOutMaterial{fadeOutMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFAA6FC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFAAF30
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0xFAB1A4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xFAB2F0
    void OnDisable();
    // private System.Boolean GetBurnMarkPos(UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, out UnityEngine.Vector3 burnMarkPos)
    // Offset: 0xFAB43C
    bool GetBurnMarkPos(UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, UnityEngine::Vector3& burnMarkPos);
    // private UnityEngine.Vector3 WorldToCameraBurnMarkPos(UnityEngine.Vector3 pos)
    // Offset: 0xFAB6CC
    UnityEngine::Vector3 WorldToCameraBurnMarkPos(UnityEngine::Vector3 pos);
    // protected System.Void LateUpdate()
    // Offset: 0xFAB7F4
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xFABEE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberBurnMarkArea* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberBurnMarkArea::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberBurnMarkArea*, creationType>()));
    }
  }; // SaberBurnMarkArea
  #pragma pack(pop)
  static check_size<sizeof(SaberBurnMarkArea), 304 + sizeof(UnityEngine::Material*)> __GlobalNamespace_SaberBurnMarkAreaSizeCheck;
  static_assert(sizeof(SaberBurnMarkArea) == 0x138);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberBurnMarkArea*, "", "SaberBurnMarkArea");
