// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRTracker
  class OVRTracker : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRTracker::Frustum
    struct Frustum;
    // Creating value type constructor for type: OVRTracker
    OVRTracker() noexcept {}
    // public System.Boolean get_isPresent()
    // Offset: 0x1EBA9D0
    bool get_isPresent();
    // public System.Boolean get_isPositionTracked()
    // Offset: 0x1EBAA6C
    bool get_isPositionTracked();
    // public System.Boolean get_isEnabled()
    // Offset: 0x1EBAACC
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x1EBAB68
    void set_isEnabled(bool value);
    // public System.Int32 get_count()
    // Offset: 0x1EBAC08
    int get_count();
    // public OVRTracker/Frustum GetFrustum(System.Int32 tracker)
    // Offset: 0x1EBAD84
    GlobalNamespace::OVRTracker::Frustum GetFrustum(int tracker);
    // public OVRPose GetPose(System.Int32 tracker)
    // Offset: 0x1EBAE34
    GlobalNamespace::OVRPose GetPose(int tracker);
    // public System.Boolean GetPoseValid(System.Int32 tracker)
    // Offset: 0x1EBB0C8
    bool GetPoseValid(int tracker);
    // public System.Boolean GetPresent(System.Int32 tracker)
    // Offset: 0x1EBAC48
    bool GetPresent(int tracker);
    // public System.Void .ctor()
    // Offset: 0x1EBB204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRTracker*, creationType>()));
    }
  }; // OVRTracker
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRTracker*, "", "OVRTracker");
