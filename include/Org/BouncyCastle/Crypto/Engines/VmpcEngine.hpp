// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IStreamCipher
#include "Org/BouncyCastle/Crypto/IStreamCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x38
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.VmpcEngine
  // [] Offset: FFFFFFFF
  class VmpcEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IStreamCipher*/ {
    public:
    // protected System.Byte n
    // Size: 0x1
    // Offset: 0x10
    uint8_t n;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: n and: P
    char __padding0[0x7] = {};
    // protected System.Byte[] P
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* P;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Byte s
    // Size: 0x1
    // Offset: 0x20
    uint8_t s;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: s and: workingIV
    char __padding2[0x7] = {};
    // protected System.Byte[] workingIV
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* workingIV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Byte[] workingKey
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: VmpcEngine
    VmpcEngine(uint8_t n_ = {}, ::Array<uint8_t>* P_ = {}, uint8_t s_ = {}, ::Array<uint8_t>* workingIV_ = {}, ::Array<uint8_t>* workingKey_ = {}) noexcept : n{n_}, P{P_}, s{s_}, workingIV{workingIV_}, workingKey{workingKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher
    operator Org::BouncyCastle::Crypto::IStreamCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IStreamCipher*>(this);
    }
    // protected System.Void InitKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x14967CC
    void InitKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x149662C
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1496A04
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    void ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1496BE4
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1496BF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VmpcEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::VmpcEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VmpcEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.VmpcEngine
  static check_size<sizeof(VmpcEngine), 48 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Engines_VmpcEngineSizeCheck;
  static_assert(sizeof(VmpcEngine) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::VmpcEngine*, "Org.BouncyCastle.Crypto.Engines", "VmpcEngine");
#pragma pack(pop)
