// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: TbsCertificateList
  class TbsCertificateList;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.CertificateList
  class CertificateList : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.TbsCertificateList tbsCertList
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCertList;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgID
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString sig
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerBitString* sig;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: CertificateList
    CertificateList(Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCertList_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID_ = {}, Org::BouncyCastle::Asn1::DerBitString* sig_ = {}) noexcept : tbsCertList{tbsCertList_}, sigAlgID{sigAlgID_}, sig{sig_} {}
    // static public Org.BouncyCastle.Asn1.X509.CertificateList GetInstance(System.Object obj)
    // Offset: 0x19EC184
    static Org::BouncyCastle::Asn1::X509::CertificateList* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19EC228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateList* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::CertificateList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateList*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.TbsCertificateList get_TbsCertList()
    // Offset: 0x19EC4EC
    Org::BouncyCastle::Asn1::X509::TbsCertificateList* get_TbsCertList();
    // public System.Collections.IEnumerable GetRevokedCertificateEnumeration()
    // Offset: 0x19EC4F4
    System::Collections::IEnumerable* GetRevokedCertificateEnumeration();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_SignatureAlgorithm()
    // Offset: 0x19EC5A8
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();
    // public Org.BouncyCastle.Asn1.DerBitString get_Signature()
    // Offset: 0x19EC5B0
    Org::BouncyCastle::Asn1::DerBitString* get_Signature();
    // public System.Byte[] GetSignatureOctets()
    // Offset: 0x19EC5B8
    ::Array<uint8_t>* GetSignatureOctets();
    // public System.Int32 get_Version()
    // Offset: 0x19EC5D8
    int get_Version();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x19EC618
    Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_ThisUpdate()
    // Offset: 0x19EC634
    Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();
    // public Org.BouncyCastle.Asn1.X509.Time get_NextUpdate()
    // Offset: 0x19EC650
    Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19EC66C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.CertificateList
  #pragma pack(pop)
  static check_size<sizeof(CertificateList), 32 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_CertificateListSizeCheck;
  static_assert(sizeof(CertificateList) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CertificateList*, "Org.BouncyCastle.Asn1.X509", "CertificateList");
