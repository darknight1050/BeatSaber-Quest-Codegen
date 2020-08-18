// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissedNoteEffect
  class MissedNoteEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissedNoteEffect::Pool
    class Pool;
    // private FloatSO _songTime
    // Offset: 0x18
    GlobalNamespace::FloatSO* songTime;
    // private UnityEngine.AnimationClip _animationClip
    // Offset: 0x20
    UnityEngine::AnimationClip* animationClip;
    // private UnityEngine.SpriteRenderer[] _spriteRenderers
    // Offset: 0x28
    ::Array<UnityEngine::SpriteRenderer*>* spriteRenderers;
    // private System.Action`1<MissedNoteEffect> didFinishEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::MissedNoteEffect*>* didFinishEvent;
    // private System.Single _animationDuration
    // Offset: 0x38
    float animationDuration;
    // private System.Single _startAnimationTime
    // Offset: 0x3C
    float startAnimationTime;
    // public System.Void add_didFinishEvent(System.Action`1<MissedNoteEffect> value)
    // Offset: 0x1948850
    void add_didFinishEvent(System::Action_1<GlobalNamespace::MissedNoteEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<MissedNoteEffect> value)
    // Offset: 0x19488F4
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::MissedNoteEffect*>* value);
    // protected System.Void Awake()
    // Offset: 0x1948998
    void Awake();
    // protected System.Void Update()
    // Offset: 0x194899C
    void Update();
    // public System.Void Init(NoteData noteData, System.Single animationDuration, System.Single startAnimationTime)
    // Offset: 0x1948AC4
    void Init(GlobalNamespace::NoteData* noteData, float animationDuration, float startAnimationTime);
    // public System.Void .ctor()
    // Offset: 0x1948B04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissedNoteEffect* New_ctor();
  }; // MissedNoteEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissedNoteEffect*, "", "MissedNoteEffect");
#pragma pack(pop)
