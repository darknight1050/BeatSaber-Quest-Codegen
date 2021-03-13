// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ConstructorInfo
#include "System/Reflection/ConstructorInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeConstructorInfo
  // [] Offset: FFFFFFFF
  class RuntimeConstructorInfo : public System::Reflection::ConstructorInfo/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: RuntimeConstructorInfo
    RuntimeConstructorInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x1ACD6CC
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x1ACD75C
    System::Reflection::BindingFlags get_BindingFlags();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x1ACD764
    System::RuntimeType* get_ReflectedTypeInternal();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1ACD7F0
    void GetObjectData_NEW(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.String SerializationToString()
    // Offset: 0x1AC665C
    ::Il2CppString* SerializationToString();
    // System.Void SerializationInvoke(System.Object target, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1ACD8EC
    void SerializationInvoke(::Il2CppObject* target, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1ACD6C8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module_NEW()
    System::Reflection::Module* get_Module();
    // protected System.Void .ctor()
    // Offset: 0x1AC8A10
    // Implemented from: System.Reflection.ConstructorInfo
    // Base method: System.Void ConstructorInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeConstructorInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RuntimeConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeConstructorInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimeConstructorInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeConstructorInfo*, "System.Reflection", "RuntimeConstructorInfo");
