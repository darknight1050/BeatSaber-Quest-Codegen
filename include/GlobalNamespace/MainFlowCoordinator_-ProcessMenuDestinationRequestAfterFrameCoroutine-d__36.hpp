// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: MainFlowCoordinator
#include "GlobalNamespace/MainFlowCoordinator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__36
  class MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__36 : public ::CsObject, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::CsObject* $$2__current;
    // public MainFlowCoordinator <>4__this
    // Offset: 0x20
    GlobalNamespace::MainFlowCoordinator* $$4__this;
    // public MenuDestination destination
    // Offset: 0x28
    GlobalNamespace::MenuDestination* destination;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xBE9CAC
    static MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__36* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xBE9E70
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xBE9E74
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xBE9EE4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xBE9EEC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xBE9F4C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
  }; // MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__36
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__36*, "", "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__36");
#pragma pack(pop)
