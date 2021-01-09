// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ContainerViewController
#include "HMUI/ContainerViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x60
  // Autogenerated type: HMUI.ContainerViewController/<RemoveViewControllersCoroutine>d__17
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA62C0
  class ContainerViewController::$RemoveViewControllersCoroutine$d__17 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public HMUI.ContainerViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::ContainerViewController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::ContainerViewController*) == 0x8);
    // public HMUI.ViewController[] viewControllersToRemove
    // Size: 0x8
    // Offset: 0x28
    ::Array<HMUI::ViewController*>* viewControllersToRemove;
    // Field size check
    static_assert(sizeof(::Array<HMUI::ViewController*>*) == 0x8);
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x30
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: animationLayouter
    char __padding4[0x7] = {};
    // public System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter
    // Size: 0x8
    // Offset: 0x38
    System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter;
    // Field size check
    static_assert(sizeof(System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x40
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ViewController[] <viewControllers>5__2
    // Size: 0x8
    // Offset: 0x48
    ::Array<HMUI::ViewController*>* $viewControllers$5__2;
    // Field size check
    static_assert(sizeof(::Array<HMUI::ViewController*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<HMUI.ViewController> <viewControllersToRemoveSet>5__3
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<HMUI::ViewController*>* $viewControllersToRemoveSet$5__3;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<HMUI::ViewController*>*) == 0x8);
    // private System.Single <transitionDuration>5__4
    // Size: 0x4
    // Offset: 0x58
    float $transitionDuration$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__5
    // Size: 0x4
    // Offset: 0x5C
    float $elapsedTime$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $RemoveViewControllersCoroutine$d__17
    $RemoveViewControllersCoroutine$d__17(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::ContainerViewController* $$4__this_ = {}, ::Array<HMUI::ViewController*>* viewControllersToRemove_ = {}, bool immediately_ = {}, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter_ = {}, System::Action* finishedCallback_ = {}, ::Array<HMUI::ViewController*>* $viewControllers$5__2_ = {}, System::Collections::Generic::HashSet_1<HMUI::ViewController*>* $viewControllersToRemoveSet$5__3_ = {}, float $transitionDuration$5__4_ = {}, float $elapsedTime$5__5_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, viewControllersToRemove{viewControllersToRemove_}, immediately{immediately_}, animationLayouter{animationLayouter_}, finishedCallback{finishedCallback_}, $viewControllers$5__2{$viewControllers$5__2_}, $viewControllersToRemoveSet$5__3{$viewControllersToRemoveSet$5__3_}, $transitionDuration$5__4{$transitionDuration$5__4_}, $elapsedTime$5__5{$elapsedTime$5__5_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10AB1AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContainerViewController::$RemoveViewControllersCoroutine$d__17* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContainerViewController::$RemoveViewControllersCoroutine$d__17*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10AB6E0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10AB6E4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10ABA04
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10ABA0C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10ABA6C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ContainerViewController/<RemoveViewControllersCoroutine>d__17
  static check_size<sizeof(ContainerViewController::$RemoveViewControllersCoroutine$d__17), 92 + sizeof(float)> __HMUI_ContainerViewController_$RemoveViewControllersCoroutine$d__17SizeCheck;
  static_assert(sizeof(ContainerViewController::$RemoveViewControllersCoroutine$d__17) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__17");
#pragma pack(pop)
