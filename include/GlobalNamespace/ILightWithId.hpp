// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILightWithId
  class ILightWithId {
    public:
    // Creating value type constructor for type: ILightWithId
    ILightWithId() noexcept {}
    // public System.Boolean get_isRegistered()
    // Offset: 0xFFFFFFFF
    bool get_isRegistered();
    // public System.Void __SetIsRegistered()
    // Offset: 0xFFFFFFFF
    void __SetIsRegistered();
    // public System.Void __SetIsUnRegistered()
    // Offset: 0xFFFFFFFF
    void __SetIsUnRegistered();
    // public System.Int32 get_lightId()
    // Offset: 0xFFFFFFFF
    int get_lightId();
    // public System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xFFFFFFFF
    void ColorWasSet(UnityEngine::Color color);
  }; // ILightWithId
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILightWithId*, "", "ILightWithId");
