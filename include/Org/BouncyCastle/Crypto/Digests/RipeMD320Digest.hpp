// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
  class RipeMD320Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.Int32 H0
    // Size: 0x4
    // Offset: 0x28
    int H0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H1
    // Size: 0x4
    // Offset: 0x2C
    int H1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H2
    // Size: 0x4
    // Offset: 0x30
    int H2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H3
    // Size: 0x4
    // Offset: 0x34
    int H3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H4
    // Size: 0x4
    // Offset: 0x38
    int H4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H5
    // Size: 0x4
    // Offset: 0x3C
    int H5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H6
    // Size: 0x4
    // Offset: 0x40
    int H6;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H7
    // Size: 0x4
    // Offset: 0x44
    int H7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H8
    // Size: 0x4
    // Offset: 0x48
    int H8;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H9
    // Size: 0x4
    // Offset: 0x4C
    int H9;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] X
    // Size: 0x8
    // Offset: 0x50
    ::Array<int>* X;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x58
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RipeMD320Digest
    RipeMD320Digest(int H0_ = {}, int H1_ = {}, int H2_ = {}, int H3_ = {}, int H4_ = {}, int H5_ = {}, int H6_ = {}, int H7_ = {}, int H8_ = {}, int H9_ = {}, ::Array<int>* X_ = {}, int xOff_ = {}) noexcept : H0{H0_}, H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, H5{H5_}, H6{H6_}, H7{H7_}, H8{H8_}, H9{H9_}, X{X_}, xOff{xOff_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.RipeMD320Digest t)
    // Offset: 0x18BF520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD320Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD320Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD320Digest t)
    // Offset: 0x18BF59C
    void CopyIn(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest* t);
    // private System.Void UnpackWord(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x18BF790
    void UnpackWord(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RL(System.Int32 x, System.Int32 n)
    // Offset: 0x18BF99C
    int RL(int x, int n);
    // private System.Int32 F1(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x18BF9A8
    int F1(int x, int y, int z);
    // private System.Int32 F2(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x18BF9B4
    int F2(int x, int y, int z);
    // private System.Int32 F3(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x18BF9C4
    int F3(int x, int y, int z);
    // private System.Int32 F4(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x18BF9D0
    int F4(int x, int y, int z);
    // private System.Int32 F5(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x18BF9E0
    int F5(int x, int y, int z);
    // public override System.String get_AlgorithmName()
    // Offset: 0x18BF45C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x18BF4A4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // public System.Void .ctor()
    // Offset: 0x18BF4AC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD320Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD320Digest*, creationType>()));
    }
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x18BF644
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x18BF70C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18BF81C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x18BF908
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x18BF9EC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18C11AC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18C120C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
  #pragma pack(pop)
  static check_size<sizeof(RipeMD320Digest), 88 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_RipeMD320DigestSizeCheck;
  static_assert(sizeof(RipeMD320Digest) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD320Digest");
