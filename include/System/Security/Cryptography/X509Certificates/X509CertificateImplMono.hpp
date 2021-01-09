// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
#include "System/Security/Cryptography/X509Certificates/X509CertificateImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x20
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateImplMono
  // [] Offset: FFFFFFFF
  class X509CertificateImplMono : public System::Security::Cryptography::X509Certificates::X509CertificateImpl {
    public:
    // private Mono.Security.X509.X509Certificate x509
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::X509::X509Certificate* x509;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509Certificate*) == 0x8);
    // Creating value type constructor for type: X509CertificateImplMono
    X509CertificateImplMono(Mono::Security::X509::X509Certificate* x509_ = {}) noexcept : x509{x509_} {}
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // public System.Void .ctor(Mono.Security.X509.X509Certificate x509)
    // Offset: 0x1280394
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImplMono* New_ctor(Mono::Security::X509::X509Certificate* x509) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImplMono*, creationType>(x509)));
    }
    // public override System.Boolean get_IsValid()
    // Offset: 0x12803C8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::get_IsValid()
    bool get_IsValid();
    // public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
    // Offset: 0x12803D8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509CertificateImpl X509CertificateImpl::Clone()
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
    // public override System.String GetIssuerName(System.Boolean legacyV1Mode)
    // Offset: 0x1280454
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetIssuerName(System.Boolean legacyV1Mode)
    ::Il2CppString* GetIssuerName(bool legacyV1Mode);
    // public override System.String GetSubjectName(System.Boolean legacyV1Mode)
    // Offset: 0x1280514
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetSubjectName(System.Boolean legacyV1Mode)
    ::Il2CppString* GetSubjectName(bool legacyV1Mode);
    // public override System.Byte[] GetRawCertData()
    // Offset: 0x12805D4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetRawCertData()
    ::Array<uint8_t>* GetRawCertData();
    // protected override System.Byte[] GetCertHash(System.Boolean lazy)
    // Offset: 0x1280608
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetCertHash(System.Boolean lazy)
    ::Array<uint8_t>* GetCertHash(bool lazy);
    // public override System.DateTime GetValidFrom()
    // Offset: 0x128065C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidFrom()
    System::DateTime GetValidFrom();
    // public override System.DateTime GetValidUntil()
    // Offset: 0x1280690
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidUntil()
    System::DateTime GetValidUntil();
    // public override System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    // Offset: 0x12806C4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    bool Equals(System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result);
    // public override System.Byte[] GetSerialNumber()
    // Offset: 0x12806D0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetSerialNumber()
    ::Array<uint8_t>* GetSerialNumber();
    // public override System.String ToString(System.Boolean full)
    // Offset: 0x1280704
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::ToString(System.Boolean full)
    ::Il2CppString* ToString(bool full);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x12808F8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Void X509CertificateImpl::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.X509Certificates.X509CertificateImplMono
  static check_size<sizeof(X509CertificateImplMono), 24 + sizeof(Mono::Security::X509::X509Certificate*)> __System_Security_Cryptography_X509Certificates_X509CertificateImplMonoSizeCheck;
  static_assert(sizeof(X509CertificateImplMono) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*, "System.Security.Cryptography.X509Certificates", "X509CertificateImplMono");
#pragma pack(pop)
