// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ISubsystemDescriptor
#include "UnityEngine/ISubsystemDescriptor.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SubsystemDescriptor
  class SubsystemDescriptor : public UnityEngine::ISubsystemDescriptor, public ::Il2CppObject {
    public:
    // private System.String <id>k__BackingField
    // Offset: 0x10
    ::Il2CppString* id;
    // public System.String get_id()
    // Offset: 0x18CFB50
    ::Il2CppString* get_id();
    // protected System.Void .ctor()
    // Offset: 0x18CFB58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SubsystemDescriptor* New_ctor();
  }; // UnityEngine.SubsystemDescriptor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemDescriptor*, "UnityEngine", "SubsystemDescriptor");
#pragma pack(pop)
