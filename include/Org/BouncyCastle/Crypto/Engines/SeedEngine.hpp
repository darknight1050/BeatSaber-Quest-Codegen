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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SeedEngine
  // [] Offset: FFFFFFFF
  class SeedEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] wKey
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* wKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SeedEngine
    SeedEngine(::Array<int>* wKey_ = {}, bool forEncryption_ = {}) noexcept : wKey{wKey_}, forEncryption{forEncryption_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] SS0
    static ::Array<uint>* _get_SS0();
    // Set static field: static private readonly System.UInt32[] SS0
    static void _set_SS0(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SS1
    static ::Array<uint>* _get_SS1();
    // Set static field: static private readonly System.UInt32[] SS1
    static void _set_SS1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SS2
    static ::Array<uint>* _get_SS2();
    // Set static field: static private readonly System.UInt32[] SS2
    static void _set_SS2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SS3
    static ::Array<uint>* _get_SS3();
    // Set static field: static private readonly System.UInt32[] SS3
    static void _set_SS3(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] KC
    static ::Array<uint>* _get_KC();
    // Set static field: static private readonly System.UInt32[] KC
    static void _set_KC(::Array<uint>* value);
    // private System.Int32[] createWorkingKey(System.Byte[] inKey)
    // Offset: 0x180B6C8
    ::Array<int>* createWorkingKey(::Array<uint8_t>* inKey);
    // private System.Int32 extractW1(System.Int64 lVal)
    // Offset: 0x180BC38
    int extractW1(int64_t lVal);
    // private System.Int32 extractW0(System.Int64 lVal)
    // Offset: 0x180BC30
    int extractW0(int64_t lVal);
    // private System.Int64 rotateLeft8(System.Int64 x)
    // Offset: 0x180BD4C
    int64_t rotateLeft8(int64_t x);
    // private System.Int64 rotateRight8(System.Int64 x)
    // Offset: 0x180BD44
    int64_t rotateRight8(int64_t x);
    // private System.Int64 bytesToLong(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x180BAE0
    int64_t bytesToLong(::Array<uint8_t>* src, int srcOff);
    // private System.Void longToBytes(System.Byte[] dest, System.Int32 destOff, System.Int64 value)
    // Offset: 0x180BBBC
    void longToBytes(::Array<uint8_t>* dest, int destOff, int64_t value);
    // private System.Int32 G(System.Int32 x)
    // Offset: 0x180BC40
    int G(int x);
    // private System.Int64 F(System.Int32 ki0, System.Int32 ki1, System.Int64 r)
    // Offset: 0x180BB4C
    int64_t F(int ki0, int ki1, int64_t r);
    // private System.Int32 phaseCalc1(System.Int32 r0, System.Int32 ki0, System.Int32 r1, System.Int32 ki1)
    // Offset: 0x180BD98
    int phaseCalc1(int r0, int ki0, int r1, int ki1);
    // private System.Int32 phaseCalc2(System.Int32 r0, System.Int32 ki0, System.Int32 r1, System.Int32 ki1)
    // Offset: 0x180BD54
    int phaseCalc2(int r0, int ki0, int r1, int ki1);
    // static private System.Void .cctor()
    // Offset: 0x180BDC4
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x180B608
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x180B88C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x180B8D4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x180B8DC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] inBuf, System.Int32 inOff, System.Byte[] outBuf, System.Int32 outOff)
    // Offset: 0x180B8E4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] inBuf, System.Int32 inOff, System.Byte[] outBuf, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* inBuf, int inOff, ::Array<uint8_t>* outBuf, int outOff);
    // public System.Void Reset()
    // Offset: 0x180BC2C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x180BF2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SeedEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SeedEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SeedEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.SeedEngine
  static check_size<sizeof(SeedEngine), 24 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_SeedEngineSizeCheck;
  static_assert(sizeof(SeedEngine) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SeedEngine*, "Org.BouncyCastle.Crypto.Engines", "SeedEngine");
#pragma pack(pop)
