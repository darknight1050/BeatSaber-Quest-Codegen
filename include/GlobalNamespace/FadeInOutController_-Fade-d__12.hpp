// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: FadeInOutController
#include "GlobalNamespace/FadeInOutController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FadeInOutController/<Fade>d__12
  class FadeInOutController::$Fade$d__12 : public ::CsObject, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::CsObject* $$2__current;
    // public System.Single startDelay
    // Offset: 0x20
    float startDelay;
    // public FadeInOutController <>4__this
    // Offset: 0x28
    GlobalNamespace::FadeInOutController* $$4__this;
    // public System.Single fromValue
    // Offset: 0x30
    float fromValue;
    // public System.Single toValue
    // Offset: 0x34
    float toValue;
    // public UnityEngine.AnimationCurve curve
    // Offset: 0x38
    UnityEngine::AnimationCurve* curve;
    // public System.Single duration
    // Offset: 0x40
    float duration;
    // private System.Single <elapsedTime>5__2
    // Offset: 0x44
    float $elapsedTime$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xC9AED0
    static FadeInOutController::$Fade$d__12* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xC9AF18
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xC9AF1C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xC9B0E4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xC9B0EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xC9B14C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
  }; // FadeInOutController/<Fade>d__12
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOutController::$Fade$d__12*, "", "FadeInOutController/<Fade>d__12");
#pragma pack(pop)
