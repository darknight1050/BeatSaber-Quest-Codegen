// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x28
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type1Message
  // [] Offset: FFFFFFFF
  class Type1Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private System.String _host
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _domain
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* domain;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Type1Message
    Type1Message(::Il2CppString* host_ = {}, ::Il2CppString* domain_ = {}) noexcept : host{host_}, domain{domain_} {}
    // public System.Void set_Domain(System.String value)
    // Offset: 0x17BBA88
    void set_Domain(::Il2CppString* value);
    // public System.Void set_Host(System.String value)
    // Offset: 0x17BBB18
    void set_Host(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x17BB9DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type1Message* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Protocol::Ntlm::Type1Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type1Message*, creationType>()));
    }
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x17BBBA8
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::Array<uint8_t>* message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x17BBCB4
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type1Message
  static check_size<sizeof(Type1Message), 32 + sizeof(::Il2CppString*)> __Mono_Security_Protocol_Ntlm_Type1MessageSizeCheck;
  static_assert(sizeof(Type1Message) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type1Message*, "Mono.Security.Protocol.Ntlm", "Type1Message");
#pragma pack(pop)
