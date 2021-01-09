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
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.DHPublicKey
  // [] Offset: FFFFFFFF
  class DHPublicKey : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger y
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* y;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Creating value type constructor for type: DHPublicKey
    DHPublicKey(Org::BouncyCastle::Asn1::DerInteger* y_ = {}) noexcept : y{y_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::DerInteger*
    constexpr operator Org::BouncyCastle::Asn1::DerInteger*() const noexcept {
      return y;
    }
    // static public Org.BouncyCastle.Asn1.X9.DHPublicKey GetInstance(System.Object obj)
    // Offset: 0x1584F9C
    static Org::BouncyCastle::Asn1::X9::DHPublicKey* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerInteger y)
    // Offset: 0x158511C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHPublicKey* New_ctor(Org::BouncyCastle::Asn1::DerInteger* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::DHPublicKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHPublicKey*, creationType>(y)));
    }
    // public Org.BouncyCastle.Asn1.DerInteger get_Y()
    // Offset: 0x15851C0
    Org::BouncyCastle::Asn1::DerInteger* get_Y();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x15851C8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.DHPublicKey
  static check_size<sizeof(DHPublicKey), 16 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_X9_DHPublicKeySizeCheck;
  static_assert(sizeof(DHPublicKey) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::DHPublicKey*, "Org.BouncyCastle.Asn1.X9", "DHPublicKey");
#pragma pack(pop)
