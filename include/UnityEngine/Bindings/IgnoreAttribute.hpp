// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.IgnoreAttribute
  class IgnoreAttribute : public System::Attribute {
    public:
    // private System.Boolean <DoesNotContributeToSize>k__BackingField
    // Offset: 0x10
    bool DoesNotContributeToSize;
    // public System.Void set_DoesNotContributeToSize(System.Boolean value)
    // Offset: 0x18C6BA0
    void set_DoesNotContributeToSize(bool value);
    // public System.Void .ctor()
    // Offset: 0x18C6BAC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static IgnoreAttribute* New_ctor();
  }; // UnityEngine.Bindings.IgnoreAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::IgnoreAttribute*, "UnityEngine.Bindings", "IgnoreAttribute");
#pragma pack(pop)
