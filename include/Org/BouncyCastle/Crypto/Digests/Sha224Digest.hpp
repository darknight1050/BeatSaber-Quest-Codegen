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
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha224Digest
  class Sha224Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.UInt32 H1
    // Size: 0x4
    // Offset: 0x28
    uint H1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H2
    // Size: 0x4
    // Offset: 0x2C
    uint H2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H3
    // Size: 0x4
    // Offset: 0x30
    uint H3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H4
    // Size: 0x4
    // Offset: 0x34
    uint H4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H5
    // Size: 0x4
    // Offset: 0x38
    uint H5;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H6
    // Size: 0x4
    // Offset: 0x3C
    uint H6;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H7
    // Size: 0x4
    // Offset: 0x40
    uint H7;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H8
    // Size: 0x4
    // Offset: 0x44
    uint H8;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32[] X
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint>* X;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x50
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Sha224Digest
    Sha224Digest(uint H1_ = {}, uint H2_ = {}, uint H3_ = {}, uint H4_ = {}, uint H5_ = {}, uint H6_ = {}, uint H7_ = {}, uint H8_ = {}, ::Array<uint>* X_ = {}, int xOff_ = {}) noexcept : H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, H5{H5_}, H6{H6_}, H7{H7_}, H8{H8_}, X{X_}, xOff{xOff_} {}
    // Get static field: static readonly System.UInt32[] K
    static ::Array<uint>* _get_K();
    // Set static field: static readonly System.UInt32[] K
    static void _set_K(::Array<uint>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha224Digest t)
    // Offset: 0x18C29BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha224Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha224Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha224Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha224Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Sha224Digest t)
    // Offset: 0x18C2A38
    void CopyIn(Org::BouncyCastle::Crypto::Digests::Sha224Digest* t);
    // static private System.UInt32 Ch(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x18C3358
    static uint Ch(uint x, uint y, uint z);
    // static private System.UInt32 Maj(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x18C3378
    static uint Maj(uint x, uint y, uint z);
    // static private System.UInt32 Sum0(System.UInt32 x)
    // Offset: 0x18C3368
    static uint Sum0(uint x);
    // static private System.UInt32 Sum1(System.UInt32 x)
    // Offset: 0x18C3348
    static uint Sum1(uint x);
    // static private System.UInt32 Theta0(System.UInt32 x)
    // Offset: 0x18C3338
    static uint Theta0(uint x);
    // static private System.UInt32 Theta1(System.UInt32 x)
    // Offset: 0x18C3328
    static uint Theta1(uint x);
    // static private System.Void .cctor()
    // Offset: 0x18C3480
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18C2948
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha224Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha224Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha224Digest*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x18C2AD0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x18C2B18
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x18C2B20
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x18C2BB8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18C2C3C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x18C2D14
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x18C2D6C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18C338C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18C33EC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha224Digest
  #pragma pack(pop)
  static check_size<sizeof(Sha224Digest), 80 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_Sha224DigestSizeCheck;
  static_assert(sizeof(Sha224Digest) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha224Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha224Digest");
