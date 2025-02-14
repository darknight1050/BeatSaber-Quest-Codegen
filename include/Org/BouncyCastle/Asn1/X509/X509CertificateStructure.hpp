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
  // Forward declaring type: TbsCertificateStructure
  class TbsCertificateStructure;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509CertificateStructure
  class X509CertificateStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.TbsCertificateStructure tbsCert
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*) == 0x8);
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
    // Creating value type constructor for type: X509CertificateStructure
    X509CertificateStructure(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID_ = {}, Org::BouncyCastle::Asn1::DerBitString* sig_ = {}) noexcept : tbsCert{tbsCert_}, sigAlgID{sigAlgID_}, sig{sig_} {}
    // static public Org.BouncyCastle.Asn1.X509.X509CertificateStructure GetInstance(System.Object obj)
    // Offset: 0x19F25C0
    static Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19F2664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::X509CertificateStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateStructure*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.TbsCertificateStructure get_TbsCertificate()
    // Offset: 0x19F27A8
    Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* get_TbsCertificate();
    // public System.Int32 get_Version()
    // Offset: 0x19F27B0
    int get_Version();
    // public Org.BouncyCastle.Asn1.DerInteger get_SerialNumber()
    // Offset: 0x19F27C8
    Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x19F27E4
    Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_StartDate()
    // Offset: 0x19F2800
    Org::BouncyCastle::Asn1::X509::Time* get_StartDate();
    // public Org.BouncyCastle.Asn1.X509.Time get_EndDate()
    // Offset: 0x19F281C
    Org::BouncyCastle::Asn1::X509::Time* get_EndDate();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Subject()
    // Offset: 0x19F2838
    Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();
    // public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo get_SubjectPublicKeyInfo()
    // Offset: 0x19F2854
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_SignatureAlgorithm()
    // Offset: 0x19F2870
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();
    // public Org.BouncyCastle.Asn1.DerBitString get_Signature()
    // Offset: 0x19F2878
    Org::BouncyCastle::Asn1::DerBitString* get_Signature();
    // public System.Byte[] GetSignatureOctets()
    // Offset: 0x19F2880
    ::Array<uint8_t>* GetSignatureOctets();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19F28A0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.X509CertificateStructure
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateStructure), 32 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_X509CertificateStructureSizeCheck;
  static_assert(sizeof(X509CertificateStructure) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, "Org.BouncyCastle.Asn1.X509", "X509CertificateStructure");
