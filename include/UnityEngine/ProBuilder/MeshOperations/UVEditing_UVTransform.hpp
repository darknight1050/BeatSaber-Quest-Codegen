// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.UVEditing
#include "UnityEngine/ProBuilder/MeshOperations/UVEditing.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing/UVTransform
  struct UVEditing::UVTransform : public System::ValueType {
    public:
    // public UnityEngine.Vector2 translation
    // Offset: 0x0
    UnityEngine::Vector2 translation;
    // public System.Single rotation
    // Offset: 0x8
    float rotation;
    // public UnityEngine.Vector2 scale
    // Offset: 0xC
    UnityEngine::Vector2 scale;
    // Creating value type constructor for type: UVTransform
    UVTransform(UnityEngine::Vector2 translation_ = {}, float rotation_ = {}, UnityEngine::Vector2 scale_ = {}) : translation{translation_}, rotation{rotation_}, scale{scale_} {}
    // public override System.String ToString()
    // Offset: 0x9A58F0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing/UVTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/UVTransform");
#pragma pack(pop)
