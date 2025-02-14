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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
  class AlgorithmIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier algorithm
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Encodable parameters
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Encodable* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*) == 0x8);
    // Creating value type constructor for type: AlgorithmIdentifier
    AlgorithmIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm_ = {}, Org::BouncyCastle::Asn1::Asn1Encodable* parameters_ = {}) noexcept : algorithm{algorithm_}, parameters{parameters_} {}
    // static public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x19E9FA4
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // static public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier GetInstance(System.Object obj)
    // Offset: 0x19E9FC0
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier algorithm, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    // Offset: 0x19EA200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlgorithmIdentifier* New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlgorithmIdentifier*, creationType>(algorithm, parameters)));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19EA064
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlgorithmIdentifier* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlgorithmIdentifier*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_Algorithm()
    // Offset: 0x19EA238
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Algorithm();
    // public Org.BouncyCastle.Asn1.Asn1Encodable get_Parameters()
    // Offset: 0x19EA240
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Parameters();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19EA248
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
  #pragma pack(pop)
  static check_size<sizeof(AlgorithmIdentifier), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*)> __Org_BouncyCastle_Asn1_X509_AlgorithmIdentifierSizeCheck;
  static_assert(sizeof(AlgorithmIdentifier) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier");
