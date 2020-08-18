// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
  class PlayerEditorConnectionEvents::MessageTypeSubscribers : public ::Il2CppObject {
    public:
    // private System.String m_messageTypeId
    // Offset: 0x10
    ::Il2CppString* m_messageTypeId;
    // public System.Int32 subscriberCount
    // Offset: 0x18
    int subscriberCount;
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent messageCallback
    // Offset: 0x20
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent* messageCallback;
    // public System.Guid get_MessageTypeId()
    // Offset: 0x137128C
    System::Guid get_MessageTypeId();
    // public System.Void set_MessageTypeId(System.Guid value)
    // Offset: 0x1371400
    void set_MessageTypeId(System::Guid value);
    // public System.Void .ctor()
    // Offset: 0x137138C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerEditorConnectionEvents::MessageTypeSubscribers* New_ctor();
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageTypeSubscribers");
#pragma pack(pop)
