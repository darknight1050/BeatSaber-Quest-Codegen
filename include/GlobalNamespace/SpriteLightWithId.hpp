// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpriteLightWithId
  class SpriteLightWithId : public GlobalNamespace::LightWithId {
    public:
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Offset: 0x30
    UnityEngine::SpriteRenderer* spriteRenderer;
    // private System.Single _intensity
    // Offset: 0x38
    float intensity;
    // private System.Single _minAlpha
    // Offset: 0x3C
    float minAlpha;
    // public UnityEngine.Color get_color()
    // Offset: 0x1785DCC
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1785DE8
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1785EB4
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SpriteLightWithId* New_ctor();
  }; // SpriteLightWithId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteLightWithId*, "", "SpriteLightWithId");
#pragma pack(pop)
