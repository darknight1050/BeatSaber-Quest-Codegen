// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Forward declaring type: SicBlockCipher
  class SicBlockCipher;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IMac
  class IMac;
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
  // [] Offset: FFFFFFFF
  class EaxBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    // private Org.BouncyCastle.Crypto.Modes.SicBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Modes::SicBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Modes::SicBlockCipher*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: blockSize
    char __padding1[0x3] = {};
    // private System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x1C
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Org.BouncyCastle.Crypto.IMac mac
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IMac* mac;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IMac*) == 0x8);
    // private System.Byte[] nonceMac
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* nonceMac;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] associatedTextMac
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* associatedTextMac;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] macBlock
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* macBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x40
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: macSize and: bufBlock
    char __padding7[0x4] = {};
    // private System.Byte[] bufBlock
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* bufBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x50
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean cipherInitialized
    // Size: 0x1
    // Offset: 0x54
    bool cipherInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cipherInitialized and: initialAssociatedText
    char __padding10[0x3] = {};
    // private System.Byte[] initialAssociatedText
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* initialAssociatedText;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: EaxBlockCipher
    EaxBlockCipher(Org::BouncyCastle::Crypto::Modes::SicBlockCipher* cipher_ = {}, bool forEncryption_ = {}, int blockSize_ = {}, Org::BouncyCastle::Crypto::IMac* mac_ = {}, ::Array<uint8_t>* nonceMac_ = {}, ::Array<uint8_t>* associatedTextMac_ = {}, ::Array<uint8_t>* macBlock_ = {}, int macSize_ = {}, ::Array<uint8_t>* bufBlock_ = {}, int bufOff_ = {}, bool cipherInitialized_ = {}, ::Array<uint8_t>* initialAssociatedText_ = {}) noexcept : cipher{cipher_}, forEncryption{forEncryption_}, blockSize{blockSize_}, mac{mac_}, nonceMac{nonceMac_}, associatedTextMac{associatedTextMac_}, macBlock{macBlock_}, macSize{macSize_}, bufBlock{bufBlock_}, bufOff{bufOff_}, cipherInitialized{cipherInitialized_}, initialAssociatedText{initialAssociatedText_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x171B71C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EaxBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EaxBlockCipher*, creationType>(cipher)));
    }
    // public System.Int32 GetBlockSize()
    // Offset: 0x171B958
    int GetBlockSize_NEW();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x171B97C
    void Init_NEW(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void InitCipher()
    // Offset: 0x171BE1C
    void InitCipher();
    // private System.Void CalculateMac()
    // Offset: 0x171BFC8
    void CalculateMac();
    // public System.Void Reset()
    // Offset: 0x171C134
    void Reset_NEW();
    // private System.Void Reset(System.Boolean clearMac)
    // Offset: 0x171C13C
    void Reset(bool clearMac);
    // public System.Void ProcessAadBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x171C354
    void ProcessAadBytes_NEW(::Array<uint8_t>* inBytes, int inOff, int len);
    // public System.Int32 ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x171C474
    int ProcessBytes_NEW(::Array<uint8_t>* inBytes, int inOff, int len, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x171C794
    int DoFinal_NEW(::Array<uint8_t>* outBytes, int outOff);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x171CB78
    int GetUpdateOutputSize_NEW(int len);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x171CBAC
    int GetOutputSize_NEW(int len);
    // private System.Int32 Process(System.Byte b, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x171C51C
    int Process(uint8_t b, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Boolean VerifyMac(System.Byte[] mac, System.Int32 off)
    // Offset: 0x171CAD8
    bool VerifyMac(::Array<uint8_t>* mac, int off);
  }; // Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(EaxBlockCipher), 88 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Modes_EaxBlockCipherSizeCheck;
  static_assert(sizeof(EaxBlockCipher) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher");
