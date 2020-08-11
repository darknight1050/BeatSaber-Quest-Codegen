// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X509SubjectKeyIdentifierHashAlgorithm
  struct X509SubjectKeyIdentifierHashAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
  class X509SubjectKeyIdentifierExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.14";
    // Get static field: static System.String oid
    static ::CsString* _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::CsString* value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Subject Key Identifier";
    // Get static field: static System.String friendlyName
    static ::CsString* _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::CsString* value);
    // private System.Byte[] _subjectKeyIdentifier
    // Offset: 0x28
    ::Array<uint8_t>* subjectKeyIdentifier;
    // private System.String _ski
    // Offset: 0x30
    ::CsString* ski;
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Offset: 0x38
    System::Security::Cryptography::AsnDecodeStatus status;
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedSubjectKeyIdentifier, System.Boolean critical)
    // Offset: 0x120252C
    static X509SubjectKeyIdentifierExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical);
    // public System.Void .ctor(System.Byte[] subjectKeyIdentifier, System.Boolean critical)
    // Offset: 0x1205D28
    static X509SubjectKeyIdentifierExtension* New_ctor(::Array<uint8_t>* subjectKeyIdentifier, bool critical);
    // public System.Void .ctor(System.String subjectKeyIdentifier, System.Boolean critical)
    // Offset: 0x1205F24
    static X509SubjectKeyIdentifierExtension* New_ctor(::CsString* subjectKeyIdentifier, bool critical);
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.PublicKey key, System.Boolean critical)
    // Offset: 0x1206170
    static X509SubjectKeyIdentifierExtension* New_ctor(System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical);
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.PublicKey key, System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm algorithm, System.Boolean critical)
    // Offset: 0x120617C
    static X509SubjectKeyIdentifierExtension* New_ctor(System::Security::Cryptography::X509Certificates::PublicKey* key, System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical);
    // public System.String get_SubjectKeyIdentifier()
    // Offset: 0x12064F8
    ::CsString* get_SubjectKeyIdentifier();
    // static System.Byte FromHexChar(System.Char c)
    // Offset: 0x120674C
    static uint8_t FromHexChar(::Il2CppChar c);
    // static System.Byte FromHexChars(System.Char c1, System.Char c2)
    // Offset: 0x1206794
    static uint8_t FromHexChars(::Il2CppChar c1, ::Il2CppChar c2);
    // static System.Byte[] FromHex(System.String hex)
    // Offset: 0x1206068
    static ::Array<uint8_t>* FromHex(::CsString* hex);
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x1205BA4
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // System.Byte[] Encode()
    // Offset: 0x1205EA8
    ::Array<uint8_t>* Encode();
    // public System.Void .ctor()
    // Offset: 0x1205B1C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509SubjectKeyIdentifierExtension* New_ctor();
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x12065B0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x1206830
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::CsString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
#pragma pack(pop)
