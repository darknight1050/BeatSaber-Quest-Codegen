// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SHA512
#include "System/Security/Cryptography/SHA512.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  // Autogenerated type: System.Security.Cryptography.SHA512Managed
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A624
  class SHA512Managed : public System::Security::Cryptography::SHA512 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt64 _count
    // Size: 0x8
    // Offset: 0x30
    uint64_t count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64[] _stateSHA512
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint64_t>* stateSHA512;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64[] _W
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint64_t>* W;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: SHA512Managed
    SHA512Managed(::Array<uint8_t>* buffer_ = {}, uint64_t count_ = {}, ::Array<uint64_t>* stateSHA512_ = {}, ::Array<uint64_t>* W_ = {}) noexcept : buffer{buffer_}, count{count_}, stateSHA512{stateSHA512_}, W{W_} {}
    // Get static field: static private readonly System.UInt64[] _K
    static ::Array<uint64_t>* _get__K();
    // Set static field: static private readonly System.UInt64[] _K
    static void _set__K(::Array<uint64_t>* value);
    // private System.Void InitializeState()
    // Offset: 0x127B76C
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x127B920
    void _HashData(::Array<uint8_t>* partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x127BB3C
    ::Array<uint8_t>* _EndHash();
    // static private System.Void SHATransform(System.UInt64* expandedBuffer, System.UInt64* state, System.Byte* block)
    // Offset: 0x127BD04
    static void SHATransform(uint64_t* expandedBuffer, uint64_t* state, uint8_t* block);
    // static private System.UInt64 RotateRight(System.UInt64 x, System.Int32 n)
    // Offset: 0x127C490
    static uint64_t RotateRight(uint64_t x, int n);
    // static private System.UInt64 Ch(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x127C400
    static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Maj(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x127C47C
    static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Sigma_0(System.UInt64 x)
    // Offset: 0x127C410
    static uint64_t Sigma_0(uint64_t x);
    // static private System.UInt64 Sigma_1(System.UInt64 x)
    // Offset: 0x127C394
    static uint64_t Sigma_1(uint64_t x);
    // static private System.UInt64 sigma_0(System.UInt64 x)
    // Offset: 0x127C498
    static uint64_t sigma_0(uint64_t x);
    // static private System.UInt64 sigma_1(System.UInt64 x)
    // Offset: 0x127C504
    static uint64_t sigma_1(uint64_t x);
    // static private System.Void SHA512Expand(System.UInt64* x)
    // Offset: 0x127C2DC
    static void SHA512Expand(uint64_t* x);
    // static private System.Void .cctor()
    // Offset: 0x127C570
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x127B654
    // Implemented from: System.Security.Cryptography.SHA512
    // Base method: System.Void SHA512::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA512Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA512Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA512Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x127B8CC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x127B91C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x127BB38
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // System.Security.Cryptography.SHA512Managed
  static check_size<sizeof(SHA512Managed), 64 + sizeof(::Array<uint64_t>*)> __System_Security_Cryptography_SHA512ManagedSizeCheck;
  static_assert(sizeof(SHA512Managed) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA512Managed*, "System.Security.Cryptography", "SHA512Managed");
#pragma pack(pop)
