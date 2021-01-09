// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: RuntimeTypeHandle because it is already included!
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x30
  // Autogenerated type: System.ReflectionOnlyType
  // [] Offset: FFFFFFFF
  class ReflectionOnlyType : public System::RuntimeType {
    public:
    // Creating value type constructor for type: ReflectionOnlyType
    ReflectionOnlyType() noexcept {}
    // private System.Void .ctor()
    // Offset: 0x15D2218
    // Implemented from: System.RuntimeType
    // Base method: System.Void RuntimeType::.ctor()
    // Base method: System.Void TypeInfo::.ctor()
    // Base method: System.Void Type::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionOnlyType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ReflectionOnlyType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionOnlyType*, creationType>()));
    }
    // public override System.RuntimeTypeHandle get_TypeHandle()
    // Offset: 0x15D2280
    // Implemented from: System.RuntimeType
    // Base method: System.RuntimeTypeHandle RuntimeType::get_TypeHandle()
    System::RuntimeTypeHandle get_TypeHandle();
  }; // System.ReflectionOnlyType
}
DEFINE_IL2CPP_ARG_TYPE(System::ReflectionOnlyType*, "System", "ReflectionOnlyType");
#pragma pack(pop)
