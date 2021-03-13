// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AnimatedAvatarPoseController
  // [] Offset: FFFFFFFF
  class AnimatedAvatarPoseController : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xD1ED40
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController*) == 0x8);
    // Creating value type constructor for type: AnimatedAvatarPoseController
    AnimatedAvatarPoseController(GlobalNamespace::AvatarPoseController* avatarPoseController_ = {}) noexcept : avatarPoseController{avatarPoseController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void LateUpdate()
    // Offset: 0xFFA4BC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xFFA6C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedAvatarPoseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnimatedAvatarPoseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedAvatarPoseController*, creationType>()));
    }
  }; // AnimatedAvatarPoseController
  #pragma pack(pop)
  static check_size<sizeof(AnimatedAvatarPoseController), 24 + sizeof(GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AnimatedAvatarPoseControllerSizeCheck;
  static_assert(sizeof(AnimatedAvatarPoseController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnimatedAvatarPoseController*, "", "AnimatedAvatarPoseController");
