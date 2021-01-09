// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.KeyedHashAlgorithm
#include "System/Security/Cryptography/KeyedHashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: HashAlgorithm because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x61
  // Autogenerated type: System.Security.Cryptography.HMAC
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A3E0
  class HMAC : public System::Security::Cryptography::KeyedHashAlgorithm {
    public:
    // private System.Int32 blockSizeValue
    // Size: 0x4
    // Offset: 0x30
    int blockSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blockSizeValue and: m_hashName
    char __padding0[0x4] = {};
    // System.String m_hashName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_hashName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Security.Cryptography.HashAlgorithm m_hash1
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::HashAlgorithm* m_hash1;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // System.Security.Cryptography.HashAlgorithm m_hash2
    // Size: 0x8
    // Offset: 0x48
    System::Security::Cryptography::HashAlgorithm* m_hash2;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // private System.Byte[] m_inner
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* m_inner;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] m_outer
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* m_outer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean m_hashing
    // Size: 0x1
    // Offset: 0x60
    bool m_hashing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HMAC
    HMAC(int blockSizeValue_ = {}, ::Il2CppString* m_hashName_ = {}, System::Security::Cryptography::HashAlgorithm* m_hash1_ = {}, System::Security::Cryptography::HashAlgorithm* m_hash2_ = {}, ::Array<uint8_t>* m_inner_ = {}, ::Array<uint8_t>* m_outer_ = {}, bool m_hashing_ = {}) noexcept : blockSizeValue{blockSizeValue_}, m_hashName{m_hashName_}, m_hash1{m_hash1_}, m_hash2{m_hash2_}, m_inner{m_inner_}, m_outer{m_outer_}, m_hashing{m_hashing_} {}
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // protected System.Int32 get_BlockSizeValue()
    // Offset: 0x1696A88
    int get_BlockSizeValue();
    // protected System.Void set_BlockSizeValue(System.Int32 value)
    // Offset: 0x1696A90
    void set_BlockSizeValue(int value);
    // private System.Void UpdateIOPadBuffers()
    // Offset: 0x1696A98
    void UpdateIOPadBuffers();
    // System.Void InitializeKey(System.Byte[] key)
    // Offset: 0x1696C3C
    void InitializeKey(::Array<uint8_t>* key);
    // static public System.Security.Cryptography.HMAC Create()
    // Offset: 0x1696FAC
    static System::Security::Cryptography::HMAC* Create();
    // public override System.Byte[] get_Key()
    // Offset: 0x1696E84
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Byte[] KeyedHashAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x1696F04
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // public override System.Void Initialize()
    // Offset: 0x1697050
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ib, System.Int32 cb)
    // Offset: 0x16970A4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ib, System.Int32 cb)
    void HashCore(::Array<uint8_t>* rgb, int ib, int cb);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1697320
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16976AC
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected System.Void .ctor()
    // Offset: 0x1697874
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAC* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HMAC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAC*, creationType>()));
    }
  }; // System.Security.Cryptography.HMAC
  static check_size<sizeof(HMAC), 96 + sizeof(bool)> __System_Security_Cryptography_HMACSizeCheck;
  static_assert(sizeof(HMAC) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMAC*, "System.Security.Cryptography", "HMAC");
#pragma pack(pop)
