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
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BaseNoteVisuals
  class BaseNoteVisuals : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteControllerDidInitEvent, public GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*/ {
    public:
    // private NoteControllerBase _noteController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteControllerBase* noteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteControllerBase*) == 0x8);
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    // Creating value type constructor for type: BaseNoteVisuals
    BaseNoteVisuals(GlobalNamespace::NoteControllerBase* noteController_ = {}, GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect_ = {}) noexcept : noteController{noteController_}, cutoutAnimateEffect{cutoutAnimateEffect_} {}
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
    // Offset: 0x119EFE0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x119F130
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x119F2C8
    void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteControllerBase noteController, System.Single duration)
    // Offset: 0x119F2E4
    void HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase* noteController, float duration);
    // private System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x119F2F4
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x119F31C
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
