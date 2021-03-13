// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDerivationParameters
#include "Org/BouncyCastle/Crypto/IDerivationParameters.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
  // [] Offset: FFFFFFFF
  class Iso18033KdfParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDerivationParameters*/ {
    public:
    // private System.Byte[] seed
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* seed;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Iso18033KdfParameters
    Iso18033KdfParameters(::Array<uint8_t>* seed_ = {}) noexcept : seed{seed_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDerivationParameters
    operator Org::BouncyCastle::Crypto::IDerivationParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDerivationParameters*>(this);
    }
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return seed;
    }
    // public System.Byte[] GetSeed()
    // Offset: 0x1163460
    ::Array<uint8_t>* GetSeed();
  }; // Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
  #pragma pack(pop)
  static check_size<sizeof(Iso18033KdfParameters), 16 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_Iso18033KdfParametersSizeCheck;
  static_assert(sizeof(Iso18033KdfParameters) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "Iso18033KdfParameters");
