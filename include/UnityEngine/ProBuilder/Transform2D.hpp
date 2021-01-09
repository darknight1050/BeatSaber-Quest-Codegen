// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x24
  // Autogenerated type: UnityEngine.ProBuilder.Transform2D
  // [] Offset: FFFFFFFF
  class Transform2D : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector2 position
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Vector2 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0x18
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 scale
    // Size: 0x8
    // Offset: 0x1C
    UnityEngine::Vector2 scale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: Transform2D
    Transform2D(UnityEngine::Vector2 position_ = {}, float rotation_ = {}, UnityEngine::Vector2 scale_ = {}) noexcept : position{position_}, rotation{rotation_}, scale{scale_} {}
    // public System.Void .ctor(UnityEngine.Vector2 position, System.Single rotation, UnityEngine.Vector2 scale)
    // Offset: 0x194D818
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Transform2D* New_ctor(UnityEngine::Vector2 position, float rotation, UnityEngine::Vector2 scale) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Transform2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Transform2D*, creationType>(position, rotation, scale)));
    }
    // public UnityEngine.Vector2 TransformPoint(UnityEngine.Vector2 p)
    // Offset: 0x194D874
    UnityEngine::Vector2 TransformPoint(UnityEngine::Vector2 p);
    // public override System.String ToString()
    // Offset: 0x194D948
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Transform2D
  static check_size<sizeof(Transform2D), 28 + sizeof(UnityEngine::Vector2)> __UnityEngine_ProBuilder_Transform2DSizeCheck;
  static_assert(sizeof(Transform2D) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Transform2D*, "UnityEngine.ProBuilder", "Transform2D");
#pragma pack(pop)
