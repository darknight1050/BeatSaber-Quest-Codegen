// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC564Engine
  class RC564Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32 _noRounds
    // Size: 0x4
    // Offset: 0x10
    int noRounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: noRounds and: S
    char __padding0[0x4] = {};
    // private System.Int64[] _S
    // Size: 0x8
    // Offset: 0x18
    ::Array<int64_t>* S;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC564Engine
    RC564Engine(int noRounds_ = {}, ::Array<int64_t>* S_ = {}, bool forEncryption_ = {}) noexcept : noRounds{noRounds_}, S{S_}, forEncryption{forEncryption_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32 wordSize
    static int _get_wordSize();
    // Set static field: static private readonly System.Int32 wordSize
    static void _set_wordSize(int value);
    // Get static field: static private readonly System.Int32 bytesPerWord
    static int _get_bytesPerWord();
    // Set static field: static private readonly System.Int32 bytesPerWord
    static void _set_bytesPerWord(int value);
    // Get static field: static private readonly System.Int64 P64
    static int64_t _get_P64();
    // Set static field: static private readonly System.Int64 P64
    static void _set_P64(int64_t value);
    // Get static field: static private readonly System.Int64 Q64
    static int64_t _get_Q64();
    // Set static field: static private readonly System.Int64 Q64
    static void _set_Q64(int64_t value);
    // public System.String get_AlgorithmName()
    // Offset: 0x1D8D560
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1D8D5A8
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1D8D5B0
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1D8D61C
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1D8DAB0
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1D8DE54
    void Reset();
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x1D8D7B8
    void SetKey(::Array<uint8_t>* key);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1D8DC88
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1D8DAC0
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int64 RotateLeft(System.Int64 x, System.Int64 y)
    // Offset: 0x1D8DE58
    int64_t RotateLeft(int64_t x, int64_t y);
    // private System.Int64 RotateRight(System.Int64 x, System.Int64 y)
    // Offset: 0x1D8E090
    int64_t RotateRight(int64_t x, int64_t y);
    // private System.Int64 BytesToWord(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x1D8DEE8
    int64_t BytesToWord(::Array<uint8_t>* src, int srcOff);
    // private System.Void WordToBytes(System.Int64 word, System.Byte[] dst, System.Int32 dstOff)
    // Offset: 0x1D8DFB0
    void WordToBytes(int64_t word, ::Array<uint8_t>* dst, int dstOff);
    // static private System.Void .cctor()
    // Offset: 0x1D8E120
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1D8D534
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC564Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RC564Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC564Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RC564Engine
  #pragma pack(pop)
  static check_size<sizeof(RC564Engine), 32 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_RC564EngineSizeCheck;
  static_assert(sizeof(RC564Engine) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC564Engine*, "Org.BouncyCastle.Crypto.Engines", "RC564Engine");
