// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.Extents
  struct Extents : public System::ValueType {
    public:
    // public UnityEngine.Vector2 min
    // Offset: 0x0
    UnityEngine::Vector2 min;
    // public UnityEngine.Vector2 max
    // Offset: 0x8
    UnityEngine::Vector2 max;
    // Creating value type constructor for type: Extents
    Extents(UnityEngine::Vector2 min_ = {}, UnityEngine::Vector2 max_ = {}) : min{min_}, max{max_} {}
    // public System.Void .ctor(UnityEngine.Vector2 min, UnityEngine.Vector2 max)
    // Offset: 0x991938
    static Extents* New_ctor(UnityEngine::Vector2 min, UnityEngine::Vector2 max);
    // public override System.String ToString()
    // Offset: 0x991944
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // TMPro.Extents
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::Extents, "TMPro", "Extents");
#pragma pack(pop)
