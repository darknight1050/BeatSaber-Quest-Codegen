// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x18
  // Autogenerated type: ColorSO
  // [] Offset: FFFFFFFF
  class ColorSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Creating value type constructor for type: ColorSO
    ColorSO() noexcept {}
    // public UnityEngine.Color get_color()
    // Offset: 0xFFFFFFFF
    UnityEngine::Color get_color();
    // protected System.Void .ctor()
    // Offset: 0x1A0AC9C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSO*, creationType>()));
    }
  }; // ColorSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSO*, "", "ColorSO");
#pragma pack(pop)
