// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: RuntimeTypeHandle because it is already included!
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ReflectionOnlyType
  class ReflectionOnlyType : public System::RuntimeType {
    public:
    // private System.Void .ctor()
    // Offset: 0x10B7150
    // Implemented from: System.RuntimeType
    // Base method: System.Void RuntimeType::.ctor()
    // Base method: System.Void TypeInfo::.ctor()
    // Base method: System.Void Type::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static ReflectionOnlyType* New_ctor();
    // public override System.RuntimeTypeHandle get_TypeHandle()
    // Offset: 0x10B71B8
    // Implemented from: System.RuntimeType
    // Base method: System.RuntimeTypeHandle RuntimeType::get_TypeHandle()
    System::RuntimeTypeHandle get_TypeHandle();
  }; // System.ReflectionOnlyType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ReflectionOnlyType*, "System", "ReflectionOnlyType");
#pragma pack(pop)
