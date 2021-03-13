// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: EnableRendererWithLightId
  // [] Offset: FFFFFFFF
  class EnableRendererWithLightId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // private System.Single _hideAlphaRangeMin
    // Size: 0x4
    // Offset: 0x38
    float hideAlphaRangeMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _hideAlphaRangeMax
    // Size: 0x4
    // Offset: 0x3C
    float hideAlphaRangeMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: EnableRendererWithLightId
    EnableRendererWithLightId(UnityEngine::Renderer* renderer_ = {}, float hideAlphaRangeMin_ = {}, float hideAlphaRangeMax_ = {}) noexcept : renderer{renderer_}, hideAlphaRangeMin{hideAlphaRangeMin_}, hideAlphaRangeMax{hideAlphaRangeMax_} {}
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1CDD1FC
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet_NEW(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1CDD240
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableRendererWithLightId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableRendererWithLightId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableRendererWithLightId*, creationType>()));
    }
  }; // EnableRendererWithLightId
  #pragma pack(pop)
  static check_size<sizeof(EnableRendererWithLightId), 60 + sizeof(float)> __GlobalNamespace_EnableRendererWithLightIdSizeCheck;
  static_assert(sizeof(EnableRendererWithLightId) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableRendererWithLightId*, "", "EnableRendererWithLightId");
