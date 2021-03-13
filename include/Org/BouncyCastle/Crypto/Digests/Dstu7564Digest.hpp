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
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  // [] Offset: FFFFFFFF
  class Dstu7564Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Int32 hashSize
    // Size: 0x4
    // Offset: 0x10
    int hashSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x14
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 columns
    // Size: 0x4
    // Offset: 0x18
    int columns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 rounds
    // Size: 0x4
    // Offset: 0x1C
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64[] state
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint64_t>* state;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64[] tempState1
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint64_t>* tempState1;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64[] tempState2
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint64_t>* tempState2;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64 inputBlocks
    // Size: 0x8
    // Offset: 0x38
    uint64_t inputBlocks;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x40
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: buf
    char __padding8[0x4] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Dstu7564Digest
    Dstu7564Digest(int hashSize_ = {}, int blockSize_ = {}, int columns_ = {}, int rounds_ = {}, ::Array<uint64_t>* state_ = {}, ::Array<uint64_t>* tempState1_ = {}, ::Array<uint64_t>* tempState2_ = {}, uint64_t inputBlocks_ = {}, int bufOff_ = {}, ::Array<uint8_t>* buf_ = {}) noexcept : hashSize{hashSize_}, blockSize{blockSize_}, columns{columns_}, rounds{rounds_}, state{state_}, tempState1{tempState1_}, tempState2{tempState2_}, inputBlocks{inputBlocks_}, bufOff{bufOff_}, buf{buf_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] S0
    static ::Array<uint8_t>* _get_S0();
    // Set static field: static private readonly System.Byte[] S0
    static void _set_S0(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S1
    static ::Array<uint8_t>* _get_S1();
    // Set static field: static private readonly System.Byte[] S1
    static void _set_S1(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S2
    static ::Array<uint8_t>* _get_S2();
    // Set static field: static private readonly System.Byte[] S2
    static void _set_S2(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S3
    static ::Array<uint8_t>* _get_S3();
    // Set static field: static private readonly System.Byte[] S3
    static void _set_S3(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x1AEDBC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dstu7564Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dstu7564Digest*, creationType>(digest)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x1AEDBF8
    void CopyIn(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
    // public System.Void .ctor(System.Int32 hashSizeBits)
    // Offset: 0x1AEDD34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dstu7564Digest* New_ctor(int hashSizeBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dstu7564Digest*, creationType>(hashSizeBits)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1AEDE7C
    ::Il2CppString* get_AlgorithmName_NEW();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1AEDEC4
    int GetDigestSize_NEW();
    // public System.Int32 GetByteLength()
    // Offset: 0x1AEDECC
    int GetByteLength_NEW();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1AEDED4
    void Update_NEW(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1AEDF64
    void BlockUpdate_NEW(::Array<uint8_t>* input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1AEE098
    int DoFinal_NEW(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1AEE3D8
    void Reset_NEW();
    // protected System.Void ProcessBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1AEE43C
    void ProcessBlock_NEW(::Array<uint8_t>* input, int inOff);
    // private System.Void P(System.UInt64[] s)
    // Offset: 0x1AEE314
    void P(::Array<uint64_t>* s);
    // private System.Void Q(System.UInt64[] s)
    // Offset: 0x1AEE5A8
    void Q(::Array<uint64_t>* s);
    // static private System.UInt64 MixColumn(System.UInt64 c)
    // Offset: 0x1AEEDCC
    static uint64_t MixColumn(uint64_t c);
    // private System.Void MixColumns(System.UInt64[] s)
    // Offset: 0x1AEECF8
    void MixColumns(::Array<uint64_t>* s);
    // static private System.UInt64 Rotate(System.Int32 n, System.UInt64 x)
    // Offset: 0x1AEEE94
    static uint64_t Rotate(int n, uint64_t x);
    // private System.Void ShiftRows(System.UInt64[] s)
    // Offset: 0x1AEE690
    void ShiftRows(::Array<uint64_t>* s);
    // private System.Void SubBytes(System.UInt64[] s)
    // Offset: 0x1AEEB38
    void SubBytes(::Array<uint64_t>* s);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1AEEE9C
    Org::BouncyCastle::Utilities::IMemoable* Copy_NEW();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1AEEF08
    void Reset_NEW(Org::BouncyCastle::Utilities::IMemoable* other);
    // static private System.Void .cctor()
    // Offset: 0x1AEEF9C
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  #pragma pack(pop)
  static check_size<sizeof(Dstu7564Digest), 72 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Digests_Dstu7564DigestSizeCheck;
  static_assert(sizeof(Dstu7564Digest) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, "Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest");
