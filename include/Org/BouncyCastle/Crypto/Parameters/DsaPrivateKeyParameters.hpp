// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DsaKeyParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DsaParameters
  class DsaParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters
  // [] Offset: FFFFFFFF
  class DsaPrivateKeyParameters : public Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* x;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: DsaPrivateKeyParameters
    DsaPrivateKeyParameters(Org::BouncyCastle::Math::BigInteger* x_ = {}) noexcept : x{x_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Crypto.Parameters.DsaParameters parameters)
    // Offset: 0x104525C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaPrivateKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaPrivateKeyParameters*, creationType>(x, parameters)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_X()
    // Offset: 0x1045318
    Org::BouncyCastle::Math::BigInteger* get_X();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters other)
    // Offset: 0x10453D0
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1045320
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
    // Base method: System.Boolean DsaKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x104542C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
    // Base method: System.Int32 DsaKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters
  static check_size<sizeof(DsaPrivateKeyParameters), 32 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_DsaPrivateKeyParametersSizeCheck;
  static_assert(sizeof(DsaPrivateKeyParameters) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaPrivateKeyParameters");
#pragma pack(pop)
