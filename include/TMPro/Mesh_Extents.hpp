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
  // Autogenerated type: TMPro.Mesh_Extents
  struct Mesh_Extents : public System::ValueType {
    public:
    // public UnityEngine.Vector2 min
    // Offset: 0x0
    UnityEngine::Vector2 min;
    // public UnityEngine.Vector2 max
    // Offset: 0x8
    UnityEngine::Vector2 max;
    // Creating value type constructor for type: Mesh_Extents
    Mesh_Extents(UnityEngine::Vector2 min_ = {}, UnityEngine::Vector2 max_ = {}) : min{min_}, max{max_} {}
    // public System.Void .ctor(UnityEngine.Vector2 min, UnityEngine.Vector2 max)
    // Offset: 0xA26FDC
    static Mesh_Extents* New_ctor(UnityEngine::Vector2 min, UnityEngine::Vector2 max);
    // public override System.String ToString()
    // Offset: 0xA26FE8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
  }; // TMPro.Mesh_Extents
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::Mesh_Extents, "TMPro", "Mesh_Extents");
#pragma pack(pop)
