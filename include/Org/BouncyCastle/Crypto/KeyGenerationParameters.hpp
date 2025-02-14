// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.KeyGenerationParameters
  class KeyGenerationParameters : public ::Il2CppObject {
    public:
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private System.Int32 strength
    // Size: 0x4
    // Offset: 0x18
    int strength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: KeyGenerationParameters
    KeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom* random_ = {}, int strength_ = {}) noexcept : random{random_}, strength{strength_} {}
    // public System.Void .ctor(Org.BouncyCastle.Security.SecureRandom random, System.Int32 strength)
    // Offset: 0x18A9F48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyGenerationParameters* New_ctor(Org::BouncyCastle::Security::SecureRandom* random, int strength) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::KeyGenerationParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyGenerationParameters*, creationType>(random, strength)));
    }
    // public Org.BouncyCastle.Security.SecureRandom get_Random()
    // Offset: 0x18AA02C
    Org::BouncyCastle::Security::SecureRandom* get_Random();
    // public System.Int32 get_Strength()
    // Offset: 0x18AA034
    int get_Strength();
  }; // Org.BouncyCastle.Crypto.KeyGenerationParameters
  #pragma pack(pop)
  static check_size<sizeof(KeyGenerationParameters), 24 + sizeof(int)> __Org_BouncyCastle_Crypto_KeyGenerationParametersSizeCheck;
  static_assert(sizeof(KeyGenerationParameters) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::KeyGenerationParameters*, "Org.BouncyCastle.Crypto", "KeyGenerationParameters");
