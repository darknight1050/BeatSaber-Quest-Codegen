// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMMainThreadDispatcher
#include "GlobalNamespace/HMMainThreadDispatcher.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMMainThreadDispatcher/<ActionCoroutine>d__4
  // [CompilerGeneratedAttribute] Offset: DE333C
  class HMMainThreadDispatcher::$ActionCoroutine$d__4 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Action action
    // Size: 0x8
    // Offset: 0x20
    System::Action* action;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $ActionCoroutine$d__4
    $ActionCoroutine$d__4(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Action* action_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, action{action_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x122E4CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMMainThreadDispatcher::$ActionCoroutine$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMMainThreadDispatcher::$ActionCoroutine$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x122E600
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x122E604
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x122E668
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x122E670
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x122E6D0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMMainThreadDispatcher/<ActionCoroutine>d__4
  #pragma pack(pop)
  static check_size<sizeof(HMMainThreadDispatcher::$ActionCoroutine$d__4), 32 + sizeof(System::Action*)> __GlobalNamespace_HMMainThreadDispatcher_$ActionCoroutine$d__4SizeCheck;
  static_assert(sizeof(HMMainThreadDispatcher::$ActionCoroutine$d__4) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*, "", "HMMainThreadDispatcher/<ActionCoroutine>d__4");
