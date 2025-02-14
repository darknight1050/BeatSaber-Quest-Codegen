// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
  class PlayerEditorConnectionEvents : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent
    class MessageEvent;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent
    class ConnectionChangeEvent;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers
    class MessageTypeSubscribers;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // public System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> messageTypeSubscribers
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>* messageTypeSubscribers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>*) == 0x8);
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent connectionEvent
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* connectionEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*) == 0x8);
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent disconnectionEvent
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* disconnectionEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*) == 0x8);
    // Creating value type constructor for type: PlayerEditorConnectionEvents
    PlayerEditorConnectionEvents(System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>* messageTypeSubscribers_ = {}, UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* connectionEvent_ = {}, UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* disconnectionEvent_ = {}) noexcept : messageTypeSubscribers{messageTypeSubscribers_}, connectionEvent{connectionEvent_}, disconnectionEvent{disconnectionEvent_} {}
    // public System.Void InvokeMessageIdSubscribers(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x1C0036C
    void InvokeMessageIdSubscribers(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // public UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> AddAndCreate(System.Guid messageId)
    // Offset: 0x1BFF618
    UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(System::Guid messageId);
    // public System.Void UnregisterManagedCallback(System.Guid messageId, UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> callback)
    // Offset: 0x1BFF904
    void UnregisterManagedCallback(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);
    // public System.Void .ctor()
    // Offset: 0x1C008D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerEditorConnectionEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerEditorConnectionEvents*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
  #pragma pack(pop)
  static check_size<sizeof(PlayerEditorConnectionEvents), 32 + sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*)> __UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEventsSizeCheck;
  static_assert(sizeof(PlayerEditorConnectionEvents) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
