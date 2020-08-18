// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.AsnEncodedData
  class AsnEncodedData : public ::Il2CppObject {
    public:
    // System.Security.Cryptography.Oid _oid
    // Offset: 0x10
    System::Security::Cryptography::Oid* oid;
    // System.Byte[] _raw
    // Offset: 0x18
    ::Array<uint8_t>* raw;
    // public System.Void set_Oid(System.Security.Cryptography.Oid value)
    // Offset: 0x1175EF8
    void set_Oid(System::Security::Cryptography::Oid* value);
    // public System.Byte[] get_RawData()
    // Offset: 0x1176040
    ::Array<uint8_t>* get_RawData();
    // public System.Void set_RawData(System.Byte[] value)
    // Offset: 0x1176048
    void set_RawData(::Array<uint8_t>* value);
    // public System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x117611C
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // System.String ToString(System.Boolean multiLine)
    // Offset: 0x11761EC
    ::Il2CppString* ToString(bool multiLine);
    // System.String Default(System.Boolean multiLine)
    // Offset: 0x1176EAC
    ::Il2CppString* Default(bool multiLine);
    // System.String BasicConstraintsExtension(System.Boolean multiLine)
    // Offset: 0x1176388
    ::Il2CppString* BasicConstraintsExtension(bool multiLine);
    // System.String EnhancedKeyUsageExtension(System.Boolean multiLine)
    // Offset: 0x117649C
    ::Il2CppString* EnhancedKeyUsageExtension(bool multiLine);
    // System.String KeyUsageExtension(System.Boolean multiLine)
    // Offset: 0x11765B0
    ::Il2CppString* KeyUsageExtension(bool multiLine);
    // System.String SubjectKeyIdentifierExtension(System.Boolean multiLine)
    // Offset: 0x11766C4
    ::Il2CppString* SubjectKeyIdentifierExtension(bool multiLine);
    // System.String SubjectAltName(System.Boolean multiLine)
    // Offset: 0x11767D8
    ::Il2CppString* SubjectAltName(bool multiLine);
    // System.String NetscapeCertType(System.Boolean multiLine)
    // Offset: 0x1176B54
    ::Il2CppString* NetscapeCertType(bool multiLine);
    // protected System.Void .ctor()
    // Offset: 0x1175EF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AsnEncodedData* New_ctor();
  }; // System.Security.Cryptography.AsnEncodedData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsnEncodedData*, "System.Security.Cryptography", "AsnEncodedData");
#pragma pack(pop)
