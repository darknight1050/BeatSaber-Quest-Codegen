// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapFieldAttribute
  class SoapFieldAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.String _elementName
    // Offset: 0x28
    ::Il2CppString* elementName;
    // private System.Boolean _isElement
    // Offset: 0x30
    bool isElement;
    // public System.String get_XmlElementName()
    // Offset: 0xD6FF5C
    ::Il2CppString* get_XmlElementName();
    // public System.Boolean IsInteropXmlElement()
    // Offset: 0xD6FF64
    bool IsInteropXmlElement();
    // public System.Void .ctor()
    // Offset: 0xD6FF54
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static SoapFieldAttribute* New_ctor();
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0xD6FF6C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapFieldAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapFieldAttribute*, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
#pragma pack(pop)
