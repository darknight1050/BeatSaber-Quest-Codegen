// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IBindingFinalizer
  class IBindingFinalizer;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.BindStatement
  // [NoReflectionBakingAttribute] Offset: DDC5D0
  class BindStatement : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly System.Collections.Generic.List`1<System.IDisposable> _disposables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::IDisposable*>* disposables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::IDisposable*>*) == 0x8);
    // private Zenject.IBindingFinalizer _bindingFinalizer
    // Size: 0x8
    // Offset: 0x18
    Zenject::IBindingFinalizer* bindingFinalizer;
    // Field size check
    static_assert(sizeof(Zenject::IBindingFinalizer*) == 0x8);
    // Creating value type constructor for type: BindStatement
    BindStatement(System::Collections::Generic::List_1<System::IDisposable*>* disposables_ = {}, Zenject::IBindingFinalizer* bindingFinalizer_ = {}) noexcept : disposables{disposables_}, bindingFinalizer{bindingFinalizer_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0x136DFAC
    Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // public System.Boolean get_HasFinalizer()
    // Offset: 0x136E0CC
    bool get_HasFinalizer();
    // public System.Void SetFinalizer(Zenject.IBindingFinalizer bindingFinalizer)
    // Offset: 0x136E0DC
    void SetFinalizer(Zenject::IBindingFinalizer* bindingFinalizer);
    // private System.Void AssertHasFinalizer()
    // Offset: 0x136E064
    void AssertHasFinalizer();
    // public System.Void AddDisposable(System.IDisposable disposable)
    // Offset: 0x136E0E4
    void AddDisposable(System::IDisposable* disposable);
    // public Zenject.BindInfo SpawnBindInfo()
    // Offset: 0x136E14C
    Zenject::BindInfo* SpawnBindInfo();
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x136E1C8
    void FinalizeBinding(Zenject::DiContainer* container);
    // public System.Void Reset()
    // Offset: 0x136DEA0
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x136E294
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x136DE28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindStatement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindStatement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindStatement*, creationType>()));
    }
  }; // Zenject.BindStatement
  #pragma pack(pop)
  static check_size<sizeof(BindStatement), 24 + sizeof(Zenject::IBindingFinalizer*)> __Zenject_BindStatementSizeCheck;
  static_assert(sizeof(BindStatement) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindStatement*, "Zenject", "BindStatement");
