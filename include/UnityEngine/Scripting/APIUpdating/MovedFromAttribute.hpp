// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
#include "UnityEngine/Scripting/APIUpdating/MovedFromAttributeData.hpp"
// Completed includes
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Autogenerated type: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  class MovedFromAttribute : public System::Attribute {
    public:
    // UnityEngine.Scripting.APIUpdating.MovedFromAttributeData data
    // Offset: 0x10
    UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data;
    // public System.Void .ctor(System.Boolean autoUpdateAPI, System.String sourceNamespace, System.String sourceAssembly, System.String sourceClassName)
    // Offset: 0x12EA6A4
    static MovedFromAttribute* New_ctor(bool autoUpdateAPI, ::Il2CppString* sourceNamespace, ::Il2CppString* sourceAssembly, ::Il2CppString* sourceClassName);
    // public System.Void .ctor(System.String sourceNamespace)
    // Offset: 0x12EA79C
    static MovedFromAttribute* New_ctor(::Il2CppString* sourceNamespace);
  }; // UnityEngine.Scripting.APIUpdating.MovedFromAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttribute*, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
#pragma pack(pop)
