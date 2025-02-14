// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Helper2
#include "System/Security/Cryptography/X509Certificates/X509Helper2.hpp"
// Including type: System.Security.Cryptography.X509Certificates.INativeCertificateHelper
#include "System/Security/Cryptography/X509Certificates/INativeCertificateHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
  class X509Helper2::MyNativeHelper : public ::Il2CppObject/*, public System::Security::Cryptography::X509Certificates::INativeCertificateHelper*/ {
    public:
    // Creating value type constructor for type: MyNativeHelper
    MyNativeHelper() noexcept {}
    // Creating interface conversion operator: operator System::Security::Cryptography::X509Certificates::INativeCertificateHelper
    operator System::Security::Cryptography::X509Certificates::INativeCertificateHelper() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::X509Certificates::INativeCertificateHelper*>(this);
    }
    // public System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x183A488
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(System::Security::Cryptography::X509Certificates::X509Certificate* cert);
    // public System.Void .ctor()
    // Offset: 0x183A3F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Helper2::MyNativeHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Helper2::MyNativeHelper*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper*, "System.Security.Cryptography.X509Certificates", "X509Helper2/MyNativeHelper");
