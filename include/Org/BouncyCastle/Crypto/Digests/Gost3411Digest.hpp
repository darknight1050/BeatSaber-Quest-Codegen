// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411Digest
  class Gost3411Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Byte[] H
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* H;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] L
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* L;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] M
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* M;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] Sum
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* Sum;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[][] C
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Array<uint8_t>*>* C;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // private System.Byte[] xBuf
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* xBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 xBufOff
    // Size: 0x4
    // Offset: 0x40
    int xBufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: xBufOff and: byteCount
    char __padding6[0x4] = {};
    // private System.UInt64 byteCount
    // Size: 0x8
    // Offset: 0x48
    uint64_t byteCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private System.Byte[] sBox
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* sBox;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] K
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* K;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] a
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* a;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int16[] wS
    // Size: 0x8
    // Offset: 0x70
    ::Array<int16_t>* wS;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // System.Int16[] w_S
    // Size: 0x8
    // Offset: 0x78
    ::Array<int16_t>* w_S;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // System.Byte[] S
    // Size: 0x8
    // Offset: 0x80
    ::Array<uint8_t>* S;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Byte[] U
    // Size: 0x8
    // Offset: 0x88
    ::Array<uint8_t>* U;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Byte[] V
    // Size: 0x8
    // Offset: 0x90
    ::Array<uint8_t>* V;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Byte[] W
    // Size: 0x8
    // Offset: 0x98
    ::Array<uint8_t>* W;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Gost3411Digest
    Gost3411Digest(::Array<uint8_t>* H_ = {}, ::Array<uint8_t>* L_ = {}, ::Array<uint8_t>* M_ = {}, ::Array<uint8_t>* Sum_ = {}, ::Array<::Array<uint8_t>*>* C_ = {}, ::Array<uint8_t>* xBuf_ = {}, int xBufOff_ = {}, uint64_t byteCount_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, ::Array<uint8_t>* sBox_ = {}, ::Array<uint8_t>* K_ = {}, ::Array<uint8_t>* a_ = {}, ::Array<int16_t>* wS_ = {}, ::Array<int16_t>* w_S_ = {}, ::Array<uint8_t>* S_ = {}, ::Array<uint8_t>* U_ = {}, ::Array<uint8_t>* V_ = {}, ::Array<uint8_t>* W_ = {}) noexcept : H{H_}, L{L_}, M{M_}, Sum{Sum_}, C{C_}, xBuf{xBuf_}, xBufOff{xBufOff_}, byteCount{byteCount_}, cipher{cipher_}, sBox{sBox_}, K{K_}, a{a_}, wS{wS_}, w_S{w_S_}, S{S_}, U{U_}, V{V_}, W{W_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] C2
    static ::Array<uint8_t>* _get_C2();
    // Set static field: static private readonly System.Byte[] C2
    static void _set_C2(::Array<uint8_t>* value);
    // static private System.Byte[][] MakeC()
    // Offset: 0x1CB6450
    static ::Array<::Array<uint8_t>*>* MakeC();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Gost3411Digest t)
    // Offset: 0x1CB6900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411Digest*, creationType>(t)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1CB6D64
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1CB6DAC
    int GetDigestSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1CB6DB4
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1CB7208
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // private System.Byte[] P(System.Byte[] input)
    // Offset: 0x1CB7350
    ::Array<uint8_t>* P(::Array<uint8_t>* input);
    // private System.Byte[] A(System.Byte[] input)
    // Offset: 0x1CB7470
    ::Array<uint8_t>* A(::Array<uint8_t>* input);
    // private System.Void E(System.Byte[] key, System.Byte[] s, System.Int32 sOff, System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1CB753C
    void E(::Array<uint8_t>* key, ::Array<uint8_t>* s, int sOff, ::Array<uint8_t>* input, int inOff);
    // private System.Void fw(System.Byte[] input)
    // Offset: 0x1CB76C0
    void fw(::Array<uint8_t>* input);
    // private System.Void processBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1CB6ECC
    void processBlock(::Array<uint8_t>* input, int inOff);
    // private System.Void finish()
    // Offset: 0x1CB7934
    void finish();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CB7998
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1CB6788
    void Reset();
    // private System.Void sumByteArray(System.Byte[] input)
    // Offset: 0x1CB6E48
    void sumByteArray(::Array<uint8_t>* input);
    // static private System.Void cpyBytesToShort(System.Byte[] S, System.Int16[] wS)
    // Offset: 0x1CB77E8
    static void cpyBytesToShort(::Array<uint8_t>* S, ::Array<int16_t>* wS);
    // static private System.Void cpyShortToBytes(System.Int16[] wS, System.Byte[] S)
    // Offset: 0x1CB788C
    static void cpyShortToBytes(::Array<int16_t>* wS, ::Array<uint8_t>* S);
    // public System.Int32 GetByteLength()
    // Offset: 0x1CB79F0
    int GetByteLength();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1CB79F8
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1CB6A88
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // static private System.Void .cctor()
    // Offset: 0x1CB7A58
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1CB6530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411Digest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411Digest
  #pragma pack(pop)
  static check_size<sizeof(Gost3411Digest), 152 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Digests_Gost3411DigestSizeCheck;
  static_assert(sizeof(Gost3411Digest) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411Digest");
