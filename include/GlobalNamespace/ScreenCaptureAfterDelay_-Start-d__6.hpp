// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: ScreenCaptureAfterDelay
#include "GlobalNamespace/ScreenCaptureAfterDelay.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScreenCaptureAfterDelay/<Start>d__6
  class ScreenCaptureAfterDelay::$Start$d__6 : public ::CsObject, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::CsObject* $$2__current;
    // public ScreenCaptureAfterDelay <>4__this
    // Offset: 0x20
    GlobalNamespace::ScreenCaptureAfterDelay* $$4__this;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x18FB06C
    static ScreenCaptureAfterDelay::$Start$d__6* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x18FB47C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x18FB480
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x18FB650
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x18FB658
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x18FB6B8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
  }; // ScreenCaptureAfterDelay/<Start>d__6
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureAfterDelay::$Start$d__6*, "", "ScreenCaptureAfterDelay/<Start>d__6");
#pragma pack(pop)
