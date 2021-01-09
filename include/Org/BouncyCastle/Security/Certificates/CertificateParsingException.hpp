// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.Certificates.CertificateException
#include "Org/BouncyCastle/Security/Certificates/CertificateException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Size: 0x88
  // Autogenerated type: Org.BouncyCastle.Security.Certificates.CertificateParsingException
  // [] Offset: FFFFFFFF
  class CertificateParsingException : public Org::BouncyCastle::Security::Certificates::CertificateException {
    public:
    // Creating value type constructor for type: CertificateParsingException
    CertificateParsingException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10A1EBC
    // Implemented from: Org.BouncyCastle.Security.Certificates.CertificateException
    // Base method: System.Void CertificateException::.ctor()
    // Base method: System.Void GeneralSecurityException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateParsingException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CertificateParsingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateParsingException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x10A1EC4
    // Implemented from: Org.BouncyCastle.Security.Certificates.CertificateException
    // Base method: System.Void CertificateException::.ctor(System.String message)
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateParsingException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CertificateParsingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateParsingException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Security.Certificates.CertificateParsingException
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CertificateParsingException*, "Org.BouncyCastle.Security.Certificates", "CertificateParsingException");
#pragma pack(pop)
