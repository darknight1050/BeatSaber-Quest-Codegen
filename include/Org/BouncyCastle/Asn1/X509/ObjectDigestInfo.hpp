// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerEnumerated
  class DerEnumerated;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x30
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
  // [] Offset: FFFFFFFF
  class ObjectDigestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.DerEnumerated digestedObjectType
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerEnumerated*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerObjectIdentifier otherObjectTypeID
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier digestAlgorithm
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerBitString objectDigest
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerBitString* objectDigest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: ObjectDigestInfo
    ObjectDigestInfo(Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType_ = {}, Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm_ = {}, Org::BouncyCastle::Asn1::DerBitString* objectDigest_ = {}) noexcept : digestedObjectType{digestedObjectType_}, otherObjectTypeID{otherObjectTypeID_}, digestAlgorithm{digestAlgorithm_}, objectDigest{objectDigest_} {}
    // static public Org.BouncyCastle.Asn1.X509.ObjectDigestInfo GetInstance(System.Object obj)
    // Offset: 0x157D44C
    static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.X509.ObjectDigestInfo GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x157C3E0
    static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x157D5CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDigestInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDigestInfo*, creationType>(seq)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x157D838
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
  static check_size<sizeof(ObjectDigestInfo), 40 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_ObjectDigestInfoSizeCheck;
  static_assert(sizeof(ObjectDigestInfo) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
#pragma pack(pop)
