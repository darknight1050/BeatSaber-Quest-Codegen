// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
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
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/<GetDependencyContracts>d__96
  // [CompilerGeneratedAttribute] Offset: DDE4D8
  class DiContainer::$GetDependencyContracts$d__96 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Type <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Type* $$2__current;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Zenject.DiContainer <>4__this
    // Size: 0x8
    // Offset: 0x28
    Zenject::DiContainer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private System.Type contract
    // Size: 0x8
    // Offset: 0x30
    System::Type* contract;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Type <>3__contract
    // Size: 0x8
    // Offset: 0x38
    System::Type* $$3__contract;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> <>7__wrap1
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo*>*) == 0x8);
    // Creating value type constructor for type: $GetDependencyContracts$d__96
    $GetDependencyContracts$d__96(int $$1__state_ = {}, System::Type* $$2__current_ = {}, int $$l__initialThreadId_ = {}, Zenject::DiContainer* $$4__this_ = {}, System::Type* contract_ = {}, System::Type* $$3__contract_ = {}, System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, contract{contract_}, $$3__contract{$$3__contract_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Type*>
    operator System::Collections::Generic::IEnumerable_1<System::Type*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Type*>
    operator System::Collections::Generic::IEnumerator_1<System::Type*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x161B150
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$GetDependencyContracts$d__96* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$GetDependencyContracts$d__96::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$GetDependencyContracts$d__96*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x161B188
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x161B264
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x161B1A4
    void $$m__Finally1();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0x161B530
    System::Type* System_Collections_Generic_IEnumerator$System_Type$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x161B538
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x161B598
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0x161B5A0
    System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x161B654
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.DiContainer/<GetDependencyContracts>d__96
  #pragma pack(pop)
  static check_size<sizeof(DiContainer::$GetDependencyContracts$d__96), 64 + sizeof(System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo*>*)> __Zenject_DiContainer_$GetDependencyContracts$d__96SizeCheck;
  static_assert(sizeof(DiContainer::$GetDependencyContracts$d__96) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer::$GetDependencyContracts$d__96*, "Zenject", "DiContainer/<GetDependencyContracts>d__96");
