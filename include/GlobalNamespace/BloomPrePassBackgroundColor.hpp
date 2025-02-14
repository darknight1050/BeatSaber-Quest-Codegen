// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColor
  class BloomPrePassBackgroundColor : public GlobalNamespace::BloomPrePassNonLightPass {
    public:
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x20
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x24
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _grayscaleFactor
    // Size: 0x4
    // Offset: 0x28
    float grayscaleFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: grayscaleFactor and: shader
    char __padding2[0x4] = {};
    // [SpaceAttribute] Offset: 0xDF3D74
    // private UnityEngine.Shader _shader
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: BloomPrePassBackgroundColor
    BloomPrePassBackgroundColor(float intensity_ = {}, float minAlpha_ = {}, float grayscaleFactor_ = {}, UnityEngine::Shader* shader_ = {}, UnityEngine::Color color_ = {}) noexcept : intensity{intensity_}, minAlpha{minAlpha_}, grayscaleFactor{grayscaleFactor_}, shader{shader_}, color{color_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF3DAC
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF3DBC
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF3DCC
    // Get static field: static private System.Boolean _initialized
    static bool _get__initialized();
    // Set static field: static private System.Boolean _initialized
    static void _set__initialized(bool value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1D6AAB4
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1D6AAC0
    void set_color(UnityEngine::Color value);
    // private UnityEngine.Color get_bgColor()
    // Offset: 0x1D6AACC
    UnityEngine::Color get_bgColor();
    // private System.Void InitIfNeeded()
    // Offset: 0x1D6AB58
    void InitIfNeeded();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1D6AD14
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // public System.Void .ctor()
    // Offset: 0x1D6ADFC
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColor*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D6AE80
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBackgroundColor
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColor), 56 + sizeof(UnityEngine::Color)> __GlobalNamespace_BloomPrePassBackgroundColorSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColor) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColor*, "", "BloomPrePassBackgroundColor");
