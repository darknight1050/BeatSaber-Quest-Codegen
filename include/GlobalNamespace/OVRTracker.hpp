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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: OVRTracker
  // [] Offset: FFFFFFFF
  class OVRTracker : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRTracker::Frustum
    struct Frustum;
    // Creating value type constructor for type: OVRTracker
    OVRTracker() noexcept {}
    // public System.Boolean get_isPresent()
    // Offset: 0x197AAB0
    bool get_isPresent();
    // public System.Boolean get_isPositionTracked()
    // Offset: 0x197AB4C
    bool get_isPositionTracked();
    // public System.Boolean get_isEnabled()
    // Offset: 0x197ABAC
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x197AC48
    void set_isEnabled(bool value);
    // public System.Int32 get_count()
    // Offset: 0x197ACE8
    int get_count();
    // public OVRTracker/Frustum GetFrustum(System.Int32 tracker)
    // Offset: 0x197AE64
    GlobalNamespace::OVRTracker::Frustum GetFrustum(int tracker);
    // public OVRPose GetPose(System.Int32 tracker)
    // Offset: 0x197AF14
    GlobalNamespace::OVRPose GetPose(int tracker);
    // public System.Boolean GetPoseValid(System.Int32 tracker)
    // Offset: 0x197B1A8
    bool GetPoseValid(int tracker);
    // public System.Boolean GetPresent(System.Int32 tracker)
    // Offset: 0x197AD28
    bool GetPresent(int tracker);
    // public System.Void .ctor()
    // Offset: 0x197B2E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRTracker*, creationType>()));
    }
  }; // OVRTracker
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRTracker*, "", "OVRTracker");
#pragma pack(pop)
