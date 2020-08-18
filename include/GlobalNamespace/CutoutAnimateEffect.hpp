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
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CutoutAnimateEffect
  class CutoutAnimateEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7
    class $AnimateToCutoutCoroutine$d__7;
    // private CutoutEffect[] _cuttoutEffects
    // Offset: 0x18
    ::Array<GlobalNamespace::CutoutEffect*>* cuttoutEffects;
    // private UnityEngine.AnimationCurve _transitionCurve
    // Offset: 0x20
    UnityEngine::AnimationCurve* transitionCurve;
    // private System.Boolean <animating>k__BackingField
    // Offset: 0x28
    bool animating;
    // public System.Boolean get_animating()
    // Offset: 0x1928D50
    bool get_animating();
    // private System.Void set_animating(System.Boolean value)
    // Offset: 0x1928D58
    void set_animating(bool value);
    // protected System.Void Start()
    // Offset: 0x1928D64
    void Start();
    // private System.Collections.IEnumerator AnimateToCutoutCoroutine(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1928DE4
    System::Collections::IEnumerator* AnimateToCutoutCoroutine(float cutoutStart, float cutoutEnd, float duration);
    // private System.Void SetCutout(System.Single cutout)
    // Offset: 0x1928D6C
    void SetCutout(float cutout);
    // public System.Void ResetEffect()
    // Offset: 0x1928F78
    void ResetEffect();
    // public System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1928FA8
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x1929008
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CutoutAnimateEffect* New_ctor();
  }; // CutoutAnimateEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutAnimateEffect*, "", "CutoutAnimateEffect");
#pragma pack(pop)
