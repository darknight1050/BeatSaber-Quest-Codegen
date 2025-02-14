// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Prng.IRandomGenerator
#include "Org/BouncyCastle/Crypto/Prng/IRandomGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Prng
namespace Org::BouncyCastle::Crypto::Prng {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator
  class CryptoApiRandomGenerator : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Prng::IRandomGenerator*/ {
    public:
    // private readonly System.Security.Cryptography.RandomNumberGenerator rndProv
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::RandomNumberGenerator* rndProv;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    // Creating value type constructor for type: CryptoApiRandomGenerator
    CryptoApiRandomGenerator(System::Security::Cryptography::RandomNumberGenerator* rndProv_ = {}) noexcept : rndProv{rndProv_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Prng::IRandomGenerator
    operator Org::BouncyCastle::Crypto::Prng::IRandomGenerator() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(this);
    }
    // Creating conversion operator: operator System::Security::Cryptography::RandomNumberGenerator*
    constexpr operator System::Security::Cryptography::RandomNumberGenerator*() const noexcept {
      return rndProv;
    }
    // public System.Void .ctor(System.Security.Cryptography.RandomNumberGenerator rng)
    // Offset: 0x1242064
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoApiRandomGenerator* New_ctor(System::Security::Cryptography::RandomNumberGenerator* rng) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoApiRandomGenerator*, creationType>(rng)));
    }
    // public System.Void NextBytes(System.Byte[] bytes)
    // Offset: 0x1242090
    void NextBytes(::Array<uint8_t>* bytes);
    // public System.Void .ctor()
    // Offset: 0x124202C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoApiRandomGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoApiRandomGenerator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator
  #pragma pack(pop)
  static check_size<sizeof(CryptoApiRandomGenerator), 16 + sizeof(System::Security::Cryptography::RandomNumberGenerator*)> __Org_BouncyCastle_Crypto_Prng_CryptoApiRandomGeneratorSizeCheck;
  static_assert(sizeof(CryptoApiRandomGenerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "CryptoApiRandomGenerator");
