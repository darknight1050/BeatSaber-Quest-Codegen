// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Grounding/Pelvis
  class Grounding::Pelvis : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE0A334
    // private UnityEngine.Vector3 <IKOffset>k__BackingField
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 IKOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xE0A344
    // private System.Single <heightOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float heightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RootMotion.FinalIK.Grounding grounding
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::Grounding* grounding;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // private UnityEngine.Vector3 lastRootPosition
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 lastRootPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single damperF
    // Size: 0x4
    // Offset: 0x34
    float damperF;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x38
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: lastTime
    char __padding5[0x3] = {};
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0x3C
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Pelvis
    Pelvis(UnityEngine::Vector3 IKOffset_ = {}, float heightOffset_ = {}, RootMotion::FinalIK::Grounding* grounding_ = {}, UnityEngine::Vector3 lastRootPosition_ = {}, float damperF_ = {}, bool initiated_ = {}, float lastTime_ = {}) noexcept : IKOffset{IKOffset_}, heightOffset{heightOffset_}, grounding{grounding_}, lastRootPosition{lastRootPosition_}, damperF{damperF_}, initiated{initiated_}, lastTime{lastTime_} {}
    // public UnityEngine.Vector3 get_IKOffset()
    // Offset: 0x1C47C54
    UnityEngine::Vector3 get_IKOffset();
    // private System.Void set_IKOffset(UnityEngine.Vector3 value)
    // Offset: 0x1C47C60
    void set_IKOffset(UnityEngine::Vector3 value);
    // public System.Single get_heightOffset()
    // Offset: 0x1C47C6C
    float get_heightOffset();
    // private System.Void set_heightOffset(System.Single value)
    // Offset: 0x1C47C74
    void set_heightOffset(float value);
    // public System.Void Initiate(RootMotion.FinalIK.Grounding grounding)
    // Offset: 0x1C457B8
    void Initiate(RootMotion::FinalIK::Grounding* grounding);
    // public System.Void Reset()
    // Offset: 0x1C46320
    void Reset();
    // public System.Void OnEnable()
    // Offset: 0x1C47C7C
    void OnEnable();
    // public System.Void Process(System.Single lowestOffset, System.Single highestOffset, System.Boolean isGrounded)
    // Offset: 0x1C460B4
    void Process(float lowestOffset, float highestOffset, bool isGrounded);
    // public System.Void .ctor()
    // Offset: 0x1C456CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grounding::Pelvis* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Grounding::Pelvis::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grounding::Pelvis*, creationType>()));
    }
  }; // RootMotion.FinalIK.Grounding/Pelvis
  #pragma pack(pop)
  static check_size<sizeof(Grounding::Pelvis), 60 + sizeof(float)> __RootMotion_FinalIK_Grounding_PelvisSizeCheck;
  static_assert(sizeof(Grounding::Pelvis) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding::Pelvis*, "RootMotion.FinalIK", "Grounding/Pelvis");
