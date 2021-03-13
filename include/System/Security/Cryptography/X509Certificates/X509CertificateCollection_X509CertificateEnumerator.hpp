// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
  // [] Offset: FFFFFFFF
  class X509CertificateCollection::X509CertificateEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.IEnumerator enumerator
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: X509CertificateEnumerator
    X509CertificateEnumerator(System::Collections::IEnumerator* enumerator_ = {}) noexcept : enumerator{enumerator_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection mappings)
    // Offset: 0x16AC24C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateCollection::X509CertificateEnumerator* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection* mappings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateCollection::X509CertificateEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateCollection::X509CertificateEnumerator*, creationType>(mappings)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate get_Current()
    // Offset: 0x16AC340
    System::Security::Cryptography::X509Certificates::X509Certificate* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x16AC434
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x16AC4E8
    bool System_Collections_IEnumerator_MoveNext_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x16AC598
    void System_Collections_IEnumerator_Reset_NEW();
    // public System.Boolean MoveNext()
    // Offset: 0x16AC64C
    bool MoveNext();
  }; // System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateCollection::X509CertificateEnumerator), 16 + sizeof(System::Collections::IEnumerator*)> __System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumeratorSizeCheck;
  static_assert(sizeof(X509CertificateCollection::X509CertificateEnumerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateCollection::X509CertificateEnumerator*, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection/X509CertificateEnumerator");
