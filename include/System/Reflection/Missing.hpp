// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: System.Reflection.Missing
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C9475C
  class Missing : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: Missing
    Missing() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static public readonly System.Reflection.Missing Value
    static System::Reflection::Missing* _get_Value();
    // Set static field: static public readonly System.Reflection.Missing Value
    static void _set_Value(System::Reflection::Missing* value);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1AC72E8
    void System_Runtime_Serialization_ISerializable_GetObjectData_NEW(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Void .cctor()
    // Offset: 0x1AC7380
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1AC72E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Missing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Missing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Missing*, creationType>()));
    }
  }; // System.Reflection.Missing
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Missing*, "System.Reflection", "Missing");
