// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeleton/BoneId
#include "GlobalNamespace/OVRSkeleton_BoneId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRBone
  class OVRBone : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD12CC
    // private OVRSkeleton/BoneId <Id>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRSkeleton::BoneId Id;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSkeleton::BoneId) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD12DC
    // private System.Int16 <ParentBoneIndex>k__BackingField
    // Size: 0x2
    // Offset: 0x14
    int16_t ParentBoneIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: ParentBoneIndex and: Transform
    char __padding1[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD12EC
    // private UnityEngine.Transform <Transform>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* Transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: OVRBone
    OVRBone(GlobalNamespace::OVRSkeleton::BoneId Id_ = {}, int16_t ParentBoneIndex_ = {}, UnityEngine::Transform* Transform_ = {}) noexcept : Id{Id_}, ParentBoneIndex{ParentBoneIndex_}, Transform{Transform_} {}
    // public OVRSkeleton/BoneId get_Id()
    // Offset: 0x125E558
    GlobalNamespace::OVRSkeleton::BoneId get_Id();
    // public System.Void set_Id(OVRSkeleton/BoneId value)
    // Offset: 0x125E560
    void set_Id(GlobalNamespace::OVRSkeleton::BoneId value);
    // public System.Int16 get_ParentBoneIndex()
    // Offset: 0x125E568
    int16_t get_ParentBoneIndex();
    // public System.Void set_ParentBoneIndex(System.Int16 value)
    // Offset: 0x125E570
    void set_ParentBoneIndex(int16_t value);
    // public UnityEngine.Transform get_Transform()
    // Offset: 0x125E578
    UnityEngine::Transform* get_Transform();
    // public System.Void set_Transform(UnityEngine.Transform value)
    // Offset: 0x125E580
    void set_Transform(UnityEngine::Transform* value);
    // public System.Void .ctor(OVRSkeleton/BoneId id, System.Int16 parentBoneIndex, UnityEngine.Transform trans)
    // Offset: 0x125E590
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBone* New_ctor(GlobalNamespace::OVRSkeleton::BoneId id, int16_t parentBoneIndex, UnityEngine::Transform* trans) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBone*, creationType>(id, parentBoneIndex, trans)));
    }
    // public System.Void .ctor()
    // Offset: 0x125E588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBone*, creationType>()));
    }
  }; // OVRBone
  #pragma pack(pop)
  static check_size<sizeof(OVRBone), 24 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_OVRBoneSizeCheck;
  static_assert(sizeof(OVRBone) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBone*, "", "OVRBone");
