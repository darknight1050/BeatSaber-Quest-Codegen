// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Bindings.CodegenOptions
#include "UnityEngine/Bindings/CodegenOptions.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.NativeTypeAttribute
  class NativeTypeAttribute : public System::Attribute {
    public:
    // private System.String <Header>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Header;
    // private System.String <IntermediateScriptingStructName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* IntermediateScriptingStructName;
    // private UnityEngine.Bindings.CodegenOptions <CodegenOptions>k__BackingField
    // Offset: 0x20
    UnityEngine::Bindings::CodegenOptions CodegenOptions;
    // public System.Void set_Header(System.String value)
    // Offset: 0x18C6FC0
    void set_Header(::Il2CppString* value);
    // public System.Void set_IntermediateScriptingStructName(System.String value)
    // Offset: 0x18C6FC8
    void set_IntermediateScriptingStructName(::Il2CppString* value);
    // public System.Void set_CodegenOptions(UnityEngine.Bindings.CodegenOptions value)
    // Offset: 0x18C6FD0
    void set_CodegenOptions(UnityEngine::Bindings::CodegenOptions value);
    // public System.Void .ctor(UnityEngine.Bindings.CodegenOptions codegenOptions)
    // Offset: 0x18C7000
    static NativeTypeAttribute* New_ctor(UnityEngine::Bindings::CodegenOptions codegenOptions);
    // public System.Void .ctor(System.String header)
    // Offset: 0x18C702C
    static NativeTypeAttribute* New_ctor(::Il2CppString* header);
    // public System.Void .ctor(UnityEngine.Bindings.CodegenOptions codegenOptions, System.String intermediateStructName)
    // Offset: 0x18C7128
    static NativeTypeAttribute* New_ctor(UnityEngine::Bindings::CodegenOptions codegenOptions, ::Il2CppString* intermediateStructName);
    // public System.Void .ctor()
    // Offset: 0x18C6FD8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static NativeTypeAttribute* New_ctor();
  }; // UnityEngine.Bindings.NativeTypeAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeTypeAttribute*, "UnityEngine.Bindings", "NativeTypeAttribute");
#pragma pack(pop)
