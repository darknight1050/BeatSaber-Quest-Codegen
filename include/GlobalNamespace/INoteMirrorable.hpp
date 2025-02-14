// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: INoteControllerNoteDidStartDissolvingEvent
  class INoteControllerNoteDidStartDissolvingEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteMirrorable
  class INoteMirrorable {
    public:
    // Creating value type constructor for type: INoteMirrorable
    INoteMirrorable() noexcept {}
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* get_transform();
    // public UnityEngine.Transform get_noteTransform()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* get_noteTransform();
    // public NoteData get_noteData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteData* get_noteData();
    // public ILazyCopyHashSet`1<INoteControllerNoteDidStartDissolvingEvent> get_noteDidStartDissolvingEvent()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();
  }; // INoteMirrorable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteMirrorable*, "", "INoteMirrorable");
