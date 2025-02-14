// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.SoapServices
#include "System/Runtime/Remoting/SoapServices.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.SoapServices/TypeInfo
  class SoapServices::TypeInfo : public ::Il2CppObject {
    public:
    // public System.Collections.Hashtable Attributes
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* Attributes;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // public System.Collections.Hashtable Elements
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* Elements;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: TypeInfo
    TypeInfo(System::Collections::Hashtable* Attributes_ = {}, System::Collections::Hashtable* Elements_ = {}) noexcept : Attributes{Attributes_}, Elements{Elements_} {}
    // public System.Void .ctor()
    // Offset: 0x15E9CC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapServices::TypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::SoapServices::TypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapServices::TypeInfo*, creationType>()));
    }
  }; // System.Runtime.Remoting.SoapServices/TypeInfo
  #pragma pack(pop)
  static check_size<sizeof(SoapServices::TypeInfo), 24 + sizeof(System::Collections::Hashtable*)> __System_Runtime_Remoting_SoapServices_TypeInfoSizeCheck;
  static_assert(sizeof(SoapServices::TypeInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SoapServices::TypeInfo*, "System.Runtime.Remoting", "SoapServices/TypeInfo");
