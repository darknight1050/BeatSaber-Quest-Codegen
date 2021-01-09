// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
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
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/<DoVerticalTransition>d__6
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA6440
  class ViewControllerTransitionHelpers::$DoVerticalTransition$d__6 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x28
    HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Single moveOffsetMultiplier
    // Size: 0x4
    // Offset: 0x30
    float moveOffsetMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveOffsetMultiplier and: $$8__1
    char __padding4[0x4] = {};
    // private HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass6_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0* $$8__1;
    // Field size check
    static_assert(sizeof(HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0*) == 0x8);
    // Creating value type constructor for type: $DoVerticalTransition$d__6
    $DoVerticalTransition$d__6(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::ViewController* toPresentViewController_ = {}, HMUI::ViewController* toDismissViewController_ = {}, float moveOffsetMultiplier_ = {}, HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0* $$8__1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, toPresentViewController{toPresentViewController_}, toDismissViewController{toDismissViewController_}, moveOffsetMultiplier{moveOffsetMultiplier_}, $$8__1{$$8__1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x198233C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$DoVerticalTransition$d__6* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1982D20
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1982D24
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1982EBC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1982EC4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1982F24
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ViewControllerTransitionHelpers/<DoVerticalTransition>d__6
  static check_size<sizeof(ViewControllerTransitionHelpers::$DoVerticalTransition$d__6), 56 + sizeof(HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0*)> __HMUI_ViewControllerTransitionHelpers_$DoVerticalTransition$d__6SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$DoVerticalTransition$d__6) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*, "HMUI", "ViewControllerTransitionHelpers/<DoVerticalTransition>d__6");
#pragma pack(pop)
