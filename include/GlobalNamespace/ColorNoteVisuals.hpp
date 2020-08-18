// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorNoteVisuals
  class ColorNoteVisuals : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _arrowGlowIntensity
    // Offset: 0x18
    float arrowGlowIntensity;
    // private NoteController _noteController
    // Offset: 0x20
    GlobalNamespace::NoteController* noteController;
    // private UnityEngine.SpriteRenderer _arrowGlowSpriteRenderer
    // Offset: 0x28
    UnityEngine::SpriteRenderer* arrowGlowSpriteRenderer;
    // private UnityEngine.SpriteRenderer _circleGlowSpriteRenderer
    // Offset: 0x30
    UnityEngine::SpriteRenderer* circleGlowSpriteRenderer;
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Offset: 0x38
    ::Array<GlobalNamespace::MaterialPropertyBlockController*>* materialPropertyBlockControllers;
    // private UnityEngine.MeshRenderer _arrowMeshRenderer
    // Offset: 0x40
    UnityEngine::MeshRenderer* arrowMeshRenderer;
    // private ColorManager _colorManager
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // private System.Action`2<ColorNoteVisuals,NoteController> didInitEvent
    // Offset: 0x50
    System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* didInitEvent;
    // private UnityEngine.Color _noteColor
    // Offset: 0x58
    UnityEngine::Color noteColor;
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // public System.Void add_didInitEvent(System.Action`2<ColorNoteVisuals,NoteController> value)
    // Offset: 0x18E7164
    void add_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value);
    // public System.Void remove_didInitEvent(System.Action`2<ColorNoteVisuals,NoteController> value)
    // Offset: 0x18E7208
    void remove_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value);
    // public UnityEngine.Color get_noteColor()
    // Offset: 0x18E72AC
    UnityEngine::Color get_noteColor();
    // private System.Void set_showArrow(System.Boolean value)
    // Offset: 0x18E72B8
    void set_showArrow(bool value);
    // private System.Void set_showCircle(System.Boolean value)
    // Offset: 0x18E7300
    void set_showCircle(bool value);
    // protected System.Void Awake()
    // Offset: 0x18E7320
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x18E7444
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInitEvent(NoteController noteController)
    // Offset: 0x18E7564
    void HandleNoteControllerDidInitEvent(GlobalNamespace::NoteController* noteController);
    // private System.Boolean NoteIsOnDifferentSide(NoteData noteData)
    // Offset: 0x18E7768
    bool NoteIsOnDifferentSide(GlobalNamespace::NoteData* noteData);
    // private System.Void HandleNoteControllerNoteDidPassJumpThreeQuartersEvent(NoteController noteController)
    // Offset: 0x18E77B0
    void HandleNoteControllerNoteDidPassJumpThreeQuartersEvent(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidStartDissolvingEvent(NoteController noteController, System.Single duration)
    // Offset: 0x18E77E8
    void HandleNoteDidStartDissolvingEvent(GlobalNamespace::NoteController* noteController, float duration);
    // public System.Void .ctor()
    // Offset: 0x18E782C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorNoteVisuals* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x18E7840
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ColorNoteVisuals
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorNoteVisuals*, "", "ColorNoteVisuals");
#pragma pack(pop)
