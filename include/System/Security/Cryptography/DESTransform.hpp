// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DESTransform
  // [] Offset: FFFFFFFF
  class DESTransform : public Mono::Security::Cryptography::SymmetricTransform {
    public:
    // private System.Byte[] keySchedule
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* keySchedule;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] byteBuff
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* byteBuff;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32[] dwordBuff
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint>* dwordBuff;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: DESTransform
    DESTransform(::Array<uint8_t>* keySchedule_ = {}, ::Array<uint8_t>* byteBuff_ = {}, ::Array<uint>* dwordBuff_ = {}) noexcept : keySchedule{keySchedule_}, byteBuff{byteBuff_}, dwordBuff{dwordBuff_} {}
    // Get static field: static readonly System.Int32 KEY_BIT_SIZE
    static int _get_KEY_BIT_SIZE();
    // Set static field: static readonly System.Int32 KEY_BIT_SIZE
    static void _set_KEY_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 KEY_BYTE_SIZE
    static int _get_KEY_BYTE_SIZE();
    // Set static field: static readonly System.Int32 KEY_BYTE_SIZE
    static void _set_KEY_BYTE_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static int _get_BLOCK_BIT_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static void _set_BLOCK_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static int _get_BLOCK_BYTE_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static void _set_BLOCK_BYTE_SIZE(int value);
    // Get static field: static private readonly System.UInt32[] spBoxes
    static ::Array<uint>* _get_spBoxes();
    // Set static field: static private readonly System.UInt32[] spBoxes
    static void _set_spBoxes(::Array<uint>* value);
    // Get static field: static private readonly System.Byte[] PC1
    static ::Array<uint8_t>* _get_PC1();
    // Set static field: static private readonly System.Byte[] PC1
    static void _set_PC1(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] leftRotTotal
    static ::Array<uint8_t>* _get_leftRotTotal();
    // Set static field: static private readonly System.Byte[] leftRotTotal
    static void _set_leftRotTotal(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] PC2
    static ::Array<uint8_t>* _get_PC2();
    // Set static field: static private readonly System.Byte[] PC2
    static void _set_PC2(::Array<uint8_t>* value);
    // Get static field: static readonly System.UInt32[] ipTab
    static ::Array<uint>* _get_ipTab();
    // Set static field: static readonly System.UInt32[] ipTab
    static void _set_ipTab(::Array<uint>* value);
    // Get static field: static readonly System.UInt32[] fpTab
    static ::Array<uint>* _get_fpTab();
    // Set static field: static readonly System.UInt32[] fpTab
    static void _set_fpTab(::Array<uint>* value);
    // System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x17DA04C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DESTransform* New_ctor(System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DESTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DESTransform*, creationType>(symmAlgo, encryption, key, iv)));
    }
    // private System.UInt32 CipherFunct(System.UInt32 r, System.Int32 n)
    // Offset: 0x17DAA04
    uint CipherFunct(uint r, int n);
    // static System.Void Permutation(System.Byte[] input, System.Byte[] output, System.UInt32[] permTab, System.Boolean preSwap)
    // Offset: 0x17DAC4C
    static void Permutation(::Array<uint8_t>* input, ::Array<uint8_t>* output, ::Array<uint>* permTab, bool preSwap);
    // static private System.Void BSwap(System.Byte[] byteBuff)
    // Offset: 0x17DAF9C
    static void BSwap(::Array<uint8_t>* byteBuff);
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x17DA604
    void SetKey(::Array<uint8_t>* key);
    // public System.Void ProcessBlock(System.Byte[] input, System.Byte[] output)
    // Offset: 0x17DB020
    void ProcessBlock(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // static System.Byte[] GetStrongKey()
    // Offset: 0x17DA510
    static ::Array<uint8_t>* GetStrongKey();
    // static private System.Void .cctor()
    // Offset: 0x17DB48C
    static void _cctor();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x17DB3D8
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB_NEW(System.Byte[] input, System.Byte[] output)
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
  }; // System.Security.Cryptography.DESTransform
  #pragma pack(pop)
  static check_size<sizeof(DESTransform), 104 + sizeof(::Array<uint>*)> __System_Security_Cryptography_DESTransformSizeCheck;
  static_assert(sizeof(DESTransform) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
