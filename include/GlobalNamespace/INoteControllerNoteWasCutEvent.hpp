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
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteWasCutEvent
  // [] Offset: FFFFFFFF
  class INoteControllerNoteWasCutEvent {
    public:
    // Creating value type constructor for type: INoteControllerNoteWasCutEvent
    INoteControllerNoteWasCutEvent() noexcept {}
    // public System.Void HandleNoteControllerNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteWasCut_NEW(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo& noteCutInfo);
  }; // INoteControllerNoteWasCutEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteWasCutEvent*, "", "INoteControllerNoteWasCutEvent");
