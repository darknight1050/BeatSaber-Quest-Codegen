// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.TbsCertificateList
#include "Org/BouncyCastle/Asn1/X509/TbsCertificateList.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration
  // [] Offset: FFFFFFFF
  class TbsCertificateList::RevokedCertificatesEnumeration : public ::Il2CppObject/*, public System::Collections::IEnumerable*/ {
    public:
    // Nested type: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator
    class RevokedCertificatesEnumerator;
    // private readonly System.Collections.IEnumerable en
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerable* en;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // Creating value type constructor for type: RevokedCertificatesEnumeration
    RevokedCertificatesEnumeration(System::Collections::IEnumerable* en_ = {}) noexcept : en{en_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerable*
    constexpr operator System::Collections::IEnumerable*() const noexcept {
      return en;
    }
    // System.Void .ctor(System.Collections.IEnumerable en)
    // Offset: 0x157E7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateList::RevokedCertificatesEnumeration* New_ctor(System::Collections::IEnumerable* en) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateList::RevokedCertificatesEnumeration*, creationType>(en)));
    }
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x157E7E4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration
  static check_size<sizeof(TbsCertificateList::RevokedCertificatesEnumeration), 16 + sizeof(System::Collections::IEnumerable*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateList_RevokedCertificatesEnumerationSizeCheck;
  static_assert(sizeof(TbsCertificateList::RevokedCertificatesEnumeration) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration");
#pragma pack(pop)
