// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarMaskBodyPart
  struct AvatarMaskBodyPart;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AvatarMask
  // [NativeHeaderAttribute] Offset: DA91C8
  // [NativeHeaderAttribute] Offset: DA91C8
  // [UsedByNativeCodeAttribute] Offset: DA91C8
  // [MovedFromAttribute] Offset: DA91C8
  class AvatarMask : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: AvatarMask
    AvatarMask() noexcept {}
    // public System.Boolean GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart index)
    // Offset: 0x2343130
    bool GetHumanoidBodyPartActive(UnityEngine::AvatarMaskBodyPart index);
    // public System.Int32 get_transformCount()
    // Offset: 0x2343180
    int get_transformCount();
    // public System.String GetTransformPath(System.Int32 index)
    // Offset: 0x23431C0
    ::Il2CppString* GetTransformPath(int index);
    // private System.Single GetTransformWeight(System.Int32 index)
    // Offset: 0x2343210
    float GetTransformWeight(int index);
    // public System.Boolean GetTransformActive(System.Int32 index)
    // Offset: 0x2343260
    bool GetTransformActive(int index);
  }; // UnityEngine.AvatarMask
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
