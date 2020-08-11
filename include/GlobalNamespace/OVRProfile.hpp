// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRProfile
  class OVRProfile : public UnityEngine::Object {
    public:
    // Nested type: GlobalNamespace::OVRProfile::State
    struct State;
    // public System.String get_id()
    // Offset: 0xF352E4
    ::CsString* get_id();
    // public System.String get_userName()
    // Offset: 0xF3532C
    ::CsString* get_userName();
    // public System.String get_locale()
    // Offset: 0xF35374
    ::CsString* get_locale();
    // public System.Single get_ipd()
    // Offset: 0xF353BC
    float get_ipd();
    // public System.Single get_eyeHeight()
    // Offset: 0xF354F0
    float get_eyeHeight();
    // public System.Single get_eyeDepth()
    // Offset: 0xF35550
    float get_eyeDepth();
    // public System.Single get_neckHeight()
    // Offset: 0xF355B0
    float get_neckHeight();
    // public OVRProfile/State get_state()
    // Offset: 0xF355D0
    GlobalNamespace::OVRProfile::State get_state();
    // public System.Void .ctor()
    // Offset: 0xF355D8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRProfile* New_ctor();
  }; // OVRProfile
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProfile*, "", "OVRProfile");
#pragma pack(pop)
