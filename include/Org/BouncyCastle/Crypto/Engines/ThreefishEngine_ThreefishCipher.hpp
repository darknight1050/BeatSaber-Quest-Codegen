// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
  // [] Offset: FFFFFFFF
  class ThreefishEngine::ThreefishCipher : public ::Il2CppObject {
    public:
    // protected readonly System.UInt64[] t
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint64_t>* t;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // protected readonly System.UInt64[] kw
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint64_t>* kw;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: ThreefishCipher
    ThreefishCipher(::Array<uint64_t>* t_ = {}, ::Array<uint64_t>* kw_ = {}) noexcept : t{t_}, kw{kw_} {}
    // protected System.Void .ctor(System.UInt64[] kw, System.UInt64[] t)
    // Offset: 0x181363C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreefishEngine::ThreefishCipher* New_ctor(::Array<uint64_t>* kw, ::Array<uint64_t>* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreefishEngine::ThreefishCipher*, creationType>(kw, t)));
    }
    // System.Void EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0xFFFFFFFF
    void EncryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* outWords);
    // System.Void DecryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0xFFFFFFFF
    void DecryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* outWords);
  }; // Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
  static check_size<sizeof(ThreefishEngine::ThreefishCipher), 24 + sizeof(::Array<uint64_t>*)> __Org_BouncyCastle_Crypto_Engines_ThreefishEngine_ThreefishCipherSizeCheck;
  static_assert(sizeof(ThreefishEngine::ThreefishCipher) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/ThreefishCipher");
#pragma pack(pop)
