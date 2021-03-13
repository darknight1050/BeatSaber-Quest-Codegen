// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type2Message
  // [] Offset: FFFFFFFF
  class Type2Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private System.Byte[] _nonce
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* nonce;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String _targetName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* targetName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] _targetInfo
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* targetInfo;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Type2Message
    Type2Message(::Array<uint8_t>* nonce_ = {}, ::Il2CppString* targetName_ = {}, ::Array<uint8_t>* targetInfo_ = {}) noexcept : nonce{nonce_}, targetName{targetName_}, targetInfo{targetInfo_} {}
    // public System.Void .ctor(System.Byte[] message)
    // Offset: 0x1B9555C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type2Message* New_ctor(::Array<uint8_t>* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Protocol::Ntlm::Type2Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type2Message*, creationType>(message)));
    }
    // public System.Byte[] get_Nonce()
    // Offset: 0x1B945A0
    ::Array<uint8_t>* get_Nonce();
    // public System.String get_TargetName()
    // Offset: 0x1B95680
    ::Il2CppString* get_TargetName();
    // public System.Byte[] get_TargetInfo()
    // Offset: 0x1B94520
    ::Array<uint8_t>* get_TargetInfo();
    // protected override System.Void Finalize()
    // Offset: 0x1B95604
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize_NEW()
    void Finalize();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x1B95688
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode_NEW(System.Byte[] message)
    void Decode(::Array<uint8_t>* message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x1B95810
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes_NEW()
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type2Message
  #pragma pack(pop)
  static check_size<sizeof(Type2Message), 40 + sizeof(::Array<uint8_t>*)> __Mono_Security_Protocol_Ntlm_Type2MessageSizeCheck;
  static_assert(sizeof(Type2Message) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type2Message*, "Mono.Security.Protocol.Ntlm", "Type2Message");
