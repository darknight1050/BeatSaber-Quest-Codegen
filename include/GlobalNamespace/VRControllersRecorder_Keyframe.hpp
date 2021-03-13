// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorder
#include "GlobalNamespace/VRControllersRecorder.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorder/Keyframe
  // [] Offset: FFFFFFFF
  class VRControllersRecorder::Keyframe : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 _pos1
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 pos1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _pos2
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 pos2;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _pos3
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 pos3;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion _rot1
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Quaternion rot1;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion _rot2
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Quaternion rot2;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion _rot3
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Quaternion rot3;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Single _time
    // Size: 0x4
    // Offset: 0x64
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Keyframe
    Keyframe(UnityEngine::Vector3 pos1_ = {}, UnityEngine::Vector3 pos2_ = {}, UnityEngine::Vector3 pos3_ = {}, UnityEngine::Quaternion rot1_ = {}, UnityEngine::Quaternion rot2_ = {}, UnityEngine::Quaternion rot3_ = {}, float time_ = {}) noexcept : pos1{pos1_}, pos2{pos2_}, pos3{pos3_}, rot1{rot1_}, rot2{rot2_}, rot3{rot3_}, time{time_} {}
    // public System.Void .ctor()
    // Offset: 0x1089E68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorder::Keyframe* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorder::Keyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorder::Keyframe*, creationType>()));
    }
  }; // VRControllersRecorder/Keyframe
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorder::Keyframe), 100 + sizeof(float)> __GlobalNamespace_VRControllersRecorder_KeyframeSizeCheck;
  static_assert(sizeof(VRControllersRecorder::Keyframe) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder::Keyframe*, "", "VRControllersRecorder/Keyframe");
