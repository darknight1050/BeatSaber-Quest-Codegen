// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.MD2
#include "Mono/Security/Cryptography/MD2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD2Managed
  // [] Offset: FFFFFFFF
  class MD2Managed : public Mono::Security::Cryptography::MD2 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Byte[] state
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* state;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] checksum
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* checksum;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x40
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: count and: x
    char __padding3[0x4] = {};
    // private System.Byte[] x
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* x;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: MD2Managed
    MD2Managed(::Array<uint8_t>* state_ = {}, ::Array<uint8_t>* checksum_ = {}, ::Array<uint8_t>* buffer_ = {}, int count_ = {}, ::Array<uint8_t>* x_ = {}) noexcept : state{state_}, checksum{checksum_}, buffer{buffer_}, count{count_}, x{x_} {}
    // Get static field: static private readonly System.Byte[] PI_SUBST
    static ::Array<uint8_t>* _get_PI_SUBST();
    // Set static field: static private readonly System.Byte[] PI_SUBST
    static void _set_PI_SUBST(::Array<uint8_t>* value);
    // private System.Byte[] Padding(System.Int32 nLength)
    // Offset: 0x1B8CEC4
    ::Array<uint8_t>* Padding(int nLength);
    // private System.Void MD2Transform(System.Byte[] state, System.Byte[] checksum, System.Byte[] block, System.Int32 index)
    // Offset: 0x1B8D0B0
    void MD2Transform(::Array<uint8_t>* state, ::Array<uint8_t>* checksum, ::Array<uint8_t>* block, int index);
    // static private System.Void .cctor()
    // Offset: 0x1B8D438
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1B8CE18
    // Implemented from: Mono.Security.Cryptography.MD2
    // Base method: System.Void MD2::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD2Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::MD2Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD2Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1B8CF70
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize_NEW()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1B8CFDC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore_NEW(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* array, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1B8D340
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal_NEW()
    ::Array<uint8_t>* HashFinal();
  }; // Mono.Security.Cryptography.MD2Managed
  #pragma pack(pop)
  static check_size<sizeof(MD2Managed), 72 + sizeof(::Array<uint8_t>*)> __Mono_Security_Cryptography_MD2ManagedSizeCheck;
  static_assert(sizeof(MD2Managed) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD2Managed*, "Mono.Security.Cryptography", "MD2Managed");
