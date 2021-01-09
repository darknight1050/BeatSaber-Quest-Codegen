// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Crl
  class X509Crl;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x2A
  // Autogenerated type: Mono.Security.X509.X509Store
  // [] Offset: FFFFFFFF
  class X509Store : public ::Il2CppObject {
    public:
    // private System.String _storePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* storePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Mono.Security.X509.X509CertificateCollection _certificates
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::X509::X509CertificateCollection* certificates;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509CertificateCollection*) == 0x8);
    // private System.Collections.ArrayList _crls
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* crls;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Boolean _crl
    // Size: 0x1
    // Offset: 0x28
    bool crl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _newFormat
    // Size: 0x1
    // Offset: 0x29
    bool newFormat;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: X509Store
    X509Store(::Il2CppString* storePath_ = {}, Mono::Security::X509::X509CertificateCollection* certificates_ = {}, System::Collections::ArrayList* crls_ = {}, bool crl_ = {}, bool newFormat_ = {}) noexcept : storePath{storePath_}, certificates{certificates_}, crls{crls_}, crl{crl_}, newFormat{newFormat_} {}
    // System.Void .ctor(System.String path, System.Boolean crl, System.Boolean newFormat)
    // Offset: 0x19C5D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Store* New_ctor(::Il2CppString* path, bool crl, bool newFormat) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509Store::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Store*, creationType>(path, crl, newFormat)));
    }
    // public Mono.Security.X509.X509CertificateCollection get_Certificates()
    // Offset: 0x19C5DBC
    Mono::Security::X509::X509CertificateCollection* get_Certificates();
    // public System.Collections.ArrayList get_Crls()
    // Offset: 0x19C5FD4
    System::Collections::ArrayList* get_Crls();
    // private System.Byte[] Load(System.String filename)
    // Offset: 0x19C624C
    ::Array<uint8_t>* Load(::Il2CppString* filename);
    // private Mono.Security.X509.X509Certificate LoadCertificate(System.String filename)
    // Offset: 0x19C63D4
    Mono::Security::X509::X509Certificate* LoadCertificate(::Il2CppString* filename);
    // private Mono.Security.X509.X509Crl LoadCrl(System.String filename)
    // Offset: 0x19C6444
    Mono::Security::X509::X509Crl* LoadCrl(::Il2CppString* filename);
    // private System.Boolean CheckStore(System.String path, System.Boolean throwException)
    // Offset: 0x19C64B4
    bool CheckStore(::Il2CppString* path, bool throwException);
    // private Mono.Security.X509.X509CertificateCollection BuildCertificatesCollection(System.String storeName)
    // Offset: 0x19C5E04
    Mono::Security::X509::X509CertificateCollection* BuildCertificatesCollection(::Il2CppString* storeName);
    // private System.Collections.ArrayList BuildCrlsCollection(System.String storeName)
    // Offset: 0x19C6084
    System::Collections::ArrayList* BuildCrlsCollection(::Il2CppString* storeName);
  }; // Mono.Security.X509.X509Store
  static check_size<sizeof(X509Store), 41 + sizeof(bool)> __Mono_Security_X509_X509StoreSizeCheck;
  static_assert(sizeof(X509Store) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Store*, "Mono.Security.X509", "X509Store");
#pragma pack(pop)
