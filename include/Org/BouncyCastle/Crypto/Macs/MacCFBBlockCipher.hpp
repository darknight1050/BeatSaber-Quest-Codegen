// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
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
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x38
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
  // [] Offset: FFFFFFFF
  class MacCFBBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Byte[] IV
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* IV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] cfbV
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* cfbV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] cfbOutV
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* cfbOutV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x28
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blockSize and: cipher
    char __padding3[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // Creating value type constructor for type: MacCFBBlockCipher
    MacCFBBlockCipher(::Array<uint8_t>* IV_ = {}, ::Array<uint8_t>* cfbV_ = {}, ::Array<uint8_t>* cfbOutV_ = {}, int blockSize_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}) noexcept : IV{IV_}, cfbV{cfbV_}, cfbOutV{cfbOutV_}, blockSize{blockSize_}, cipher{cipher_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 bitBlockSize)
    // Offset: 0x149CF80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacCFBBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int bitBlockSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacCFBBlockCipher*, creationType>(cipher, bitBlockSize)));
    }
    // public System.Void GetMacBlock(System.Byte[] mac)
    // Offset: 0x149D93C
    void GetMacBlock(::Array<uint8_t>* mac);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x149D220
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x14A063C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x14A0738
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x14A0740
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x149D408
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x149DA10
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
  static check_size<sizeof(MacCFBBlockCipher), 48 + sizeof(Org::BouncyCastle::Crypto::IBlockCipher*)> __Org_BouncyCastle_Crypto_Macs_MacCFBBlockCipherSizeCheck;
  static_assert(sizeof(MacCFBBlockCipher) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*, "Org.BouncyCastle.Crypto.Macs", "MacCFBBlockCipher");
#pragma pack(pop)
