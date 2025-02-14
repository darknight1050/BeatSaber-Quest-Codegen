// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleVRNodeRecorder/SavedData
#include "GlobalNamespace/SimpleVRNodeRecorder.hpp"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SimpleVRNodeRecorder/SavedData/NodeKeyframe
  class SimpleVRNodeRecorder::SavedData::NodeKeyframe : public ::Il2CppObject {
    public:
    // public System.Single posX
    // Size: 0x4
    // Offset: 0x10
    float posX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posY
    // Size: 0x4
    // Offset: 0x14
    float posY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posZ
    // Size: 0x4
    // Offset: 0x18
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotX
    // Size: 0x4
    // Offset: 0x1C
    float rotX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotY
    // Size: 0x4
    // Offset: 0x20
    float rotY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotZ
    // Size: 0x4
    // Offset: 0x24
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotW
    // Size: 0x4
    // Offset: 0x28
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x2C
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NodeKeyframe
    NodeKeyframe(float posX_ = {}, float posY_ = {}, float posZ_ = {}, float rotX_ = {}, float rotY_ = {}, float rotZ_ = {}, float rotW_ = {}, float time_ = {}) noexcept : posX{posX_}, posY{posY_}, posZ{posZ_}, rotX{rotX_}, rotY{rotY_}, rotZ{rotZ_}, rotW{rotW_}, time{time_} {}
    // public UnityEngine.Vector3 get_pos()
    // Offset: 0x10F01D4
    UnityEngine::Vector3 get_pos();
    // public UnityEngine.Quaternion get_rot()
    // Offset: 0x10F0210
    UnityEngine::Quaternion get_rot();
    // public System.Void .ctor(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Single time)
    // Offset: 0x10EFC54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleVRNodeRecorder::SavedData::NodeKeyframe* New_ctor(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleVRNodeRecorder::SavedData::NodeKeyframe*, creationType>(pos, rot, time)));
    }
  }; // SimpleVRNodeRecorder/SavedData/NodeKeyframe
  #pragma pack(pop)
  static check_size<sizeof(SimpleVRNodeRecorder::SavedData::NodeKeyframe), 44 + sizeof(float)> __GlobalNamespace_SimpleVRNodeRecorder_SavedData_NodeKeyframeSizeCheck;
  static_assert(sizeof(SimpleVRNodeRecorder::SavedData::NodeKeyframe) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*, "", "SimpleVRNodeRecorder/SavedData/NodeKeyframe");
