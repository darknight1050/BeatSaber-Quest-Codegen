// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration
#include "Org/BouncyCastle/Asn1/X509/TbsCertificateList_RevokedCertificatesEnumeration.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator
  class TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private readonly System.Collections.IEnumerator e
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerator* e;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: RevokedCertificatesEnumerator
    RevokedCertificatesEnumerator(System::Collections::IEnumerator* e_ = {}) noexcept : e{e_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return e;
    }
    // System.Void .ctor(System.Collections.IEnumerator e)
    // Offset: 0x19F1510
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator* New_ctor(System::Collections::IEnumerator* e) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*, creationType>(e)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x19F153C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x19F15EC
    void Reset();
    // public System.Object get_Current()
    // Offset: 0x19F16A0
    ::Il2CppObject* get_Current();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator
  #pragma pack(pop)
  static check_size<sizeof(TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator), 16 + sizeof(System::Collections::IEnumerator*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateList_RevokedCertificatesEnumeration_RevokedCertificatesEnumeratorSizeCheck;
  static_assert(sizeof(TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator");
