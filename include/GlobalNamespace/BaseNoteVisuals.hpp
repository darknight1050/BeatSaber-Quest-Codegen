// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteControllerDidInitEvent
#include "GlobalNamespace/INoteControllerDidInitEvent.hpp"
// Including type: INoteControllerNoteDidStartDissolvingEvent
#include "GlobalNamespace/INoteControllerNoteDidStartDissolvingEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BaseNoteVisuals
  // [] Offset: FFFFFFFF
  class BaseNoteVisuals : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteControllerDidInitEvent, public GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*/ {
    public:
    // private NoteController _noteController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteController* noteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteController*) == 0x8);
    // [SpaceAttribute] Offset: 0xD22A38
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    // Creating value type constructor for type: BaseNoteVisuals
    BaseNoteVisuals(GlobalNamespace::NoteController* noteController_ = {}, GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect_ = {}) noexcept : noteController{noteController_}, cutoutAnimateEffect{cutoutAnimateEffect_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerDidInitEvent
    operator GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
    operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x106202C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1062164
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteController noteController)
    // Offset: 0x10622E4
    void HandleNoteControllerDidInit_NEW(GlobalNamespace::NoteController* noteController);
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteController noteController, System.Single duration)
    // Offset: 0x1062300
    void HandleNoteControllerNoteDidStartDissolving_NEW(GlobalNamespace::NoteController* noteController, float duration);
    // private System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1062310
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x1062338
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNoteVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseNoteVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNoteVisuals*, creationType>()));
    }
  }; // BaseNoteVisuals
  #pragma pack(pop)
  static check_size<sizeof(BaseNoteVisuals), 32 + sizeof(GlobalNamespace::CutoutAnimateEffect*)> __GlobalNamespace_BaseNoteVisualsSizeCheck;
  static_assert(sizeof(BaseNoteVisuals) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNoteVisuals*, "", "BaseNoteVisuals");
