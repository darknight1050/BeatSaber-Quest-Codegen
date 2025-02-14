// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/PositionAndRotation
  class VRControllersRecorderSaveData::PositionAndRotation : public ::Il2CppObject {
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
    // Creating value type constructor for type: PositionAndRotation
    PositionAndRotation(float posX_ = {}, float posY_ = {}, float posZ_ = {}, float rotX_ = {}, float rotY_ = {}, float rotZ_ = {}, float rotW_ = {}) noexcept : posX{posX_}, posY{posY_}, posZ{posZ_}, rotX{rotX_}, rotY{rotY_}, rotZ{rotZ_}, rotW{rotW_} {}
    // public System.Void .ctor()
    // Offset: 0x1D94BC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::PositionAndRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::PositionAndRotation*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/PositionAndRotation
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::PositionAndRotation), 40 + sizeof(float)> __GlobalNamespace_VRControllersRecorderSaveData_PositionAndRotationSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::PositionAndRotation) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*, "", "VRControllersRecorderSaveData/PositionAndRotation");
