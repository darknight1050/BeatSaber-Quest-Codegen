// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  // Autogenerated type: Zenject.InjectContext/<get_ParentContexts>d__52
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93CB8
  class InjectContext::$get_ParentContexts$d__52 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>, public System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private Zenject.InjectContext <>2__current
    // Size: 0x8
    // Offset: 0x18
    Zenject::InjectContext* $$2__current;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Zenject.InjectContext <>4__this
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*) == 0x8);
    // Creating value type constructor for type: $get_ParentContexts$d__52
    $get_ParentContexts$d__52(int $$1__state_ = {}, Zenject::InjectContext* $$2__current_ = {}, int $$l__initialThreadId_ = {}, Zenject::InjectContext* $$4__this_ = {}, System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>
    operator System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>
    operator System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12A0950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext::$get_ParentContexts$d__52* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::$get_ParentContexts$d__52::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext::$get_ParentContexts$d__52*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x12A15E0
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12A15C4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12A16A0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private Zenject.InjectContext System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current()
    // Offset: 0x12A1988
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    Zenject::InjectContext* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12A1990
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12A19F0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator()
    // Offset: 0x12A19F8
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12A1AAC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.InjectContext/<get_ParentContexts>d__52
  static check_size<sizeof(InjectContext::$get_ParentContexts$d__52), 48 + sizeof(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*)> __Zenject_InjectContext_$get_ParentContexts$d__52SizeCheck;
  static_assert(sizeof(InjectContext::$get_ParentContexts$d__52) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext::$get_ParentContexts$d__52*, "Zenject", "InjectContext/<get_ParentContexts>d__52");
#pragma pack(pop)
