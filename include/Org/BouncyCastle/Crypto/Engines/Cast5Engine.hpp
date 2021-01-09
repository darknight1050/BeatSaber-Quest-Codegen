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
  // Size: 0x34
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Cast5Engine
  // [] Offset: FFFFFFFF
  class Cast5Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] _Kr
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* Kr;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.UInt32[] _Km
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* Km;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Boolean _encrypting
    // Size: 0x1
    // Offset: 0x20
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypting and: workingKey
    char __padding2[0x7] = {};
    // private System.Byte[] _workingKey
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _rounds
    // Size: 0x4
    // Offset: 0x30
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Cast5Engine
    Cast5Engine(::Array<int>* Kr_ = {}, ::Array<uint>* Km_ = {}, bool encrypting_ = {}, ::Array<uint8_t>* workingKey_ = {}, int rounds_ = {}) noexcept : Kr{Kr_}, Km{Km_}, encrypting{encrypting_}, workingKey{workingKey_}, rounds{rounds_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] S1
    static ::Array<uint>* _get_S1();
    // Set static field: static private readonly System.UInt32[] S1
    static void _set_S1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S2
    static ::Array<uint>* _get_S2();
    // Set static field: static private readonly System.UInt32[] S2
    static void _set_S2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S3
    static ::Array<uint>* _get_S3();
    // Set static field: static private readonly System.UInt32[] S3
    static void _set_S3(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S4
    static ::Array<uint>* _get_S4();
    // Set static field: static private readonly System.UInt32[] S4
    static void _set_S4(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S5
    static ::Array<uint>* _get_S5();
    // Set static field: static private readonly System.UInt32[] S5
    static void _set_S5(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S6
    static ::Array<uint>* _get_S6();
    // Set static field: static private readonly System.UInt32[] S6
    static void _set_S6(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S7
    static ::Array<uint>* _get_S7();
    // Set static field: static private readonly System.UInt32[] S7
    static void _set_S7(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S8
    static ::Array<uint>* _get_S8();
    // Set static field: static private readonly System.UInt32[] S8
    static void _set_S8(::Array<uint>* value);
    // Get static field: static readonly System.Int32 MAX_ROUNDS
    static int _get_MAX_ROUNDS();
    // Set static field: static readonly System.Int32 MAX_ROUNDS
    static void _set_MAX_ROUNDS(int value);
    // Get static field: static readonly System.Int32 RED_ROUNDS
    static int _get_RED_ROUNDS();
    // Set static field: static readonly System.Int32 RED_ROUNDS
    static void _set_RED_ROUNDS(int value);
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x17C7198
    void SetKey(::Array<uint8_t>* key);
    // System.Int32 EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x17CAD18
    int EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // System.Int32 DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x17CB074
    int DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // static System.UInt32 F1(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x17CB3EC
    static uint F1(uint D, uint Kmi, int Kri);
    // static System.UInt32 F2(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x17CB50C
    static uint F2(uint D, uint Kmi, int Kri);
    // static System.UInt32 F3(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x17CB62C
    static uint F3(uint D, uint Kmi, int Kri);
    // System.Void CAST_Encipher(System.UInt32 L0, System.UInt32 R0, System.UInt32[] result)
    // Offset: 0x17CAE24
    void CAST_Encipher(uint L0, uint R0, ::Array<uint>* result);
    // System.Void CAST_Decipher(System.UInt32 L16, System.UInt32 R16, System.UInt32[] result)
    // Offset: 0x17CB180
    void CAST_Decipher(uint L16, uint R16, ::Array<uint>* result);
    // static System.Void Bits32ToInts(System.UInt32 inData, System.Int32[] b, System.Int32 offset)
    // Offset: 0x17CAC88
    static void Bits32ToInts(uint inData, ::Array<int>* b, int offset);
    // static System.UInt32 IntsTo32bits(System.Int32[] b, System.Int32 i)
    // Offset: 0x17CAC04
    static uint IntsTo32bits(::Array<int>* b, int i);
    // static private System.Void .cctor()
    // Offset: 0x17CB74C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17C6D84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cast5Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::Cast5Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cast5Engine*, creationType>()));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17C6E48
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x17C6FE8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x17C7030
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17C7038
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x17C718C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x17C7190
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
  }; // Org.BouncyCastle.Crypto.Engines.Cast5Engine
  static check_size<sizeof(Cast5Engine), 48 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_Cast5EngineSizeCheck;
  static_assert(sizeof(Cast5Engine) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Cast5Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast5Engine");
#pragma pack(pop)
