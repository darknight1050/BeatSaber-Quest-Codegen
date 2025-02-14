// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Encodings
namespace Org::BouncyCastle::Crypto::Encodings {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
  class Pkcs1Encoding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher engine
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean forPrivateKey
    // Size: 0x1
    // Offset: 0x21
    bool forPrivateKey;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean useStrictLength
    // Size: 0x1
    // Offset: 0x22
    bool useStrictLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useStrictLength and: pLen
    char __padding4[0x1] = {};
    // private System.Int32 pLen
    // Size: 0x4
    // Offset: 0x24
    int pLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] fallback
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* fallback;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] blockBuffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* blockBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Pkcs1Encoding
    Pkcs1Encoding(Org::BouncyCastle::Security::SecureRandom* random_ = {}, Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine_ = {}, bool forEncryption_ = {}, bool forPrivateKey_ = {}, bool useStrictLength_ = {}, int pLen_ = {}, ::Array<uint8_t>* fallback_ = {}, ::Array<uint8_t>* blockBuffer_ = {}) noexcept : random{random_}, engine{engine_}, forEncryption{forEncryption_}, forPrivateKey{forPrivateKey_}, useStrictLength{useStrictLength_}, pLen{pLen_}, fallback{fallback_}, blockBuffer{blockBuffer_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Boolean[] strictLengthEnabled
    static ::Array<bool>* _get_strictLengthEnabled();
    // Set static field: static private readonly System.Boolean[] strictLengthEnabled
    static void _set_strictLengthEnabled(::Array<bool>* value);
    // static public System.Boolean get_StrictLengthEnabled()
    // Offset: 0x18CFC44
    static bool get_StrictLengthEnabled();
    // static private System.Void .cctor()
    // Offset: 0x18CFCCC
    static void _cctor();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher)
    // Offset: 0x18CFDD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs1Encoding* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs1Encoding*, creationType>(cipher)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x18CFE68
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x18D011C
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x18D01E4
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x18D02AC
    ::Array<uint8_t>* ProcessBlock(::Array<uint8_t>* input, int inOff, int length);
    // private System.Byte[] EncodeBlock(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x18D05D0
    ::Array<uint8_t>* EncodeBlock(::Array<uint8_t>* input, int inOff, int inLen);
    // static private System.Int32 CheckPkcs1Encoding(System.Byte[] encoded, System.Int32 pLen)
    // Offset: 0x18D08D8
    static int CheckPkcs1Encoding(::Array<uint8_t>* encoded, int pLen);
    // private System.Byte[] DecodeBlockOrRandom(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x18D0988
    ::Array<uint8_t>* DecodeBlockOrRandom(::Array<uint8_t>* input, int inOff, int inLen);
    // private System.Byte[] DecodeBlock(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x18D02BC
    ::Array<uint8_t>* DecodeBlock(::Array<uint8_t>* input, int inOff, int inLen);
    // private System.Int32 FindStart(System.Byte type, System.Byte[] block)
    // Offset: 0x18D0C84
    int FindStart(uint8_t type, ::Array<uint8_t>* block);
  }; // Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
  #pragma pack(pop)
  static check_size<sizeof(Pkcs1Encoding), 48 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Encodings_Pkcs1EncodingSizeCheck;
  static_assert(sizeof(Pkcs1Encoding) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*, "Org.BouncyCastle.Crypto.Encodings", "Pkcs1Encoding");
