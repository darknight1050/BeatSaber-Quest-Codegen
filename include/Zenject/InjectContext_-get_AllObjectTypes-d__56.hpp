// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerator`1 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectContext/<get_AllObjectTypes>d__56
  class InjectContext::$get_AllObjectTypes$d__56 : public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>, public ::Il2CppObject {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Type <>2__current
    // Offset: 0x18
    System::Type* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public Zenject.InjectContext <>4__this
    // Offset: 0x28
    Zenject::InjectContext* $$4__this;
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> <>7__wrap1
    // Offset: 0x30
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* $$7__wrap1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xE97B0C
    static InjectContext::$get_AllObjectTypes$d__56* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xE98120
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE98104
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE981E0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0xE984D0
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    System::Type* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE984D8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE98538
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0xE98540
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xE985F4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.InjectContext/<get_AllObjectTypes>d__56
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext::$get_AllObjectTypes$d__56*, "Zenject", "InjectContext/<get_AllObjectTypes>d__56");
#pragma pack(pop)
