// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerConnection
#include "UnityEngine/Networking/PlayerConnection/PlayerConnection.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x20
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D4EE00
  class PlayerConnection::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // public System.Guid messageId
    // Size: 0x10
    // Offset: 0x10
    System::Guid messageId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass12_0
    $$c__DisplayClass12_0(System::Guid messageId_ = {}) noexcept : messageId{messageId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return messageId;
    }
    // System.Boolean <Register>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers x)
    // Offset: 0x172EE7C
    bool $Register$b__0(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers* x);
    // public System.Void .ctor()
    // Offset: 0x172DA9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerConnection::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerConnection::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
  static check_size<sizeof(PlayerConnection::$$c__DisplayClass12_0), 16 + sizeof(System::Guid)> __UnityEngine_Networking_PlayerConnection_PlayerConnection_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(PlayerConnection::$$c__DisplayClass12_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass12_0");
#pragma pack(pop)
