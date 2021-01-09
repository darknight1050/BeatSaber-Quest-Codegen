// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509Extension
#include "Mono/Security/X509/X509Extension.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.X509.Extensions
namespace Mono::Security::X509::Extensions {
  // Size: 0x30
  // Autogenerated type: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
  // [] Offset: FFFFFFFF
  class AuthorityKeyIdentifierExtension : public Mono::Security::X509::X509Extension {
    public:
    // private System.Byte[] aki
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* aki;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: AuthorityKeyIdentifierExtension
    AuthorityKeyIdentifierExtension(::Array<uint8_t>* aki_ = {}) noexcept : aki{aki_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return aki;
    }
    // public System.Byte[] get_Identifier()
    // Offset: 0x17BD1FC
    ::Array<uint8_t>* get_Identifier();
    // public System.Void .ctor(Mono.Security.X509.X509Extension extension)
    // Offset: 0x17BCF7C
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::.ctor(Mono.Security.X509.X509Extension extension)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthorityKeyIdentifierExtension* New_ctor(Mono::Security::X509::X509Extension* extension) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthorityKeyIdentifierExtension*, creationType>(extension)));
    }
    // protected override System.Void Decode()
    // Offset: 0x17BCF84
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::Decode()
    void Decode();
    // protected override System.Void Encode()
    // Offset: 0x17BD0AC
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::Encode()
    void Encode();
    // public override System.String ToString()
    // Offset: 0x17BD278
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.String X509Extension::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
  static check_size<sizeof(AuthorityKeyIdentifierExtension), 40 + sizeof(::Array<uint8_t>*)> __Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtensionSizeCheck;
  static_assert(sizeof(AuthorityKeyIdentifierExtension) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
#pragma pack(pop)
