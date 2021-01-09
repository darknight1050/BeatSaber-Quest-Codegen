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
  // Size: 0x38
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.CamelliaEngine
  // [] Offset: FFFFFFFF
  class CamelliaEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x10
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _keyIs128
    // Size: 0x1
    // Offset: 0x11
    bool keyIs128;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keyIs128 and: subkey
    char __padding1[0x6] = {};
    // private System.UInt32[] subkey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* subkey;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] kw
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint>* kw;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] ke
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint>* ke;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] state
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint>* state;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: CamelliaEngine
    CamelliaEngine(bool initialised_ = {}, bool keyIs128_ = {}, ::Array<uint>* subkey_ = {}, ::Array<uint>* kw_ = {}, ::Array<uint>* ke_ = {}, ::Array<uint>* state_ = {}) noexcept : initialised{initialised_}, keyIs128{keyIs128_}, subkey{subkey_}, kw{kw_}, ke{ke_}, state{state_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] SIGMA
    static ::Array<uint>* _get_SIGMA();
    // Set static field: static private readonly System.UInt32[] SIGMA
    static void _set_SIGMA(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX1_1110
    static ::Array<uint>* _get_SBOX1_1110();
    // Set static field: static private readonly System.UInt32[] SBOX1_1110
    static void _set_SBOX1_1110(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX4_4404
    static ::Array<uint>* _get_SBOX4_4404();
    // Set static field: static private readonly System.UInt32[] SBOX4_4404
    static void _set_SBOX4_4404(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX2_0222
    static ::Array<uint>* _get_SBOX2_0222();
    // Set static field: static private readonly System.UInt32[] SBOX2_0222
    static void _set_SBOX2_0222(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX3_3033
    static ::Array<uint>* _get_SBOX3_3033();
    // Set static field: static private readonly System.UInt32[] SBOX3_3033
    static void _set_SBOX3_3033(::Array<uint>* value);
    // static private System.UInt32 rightRotate(System.UInt32 x, System.Int32 s)
    // Offset: 0x17C4370
    static uint rightRotate(uint x, int s);
    // static private System.UInt32 leftRotate(System.UInt32 x, System.Int32 s)
    // Offset: 0x17C4384
    static uint leftRotate(uint x, int s);
    // static private System.Void roldq(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x17C4398
    static void roldq(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.Void decroldq(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x17C4568
    static void decroldq(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.Void roldqo32(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x17C4738
    static void roldqo32(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.Void decroldqo32(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x17C490C
    static void decroldqo32(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.UInt32 bytes2uint(System.Byte[] src, System.Int32 offset)
    // Offset: 0x17C4AE0
    static uint bytes2uint(::Array<uint8_t>* src, int offset);
    // static private System.Void uint2bytes(System.UInt32 word, System.Byte[] dst, System.Int32 offset)
    // Offset: 0x17C4B50
    static void uint2bytes(uint word, ::Array<uint8_t>* dst, int offset);
    // static private System.Void camelliaF2(System.UInt32[] s, System.UInt32[] skey, System.Int32 keyoff)
    // Offset: 0x17C4BA4
    static void camelliaF2(::Array<uint>* s, ::Array<uint>* skey, int keyoff);
    // static private System.Void camelliaFLs(System.UInt32[] s, System.UInt32[] fkey, System.Int32 keyoff)
    // Offset: 0x17C4EE0
    static void camelliaFLs(::Array<uint>* s, ::Array<uint>* fkey, int keyoff);
    // private System.Void setKey(System.Boolean forEncryption, System.Byte[] key)
    // Offset: 0x17C5034
    void setKey(bool forEncryption, ::Array<uint8_t>* key);
    // private System.Int32 processBlock128(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17C6234
    int processBlock128(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // private System.Int32 processBlock192or256(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17C6574
    int processBlock192or256(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // static private System.Void .cctor()
    // Offset: 0x17C6C1C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17C68F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CamelliaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::CamelliaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CamelliaEngine*, creationType>()));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17C69B4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x17C6A9C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x17C6AE4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x17C6AEC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17C6AF4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x17C6C18
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.CamelliaEngine
  static check_size<sizeof(CamelliaEngine), 48 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Crypto_Engines_CamelliaEngineSizeCheck;
  static_assert(sizeof(CamelliaEngine) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaEngine");
#pragma pack(pop)
