// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteWasMissedEvent
  // [] Offset: FFFFFFFF
  class INoteControllerNoteWasMissedEvent {
    public:
    // Creating value type constructor for type: INoteControllerNoteWasMissedEvent
    INoteControllerNoteWasMissedEvent() noexcept {}
    // public System.Void HandleNoteControllerNoteWasMissed(NoteController noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteWasMissed_NEW(GlobalNamespace::NoteController* noteController);
  }; // INoteControllerNoteWasMissedEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteWasMissedEvent*, "", "INoteControllerNoteWasMissedEvent");
