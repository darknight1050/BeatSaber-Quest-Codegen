// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IConnectedPlayerNoteEventManager
  class IConnectedPlayerNoteEventManager {
    public:
    // Creating value type constructor for type: IConnectedPlayerNoteEventManager
    IConnectedPlayerNoteEventManager() noexcept {}
    // public System.Void add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0xFFFFFFFF
    void add_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0xFFFFFFFF
    void remove_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0xFFFFFFFF
    void add_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0xFFFFFFFF
    void remove_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
  }; // IConnectedPlayerNoteEventManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnectedPlayerNoteEventManager*, "", "IConnectedPlayerNoteEventManager");
