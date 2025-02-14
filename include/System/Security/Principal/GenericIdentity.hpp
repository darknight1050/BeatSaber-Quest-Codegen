// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Claims.ClaimsIdentity
#include "System/Security/Claims/ClaimsIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.GenericIdentity
  // [ComVisibleAttribute] Offset: D7D62C
  class GenericIdentity : public System::Security::Claims::ClaimsIdentity {
    public:
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_type
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* m_type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GenericIdentity
    GenericIdentity(::Il2CppString* m_name_ = {}, ::Il2CppString* m_type_ = {}) noexcept : m_name{m_name_}, m_type{m_type_} {}
    // public System.Void .ctor(System.String name, System.String type)
    // Offset: 0x1AD7EFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericIdentity* New_ctor(::Il2CppString* name, ::Il2CppString* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::GenericIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericIdentity*, creationType>(name, type)));
    }
    // protected System.Void .ctor(System.Security.Principal.GenericIdentity identity)
    // Offset: 0x1AD807C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericIdentity* New_ctor(System::Security::Principal::GenericIdentity* identity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::GenericIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericIdentity*, creationType>(identity)));
    }
    // private System.Void AddNameClaim()
    // Offset: 0x1AD7FC0
    void AddNameClaim();
    // private System.Void .ctor()
    // Offset: 0x1AD8074
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.Void ClaimsIdentity::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericIdentity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::GenericIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericIdentity*, creationType>()));
    }
    // public override System.Security.Claims.ClaimsIdentity Clone()
    // Offset: 0x1AD80BC
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.Security.Claims.ClaimsIdentity ClaimsIdentity::Clone()
    System::Security::Claims::ClaimsIdentity* Clone();
    // public override System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> get_Claims()
    // Offset: 0x1AD811C
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> ClaimsIdentity::get_Claims()
    System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* get_Claims();
    // public override System.String get_Name()
    // Offset: 0x1AD8124
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.String ClaimsIdentity::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String get_AuthenticationType()
    // Offset: 0x1AD812C
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.String ClaimsIdentity::get_AuthenticationType()
    ::Il2CppString* get_AuthenticationType();
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1AD8134
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.Void ClaimsIdentity::OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
  }; // System.Security.Principal.GenericIdentity
  #pragma pack(pop)
  static check_size<sizeof(GenericIdentity), 128 + sizeof(::Il2CppString*)> __System_Security_Principal_GenericIdentitySizeCheck;
  static_assert(sizeof(GenericIdentity) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::GenericIdentity*, "System.Security.Principal", "GenericIdentity");
