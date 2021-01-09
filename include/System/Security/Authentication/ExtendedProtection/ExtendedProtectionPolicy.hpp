// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Security.Authentication.ExtendedProtection.PolicyEnforcement
#include "System/Security/Authentication/ExtendedProtection/PolicyEnforcement.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Authentication.ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Size: 0x10
  // Autogenerated type: System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
  // [] Offset: FFFFFFFF
  // [TypeConverterAttribute] Offset: D45410
  // [MonoTODOAttribute] Offset: D45410
  class ExtendedProtectionPolicy : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: ExtendedProtectionPolicy
    ExtendedProtectionPolicy() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Void .ctor(System.Security.Authentication.ExtendedProtection.PolicyEnforcement policyEnforcement)
    // Offset: 0x122AD88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtendedProtectionPolicy* New_ctor(System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtendedProtectionPolicy*, creationType>(policyEnforcement)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x122AD90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtendedProtectionPolicy* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtendedProtectionPolicy*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x122AE00
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x122AE08
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
#pragma pack(pop)
