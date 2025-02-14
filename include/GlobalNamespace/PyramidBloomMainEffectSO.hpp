// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PyramidBloomRendererSO because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: PyramidBloomMainEffectSO
  class PyramidBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
    public:
    // private PyramidBloomRendererSO _bloomRenderer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PyramidBloomRendererSO* bloomRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO*) == 0x8);
    // private UnityEngine.Shader _fadeShader
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Shader* fadeShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader _mainEffectShader
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Shader* mainEffectShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // [SpaceAttribute] Offset: 0xE00D60
    // [RangeAttribute] Offset: 0xE00D60
    // private System.Single _bloomBlendFactor
    // Size: 0x4
    // Offset: 0x30
    float bloomBlendFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomRadius
    // Size: 0x4
    // Offset: 0x34
    float bloomRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomIntensity
    // Size: 0x4
    // Offset: 0x38
    float bloomIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _downBloomIntensityOffset
    // Size: 0x4
    // Offset: 0x3C
    float downBloomIntensityOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _pyramidWeightsParam
    // Size: 0x4
    // Offset: 0x40
    float pyramidWeightsParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _alphaWeights
    // Size: 0x4
    // Offset: 0x44
    float alphaWeights;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private PyramidBloomRendererSO/Pass _preFilterPass
    // Size: 0x4
    // Offset: 0x48
    GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _downsamplePass
    // Size: 0x4
    // Offset: 0x4C
    GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _upsamplePass
    // Size: 0x4
    // Offset: 0x50
    GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _finalUpsamplePass
    // Size: 0x4
    // Offset: 0x54
    GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // [SpaceAttribute] Offset: 0xE00E40
    // private System.Int32 _bloomTextureWidth
    // Size: 0x4
    // Offset: 0x58
    int bloomTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0xE00E78
    // [RangeAttribute] Offset: 0xE00E78
    // private System.Single _baseColorBoost
    // Size: 0x4
    // Offset: 0x5C
    float baseColorBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseColorBoostThreshold
    // Size: 0x4
    // Offset: 0x60
    float baseColorBoostThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: baseColorBoostThreshold and: fadeMaterial
    char __padding15[0x4] = {};
    // private UnityEngine.Material _fadeMaterial
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _mainEffectMaterial
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Material* mainEffectMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: PyramidBloomMainEffectSO
    PyramidBloomMainEffectSO(GlobalNamespace::PyramidBloomRendererSO* bloomRenderer_ = {}, UnityEngine::Shader* fadeShader_ = {}, UnityEngine::Shader* mainEffectShader_ = {}, float bloomBlendFactor_ = {}, float bloomRadius_ = {}, float bloomIntensity_ = {}, float downBloomIntensityOffset_ = {}, float pyramidWeightsParam_ = {}, float alphaWeights_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass_ = {}, GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass_ = {}, int bloomTextureWidth_ = {}, float baseColorBoost_ = {}, float baseColorBoostThreshold_ = {}, UnityEngine::Material* fadeMaterial_ = {}, UnityEngine::Material* mainEffectMaterial_ = {}) noexcept : bloomRenderer{bloomRenderer_}, fadeShader{fadeShader_}, mainEffectShader{mainEffectShader_}, bloomBlendFactor{bloomBlendFactor_}, bloomRadius{bloomRadius_}, bloomIntensity{bloomIntensity_}, downBloomIntensityOffset{downBloomIntensityOffset_}, pyramidWeightsParam{pyramidWeightsParam_}, alphaWeights{alphaWeights_}, preFilterPass{preFilterPass_}, downsamplePass{downsamplePass_}, upsamplePass{upsamplePass_}, finalUpsamplePass{finalUpsamplePass_}, bloomTextureWidth{bloomTextureWidth_}, baseColorBoost{baseColorBoost_}, baseColorBoostThreshold{baseColorBoostThreshold_}, fadeMaterial{fadeMaterial_}, mainEffectMaterial{mainEffectMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE00ED8
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE00EE8
    // Get static field: static private readonly System.Int32 _bloomIntensityID
    static int _get__bloomIntensityID();
    // Set static field: static private readonly System.Int32 _bloomIntensityID
    static void _set__bloomIntensityID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x2348AF8
    void OnDisable();
    // private System.Void LazyInitializeMaterials()
    // Offset: 0x23489C0
    void LazyInitializeMaterials();
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x2348990
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // protected override System.Void OnEnable()
    // Offset: 0x2348998
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x2348B34
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x2348BA8
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void .ctor()
    // Offset: 0x2348E38
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PyramidBloomMainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PyramidBloomMainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PyramidBloomMainEffectSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2348E74
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PyramidBloomMainEffectSO
  #pragma pack(pop)
  static check_size<sizeof(PyramidBloomMainEffectSO), 112 + sizeof(UnityEngine::Material*)> __GlobalNamespace_PyramidBloomMainEffectSOSizeCheck;
  static_assert(sizeof(PyramidBloomMainEffectSO) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomMainEffectSO*, "", "PyramidBloomMainEffectSO");
