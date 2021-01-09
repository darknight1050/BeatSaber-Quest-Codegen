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
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x19
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC2Engine
  // [] Offset: FFFFFFFF
  class RC2Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x18
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC2Engine
    RC2Engine(::Array<int>* workingKey_ = {}, bool encrypting_ = {}) noexcept : workingKey{workingKey_}, encrypting{encrypting_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] piTable
    static ::Array<uint8_t>* _get_piTable();
    // Set static field: static private readonly System.Byte[] piTable
    static void _set_piTable(::Array<uint8_t>* value);
    // private System.Int32[] GenerateWorkingKey(System.Byte[] key, System.Int32 bits)
    // Offset: 0x17D4B40
    ::Array<int>* GenerateWorkingKey(::Array<uint8_t>* key, int bits);
    // private System.Int32 RotateWordLeft(System.Int32 x, System.Int32 y)
    // Offset: 0x17D5ACC
    int RotateWordLeft(int x, int y);
    // private System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x17D5178
    void EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x17D5664
    void DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // static private System.Void .cctor()
    // Offset: 0x17D5AE8
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17D4E74
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void Reset()
    // Offset: 0x17D4FF8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.String get_AlgorithmName()
    // Offset: 0x17D4FFC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x17D5044
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x17D504C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17D5054
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void .ctor()
    // Offset: 0x17D5B68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RC2Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RC2Engine
  static check_size<sizeof(RC2Engine), 24 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_RC2EngineSizeCheck;
  static_assert(sizeof(RC2Engine) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC2Engine*, "Org.BouncyCastle.Crypto.Engines", "RC2Engine");
#pragma pack(pop)
