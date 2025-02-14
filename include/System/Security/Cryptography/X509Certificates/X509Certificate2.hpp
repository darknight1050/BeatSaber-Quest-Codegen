// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: Oid
  class Oid;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2
  class X509Certificate2 : public System::Security::Cryptography::X509Certificates::X509Certificate {
    public:
    // private System.String friendlyName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* friendlyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: X509Certificate2
    X509Certificate2(::Il2CppString* friendlyName_ = {}) noexcept : friendlyName{friendlyName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return friendlyName;
    }
    // Get static field: static private System.Byte[] signedData
    static ::Array<uint8_t>* _get_signedData();
    // Set static field: static private System.Byte[] signedData
    static void _set_signedData(::Array<uint8_t>* value);
    // System.Security.Cryptography.X509Certificates.X509Certificate2Impl get_Impl()
    // Offset: 0x182E140
    System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl();
    // public System.Void .ctor(System.String fileName)
    // Offset: 0x182E2D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(::Il2CppString* fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(fileName)));
    }
    // public System.Security.Cryptography.X509Certificates.X509ExtensionCollection get_Extensions()
    // Offset: 0x182E558
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0x182E580
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public System.DateTime get_NotAfter()
    // Offset: 0x182E5A8
    System::DateTime get_NotAfter();
    // public System.DateTime get_NotBefore()
    // Offset: 0x182E5EC
    System::DateTime get_NotBefore();
    // public System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0x182E630
    System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public System.Void set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    // Offset: 0x182E658
    void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value);
    // public System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0x182E690
    System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public System.String get_SerialNumber()
    // Offset: 0x182E6B8
    ::Il2CppString* get_SerialNumber();
    // public System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0x182E6C4
    System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0x182E6EC
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public System.String get_Thumbprint()
    // Offset: 0x182E714
    ::Il2CppString* get_Thumbprint();
    // public System.Int32 get_Version()
    // Offset: 0x182E720
    int get_Version();
    // public System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0x182E748
    ::Il2CppString* GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // static private System.Void AppendBuffer(System.Text.StringBuilder sb, System.Byte[] buffer)
    // Offset: 0x182EDDC
    static void AppendBuffer(System::Text::StringBuilder* sb, ::Array<uint8_t>* buffer);
    // public System.Boolean Verify()
    // Offset: 0x182EED4
    bool Verify();
    // Mono.Security.X509.X509Certificate get_MonoCertificate()
    // Offset: 0x182EF0C
    Mono::Security::X509::X509Certificate* get_MonoCertificate();
    // static private System.Void .cctor()
    // Offset: 0x182EFF0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x182E1E4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>()));
    }
    // public System.Void .ctor(System.Byte[] rawData)
    // Offset: 0x182E244
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Byte[] rawData)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(::Array<uint8_t>* rawData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(rawData)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0x182E364
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(certificate)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x182E4D0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2*, creationType>(info, context)));
    }
    // public override System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x182E788
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x182E860
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Reset()
    // Offset: 0x182E8B4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.Void X509Certificate::Reset()
    void Reset();
    // public override System.String ToString()
    // Offset: 0x182E914
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.String X509Certificate::ToString()
    ::Il2CppString* ToString();
    // public override System.String ToString(System.Boolean verbose)
    // Offset: 0x182E988
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate
    // Base method: System.String X509Certificate::ToString(System.Boolean verbose)
    ::Il2CppString* ToString(bool verbose);
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate2), 48 + sizeof(::Il2CppString*)> __System_Security_Cryptography_X509Certificates_X509Certificate2SizeCheck;
  static_assert(sizeof(X509Certificate2) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2*, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
