// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Avatar
  class Avatar;
  // Forward declaring type: AvatarIKGoal
  struct AvatarIKGoal;
  // Forward declaring type: HumanBodyBones
  struct HumanBodyBones;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: TQ
  class TQ;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  // Autogenerated type: RootMotion.AvatarUtility
  // [] Offset: FFFFFFFF
  class AvatarUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AvatarUtility
    AvatarUtility() noexcept {}
    // static public UnityEngine.Quaternion GetPostRotation(UnityEngine.Avatar avatar, UnityEngine.AvatarIKGoal avatarIKGoal)
    // Offset: 0x173DBF4
    static UnityEngine::Quaternion GetPostRotation(UnityEngine::Avatar* avatar, UnityEngine::AvatarIKGoal avatarIKGoal);
    // static public RootMotion.TQ GetIKGoalTQ(UnityEngine.Avatar avatar, System.Single humanScale, UnityEngine.AvatarIKGoal avatarIKGoal, RootMotion.TQ bodyPositionRotation, RootMotion.TQ boneTQ)
    // Offset: 0x173DE14
    static RootMotion::TQ* GetIKGoalTQ(UnityEngine::Avatar* avatar, float humanScale, UnityEngine::AvatarIKGoal avatarIKGoal, RootMotion::TQ* bodyPositionRotation, RootMotion::TQ* boneTQ);
    // static public UnityEngine.HumanBodyBones HumanIDFromAvatarIKGoal(UnityEngine.AvatarIKGoal avatarIKGoal)
    // Offset: 0x173DDF4
    static UnityEngine::HumanBodyBones HumanIDFromAvatarIKGoal(UnityEngine::AvatarIKGoal avatarIKGoal);
    // public System.Void .ctor()
    // Offset: 0x173E4AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarUtility* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::AvatarUtility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarUtility*, creationType>()));
    }
  }; // RootMotion.AvatarUtility
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::AvatarUtility*, "RootMotion", "AvatarUtility");
#pragma pack(pop)
