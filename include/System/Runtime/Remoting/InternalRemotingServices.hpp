// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Remoting::Metadata
namespace System::Runtime::Remoting::Metadata {
  // Forward declaring type: SoapAttribute
  class SoapAttribute;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.InternalRemotingServices
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C9693C
  class InternalRemotingServices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: InternalRemotingServices
    InternalRemotingServices() noexcept {}
    // Get static field: static private System.Collections.Hashtable _soapAttributes
    static System::Collections::Hashtable* _get__soapAttributes();
    // Set static field: static private System.Collections.Hashtable _soapAttributes
    static void _set__soapAttributes(System::Collections::Hashtable* value);
    // static public System.Runtime.Remoting.Metadata.SoapAttribute GetCachedSoapAttribute(System.Object reflectionObject)
    // Offset: 0x18A445C
    static System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::Il2CppObject* reflectionObject);
    // static private System.Void .cctor()
    // Offset: 0x18A491C
    static void _cctor();
  }; // System.Runtime.Remoting.InternalRemotingServices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::InternalRemotingServices*, "System.Runtime.Remoting", "InternalRemotingServices");
