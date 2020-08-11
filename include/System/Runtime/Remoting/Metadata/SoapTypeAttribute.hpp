// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapTypeAttribute
  class SoapTypeAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.Boolean _useAttribute
    // Offset: 0x28
    bool useAttribute;
    // private System.String _xmlElementName
    // Offset: 0x30
    ::CsString* xmlElementName;
    // private System.String _xmlNamespace
    // Offset: 0x38
    ::CsString* xmlNamespace;
    // private System.String _xmlTypeName
    // Offset: 0x40
    ::CsString* xmlTypeName;
    // private System.String _xmlTypeNamespace
    // Offset: 0x48
    ::CsString* xmlTypeNamespace;
    // private System.Boolean _isType
    // Offset: 0x50
    bool isType;
    // private System.Boolean _isElement
    // Offset: 0x51
    bool isElement;
    // public System.String get_XmlElementName()
    // Offset: 0xDFD6A0
    ::CsString* get_XmlElementName();
    // public System.String get_XmlTypeName()
    // Offset: 0xDFD6B0
    ::CsString* get_XmlTypeName();
    // public System.String get_XmlTypeNamespace()
    // Offset: 0xDFD6B8
    ::CsString* get_XmlTypeNamespace();
    // System.Boolean get_IsInteropXmlElement()
    // Offset: 0xDFD6C0
    bool get_IsInteropXmlElement();
    // System.Boolean get_IsInteropXmlType()
    // Offset: 0xDFD6C8
    bool get_IsInteropXmlType();
    // public System.Void .ctor()
    // Offset: 0xDFD690
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static SoapTypeAttribute* New_ctor();
    // public override System.Boolean get_UseAttribute()
    // Offset: 0xDFD698
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0xDFD6A8
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::CsString* get_XmlNamespace();
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0xDFD6D0
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::CsObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapTypeAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapTypeAttribute*, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
#pragma pack(pop)
