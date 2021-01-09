// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x20
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.MessageEventArgs
  // [] Offset: FFFFFFFF
  class MessageEventArgs : public ::Il2CppObject {
    public:
    // public System.Int32 playerId
    // Size: 0x4
    // Offset: 0x10
    int playerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: playerId and: data
    char __padding0[0x4] = {};
    // public System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: MessageEventArgs
    MessageEventArgs(int playerId_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : playerId{playerId_}, data{data_} {}
    // public System.Void .ctor()
    // Offset: 0x172D468
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::MessageEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageEventArgs*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.MessageEventArgs
  static check_size<sizeof(MessageEventArgs), 24 + sizeof(::Array<uint8_t>*)> __UnityEngine_Networking_PlayerConnection_MessageEventArgsSizeCheck;
  static_assert(sizeof(MessageEventArgs) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::MessageEventArgs*, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
#pragma pack(pop)
