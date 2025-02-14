// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Certificate
  class X509Certificate : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private Mono.Security.ASN1 decoder
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::ASN1* decoder;
    // Field size check
    static_assert(sizeof(Mono::Security::ASN1*) == 0x8);
    // private System.Byte[] m_encodedcert
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* m_encodedcert;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.DateTime m_from
    // Size: 0x8
    // Offset: 0x20
    System::DateTime m_from;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.DateTime m_until
    // Size: 0x8
    // Offset: 0x28
    System::DateTime m_until;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private Mono.Security.ASN1 issuer
    // Size: 0x8
    // Offset: 0x30
    Mono::Security::ASN1* issuer;
    // Field size check
    static_assert(sizeof(Mono::Security::ASN1*) == 0x8);
    // private System.String m_issuername
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_issuername;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_keyalgo
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* m_keyalgo;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] m_keyalgoparams
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* m_keyalgoparams;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private Mono.Security.ASN1 subject
    // Size: 0x8
    // Offset: 0x50
    Mono::Security::ASN1* subject;
    // Field size check
    static_assert(sizeof(Mono::Security::ASN1*) == 0x8);
    // private System.String m_subject
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* m_subject;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] m_publickey
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* m_publickey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] signature
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* signature;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String m_signaturealgo
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* m_signaturealgo;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] m_signaturealgoparams
    // Size: 0x8
    // Offset: 0x78
    ::Array<uint8_t>* m_signaturealgoparams;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] certhash
    // Size: 0x8
    // Offset: 0x80
    ::Array<uint8_t>* certhash;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Security.Cryptography.RSA _rsa
    // Size: 0x8
    // Offset: 0x88
    System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RSA*) == 0x8);
    // private System.Security.Cryptography.DSA _dsa
    // Size: 0x8
    // Offset: 0x90
    System::Security::Cryptography::DSA* dsa;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DSA*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x98
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: serialnumber
    char __padding17[0x4] = {};
    // private System.Byte[] serialnumber
    // Size: 0x8
    // Offset: 0xA0
    ::Array<uint8_t>* serialnumber;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] issuerUniqueID
    // Size: 0x8
    // Offset: 0xA8
    ::Array<uint8_t>* issuerUniqueID;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] subjectUniqueID
    // Size: 0x8
    // Offset: 0xB0
    ::Array<uint8_t>* subjectUniqueID;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private Mono.Security.X509.X509ExtensionCollection extensions
    // Size: 0x8
    // Offset: 0xB8
    Mono::Security::X509::X509ExtensionCollection* extensions;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509ExtensionCollection*) == 0x8);
    // Creating value type constructor for type: X509Certificate
    X509Certificate(Mono::Security::ASN1* decoder_ = {}, ::Array<uint8_t>* m_encodedcert_ = {}, System::DateTime m_from_ = {}, System::DateTime m_until_ = {}, Mono::Security::ASN1* issuer_ = {}, ::Il2CppString* m_issuername_ = {}, ::Il2CppString* m_keyalgo_ = {}, ::Array<uint8_t>* m_keyalgoparams_ = {}, Mono::Security::ASN1* subject_ = {}, ::Il2CppString* m_subject_ = {}, ::Array<uint8_t>* m_publickey_ = {}, ::Array<uint8_t>* signature_ = {}, ::Il2CppString* m_signaturealgo_ = {}, ::Array<uint8_t>* m_signaturealgoparams_ = {}, ::Array<uint8_t>* certhash_ = {}, System::Security::Cryptography::RSA* rsa_ = {}, System::Security::Cryptography::DSA* dsa_ = {}, int version_ = {}, ::Array<uint8_t>* serialnumber_ = {}, ::Array<uint8_t>* issuerUniqueID_ = {}, ::Array<uint8_t>* subjectUniqueID_ = {}, Mono::Security::X509::X509ExtensionCollection* extensions_ = {}) noexcept : decoder{decoder_}, m_encodedcert{m_encodedcert_}, m_from{m_from_}, m_until{m_until_}, issuer{issuer_}, m_issuername{m_issuername_}, m_keyalgo{m_keyalgo_}, m_keyalgoparams{m_keyalgoparams_}, subject{subject_}, m_subject{m_subject_}, m_publickey{m_publickey_}, signature{signature_}, m_signaturealgo{m_signaturealgo_}, m_signaturealgoparams{m_signaturealgoparams_}, certhash{certhash_}, rsa{rsa_}, dsa{dsa_}, version{version_}, serialnumber{serialnumber_}, issuerUniqueID{issuerUniqueID_}, subjectUniqueID{subjectUniqueID_}, extensions{extensions_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private System.String encoding_error
    static ::Il2CppString* _get_encoding_error();
    // Set static field: static private System.String encoding_error
    static void _set_encoding_error(::Il2CppString* value);
    // private System.Void Parse(System.Byte[] data)
    // Offset: 0x238C150
    void Parse(::Array<uint8_t>* data);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x238CB88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(data)));
    }
    // private System.Byte[] GetUnsignedBigInteger(System.Byte[] integer)
    // Offset: 0x238CE50
    ::Array<uint8_t>* GetUnsignedBigInteger(::Array<uint8_t>* integer);
    // public System.Security.Cryptography.DSA get_DSA()
    // Offset: 0x238CEFC
    System::Security::Cryptography::DSA* get_DSA();
    // public System.Void set_DSA(System.Security.Cryptography.DSA value)
    // Offset: 0x238D1A8
    void set_DSA(System::Security::Cryptography::DSA* value);
    // public Mono.Security.X509.X509ExtensionCollection get_Extensions()
    // Offset: 0x238D1B8
    Mono::Security::X509::X509ExtensionCollection* get_Extensions();
    // public System.Byte[] get_Hash()
    // Offset: 0x238D1C0
    ::Array<uint8_t>* get_Hash();
    // public System.String get_IssuerName()
    // Offset: 0x238D3C8
    ::Il2CppString* get_IssuerName();
    // public System.String get_KeyAlgorithm()
    // Offset: 0x238D3D0
    ::Il2CppString* get_KeyAlgorithm();
    // public System.Byte[] get_KeyAlgorithmParameters()
    // Offset: 0x238D3D8
    ::Array<uint8_t>* get_KeyAlgorithmParameters();
    // public System.Void set_KeyAlgorithmParameters(System.Byte[] value)
    // Offset: 0x238D454
    void set_KeyAlgorithmParameters(::Array<uint8_t>* value);
    // public System.Byte[] get_PublicKey()
    // Offset: 0x238D45C
    ::Array<uint8_t>* get_PublicKey();
    // public System.Security.Cryptography.RSA get_RSA()
    // Offset: 0x238D4D8
    System::Security::Cryptography::RSA* get_RSA();
    // public System.Void set_RSA(System.Security.Cryptography.RSA value)
    // Offset: 0x238D684
    void set_RSA(System::Security::Cryptography::RSA* value);
    // public System.Byte[] get_RawData()
    // Offset: 0x238D694
    ::Array<uint8_t>* get_RawData();
    // public System.Byte[] get_SerialNumber()
    // Offset: 0x238D710
    ::Array<uint8_t>* get_SerialNumber();
    // public System.Byte[] get_Signature()
    // Offset: 0x238D78C
    ::Array<uint8_t>* get_Signature();
    // public System.String get_SignatureAlgorithm()
    // Offset: 0x238DB50
    ::Il2CppString* get_SignatureAlgorithm();
    // public System.String get_SubjectName()
    // Offset: 0x238DB58
    ::Il2CppString* get_SubjectName();
    // public System.DateTime get_ValidFrom()
    // Offset: 0x238DB60
    System::DateTime get_ValidFrom();
    // public System.DateTime get_ValidUntil()
    // Offset: 0x238DB68
    System::DateTime get_ValidUntil();
    // public System.Int32 get_Version()
    // Offset: 0x238DB70
    int get_Version();
    // System.Boolean VerifySignature(System.Security.Cryptography.DSA dsa)
    // Offset: 0x238DB78
    bool VerifySignature(System::Security::Cryptography::DSA* dsa);
    // System.Boolean VerifySignature(System.Security.Cryptography.RSA rsa)
    // Offset: 0x238DC3C
    bool VerifySignature(System::Security::Cryptography::RSA* rsa);
    // public System.Boolean VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm aa)
    // Offset: 0x238DD5C
    bool VerifySignature(System::Security::Cryptography::AsymmetricAlgorithm* aa);
    // public Mono.Security.ASN1 GetIssuerName()
    // Offset: 0x238DED8
    Mono::Security::ASN1* GetIssuerName();
    // public Mono.Security.ASN1 GetSubjectName()
    // Offset: 0x238DEE0
    Mono::Security::ASN1* GetSubjectName();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x238DEE8
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Byte[] PEM(System.String type, System.Byte[] data)
    // Offset: 0x238CD24
    static ::Array<uint8_t>* PEM(::Il2CppString* type, ::Array<uint8_t>* data);
    // static private System.Void .cctor()
    // Offset: 0x238DF54
    static void _cctor();
  }; // Mono.Security.X509.X509Certificate
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate), 184 + sizeof(Mono::Security::X509::X509ExtensionCollection*)> __Mono_Security_X509_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Certificate*, "Mono.Security.X509", "X509Certificate");
