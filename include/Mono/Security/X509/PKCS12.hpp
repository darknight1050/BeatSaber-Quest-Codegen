// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.PKCS12
  class PKCS12 : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // Nested type: Mono::Security::X509::PKCS12::DeriveBytes
    class DeriveBytes;
    // private System.Byte[] _password
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* password;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Collections.ArrayList _keyBags
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* keyBags;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList _secretBags
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* secretBags;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private Mono.Security.X509.X509CertificateCollection _certs
    // Size: 0x8
    // Offset: 0x28
    Mono::Security::X509::X509CertificateCollection* certs;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509CertificateCollection*) == 0x8);
    // private System.Boolean _keyBagsChanged
    // Size: 0x1
    // Offset: 0x30
    bool keyBagsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _secretBagsChanged
    // Size: 0x1
    // Offset: 0x31
    bool secretBagsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _certsChanged
    // Size: 0x1
    // Offset: 0x32
    bool certsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: certsChanged and: iterations
    char __padding6[0x1] = {};
    // private System.Int32 _iterations
    // Size: 0x4
    // Offset: 0x34
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.ArrayList _safeBags
    // Size: 0x8
    // Offset: 0x38
    System::Collections::ArrayList* safeBags;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    // Creating value type constructor for type: PKCS12
    PKCS12(::Array<uint8_t>* password_ = {}, System::Collections::ArrayList* keyBags_ = {}, System::Collections::ArrayList* secretBags_ = {}, Mono::Security::X509::X509CertificateCollection* certs_ = {}, bool keyBagsChanged_ = {}, bool secretBagsChanged_ = {}, bool certsChanged_ = {}, int iterations_ = {}, System::Collections::ArrayList* safeBags_ = {}, System::Security::Cryptography::RandomNumberGenerator* rng_ = {}) noexcept : password{password_}, keyBags{keyBags_}, secretBags{secretBags_}, certs{certs_}, keyBagsChanged{keyBagsChanged_}, secretBagsChanged{secretBagsChanged_}, certsChanged{certsChanged_}, iterations{iterations_}, safeBags{safeBags_}, rng{rng_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private System.Int32 password_max_length
    static int _get_password_max_length();
    // Set static field: static private System.Int32 password_max_length
    static void _set_password_max_length(int value);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1D61EEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::PKCS12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12*, creationType>(data)));
    }
    // public System.Void .ctor(System.Byte[] data, System.String password)
    // Offset: 0x1D62710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12* New_ctor(::Array<uint8_t>* data, ::Il2CppString* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::PKCS12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12*, creationType>(data, password)));
    }
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x1D62104
    void Decode(::Array<uint8_t>* data);
    // public System.Void set_Password(System.String value)
    // Offset: 0x1D61F24
    void set_Password(::Il2CppString* value);
    // public System.Int32 get_IterationCount()
    // Offset: 0x1D63074
    int get_IterationCount();
    // public System.Void set_IterationCount(System.Int32 value)
    // Offset: 0x1D6307C
    void set_IterationCount(int value);
    // public System.Collections.ArrayList get_Keys()
    // Offset: 0x1D63084
    System::Collections::ArrayList* get_Keys();
    // public Mono.Security.X509.X509CertificateCollection get_Certificates()
    // Offset: 0x1D63854
    Mono::Security::X509::X509CertificateCollection* get_Certificates();
    // System.Security.Cryptography.RandomNumberGenerator get_RNG()
    // Offset: 0x1D63BD8
    System::Security::Cryptography::RandomNumberGenerator* get_RNG();
    // private System.Boolean Compare(System.Byte[] expected, System.Byte[] actual)
    // Offset: 0x1D628A8
    bool Compare(::Array<uint8_t>* expected, ::Array<uint8_t>* actual);
    // private System.Security.Cryptography.SymmetricAlgorithm GetSymmetricAlgorithm(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x1D63C04
    System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::Il2CppString* algorithmOid, ::Array<uint8_t>* salt, int iterationCount);
    // public System.Byte[] Decrypt(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount, System.Byte[] encryptedData)
    // Offset: 0x1D636CC
    ::Array<uint8_t>* Decrypt(::Il2CppString* algorithmOid, ::Array<uint8_t>* salt, int iterationCount, ::Array<uint8_t>* encryptedData);
    // public System.Byte[] Decrypt(Mono.Security.PKCS7/EncryptedData ed)
    // Offset: 0x1D62F58
    ::Array<uint8_t>* Decrypt(Mono::Security::PKCS7::EncryptedData* ed);
    // public System.Byte[] Encrypt(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount, System.Byte[] data)
    // Offset: 0x1D640B8
    ::Array<uint8_t>* Encrypt(::Il2CppString* algorithmOid, ::Array<uint8_t>* salt, int iterationCount, ::Array<uint8_t>* data);
    // private System.Security.Cryptography.DSAParameters GetExistingParameters(out System.Boolean found)
    // Offset: 0x1D64294
    System::Security::Cryptography::DSAParameters GetExistingParameters(bool& found);
    // private System.Void AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo pki)
    // Offset: 0x1D644C8
    void AddPrivateKey(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo* pki);
    // private System.Void ReadSafeBag(Mono.Security.ASN1 safeBag)
    // Offset: 0x1D62924
    void ReadSafeBag(Mono::Security::ASN1* safeBag);
    // private Mono.Security.ASN1 CertificateSafeBag(Mono.Security.X509.X509Certificate x509, System.Collections.IDictionary attributes)
    // Offset: 0x1D6463C
    Mono::Security::ASN1* CertificateSafeBag(Mono::Security::X509::X509Certificate* x509, System::Collections::IDictionary* attributes);
    // private System.Byte[] MAC(System.Byte[] password, System.Byte[] salt, System.Int32 iterations, System.Byte[] data)
    // Offset: 0x1D62754
    ::Array<uint8_t>* MAC(::Array<uint8_t>* password, ::Array<uint8_t>* salt, int iterations, ::Array<uint8_t>* data);
    // public System.Byte[] GetBytes()
    // Offset: 0x1D65164
    ::Array<uint8_t>* GetBytes();
    // private Mono.Security.PKCS7/ContentInfo EncryptedContentInfo(Mono.Security.ASN1 safeBags, System.String algorithmOid)
    // Offset: 0x1D67010
    Mono::Security::PKCS7::ContentInfo* EncryptedContentInfo(Mono::Security::ASN1* safeBags, ::Il2CppString* algorithmOid);
    // public System.Void AddCertificate(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1D67008
    void AddCertificate(Mono::Security::X509::X509Certificate* cert);
    // public System.Void AddCertificate(Mono.Security.X509.X509Certificate cert, System.Collections.IDictionary attributes)
    // Offset: 0x1D672F0
    void AddCertificate(Mono::Security::X509::X509Certificate* cert, System::Collections::IDictionary* attributes);
    // public System.Void RemoveCertificate(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1D67000
    void RemoveCertificate(Mono::Security::X509::X509Certificate* cert);
    // public System.Void RemoveCertificate(Mono.Security.X509.X509Certificate cert, System.Collections.IDictionary attrs)
    // Offset: 0x1D67524
    void RemoveCertificate(Mono::Security::X509::X509Certificate* cert, System::Collections::IDictionary* attrs);
    // public System.Object Clone()
    // Offset: 0x1D679F4
    ::Il2CppObject* Clone();
    // static public System.Int32 get_MaximumPasswordLength()
    // Offset: 0x1D67ACC
    static int get_MaximumPasswordLength();
    // static private System.Void .cctor()
    // Offset: 0x1D67B34
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1D61E18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::PKCS12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1D62FF4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Security.X509.PKCS12
  #pragma pack(pop)
  static check_size<sizeof(PKCS12), 64 + sizeof(System::Security::Cryptography::RandomNumberGenerator*)> __Mono_Security_X509_PKCS12SizeCheck;
  static_assert(sizeof(PKCS12) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::PKCS12*, "Mono.Security.X509", "PKCS12");
