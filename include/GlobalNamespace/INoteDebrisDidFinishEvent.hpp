// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteDebris
  class NoteDebris;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteDebrisDidFinishEvent
  class INoteDebrisDidFinishEvent {
    public:
    // Creating value type constructor for type: INoteDebrisDidFinishEvent
    INoteDebrisDidFinishEvent() noexcept {}
    // public System.Void HandleNoteDebrisDidFinish(NoteDebris noteDebris)
    // Offset: 0xFFFFFFFF
    void HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris* noteDebris);
  }; // INoteDebrisDidFinishEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteDebrisDidFinishEvent*, "", "INoteDebrisDidFinishEvent");
