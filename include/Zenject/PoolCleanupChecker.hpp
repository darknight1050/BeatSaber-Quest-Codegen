// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolCleanupChecker
  class PoolCleanupChecker : public Zenject::ILateDisposable, public ::Il2CppObject {
    public:
    // Nested type: Zenject::PoolCleanupChecker::$$c
    class $$c;
    // private readonly System.Collections.Generic.List`1<Zenject.IMemoryPool> _poolFactories
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::IMemoryPool*>* poolFactories;
    // private readonly System.Collections.Generic.List`1<System.Type> _ignoredPools
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Type*>* ignoredPools;
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IMemoryPool> poolFactories, System.Collections.Generic.List`1<System.Type> ignoredPools)
    // Offset: 0xF1F824
    static PoolCleanupChecker* New_ctor(System::Collections::Generic::List_1<Zenject::IMemoryPool*>* poolFactories, System::Collections::Generic::List_1<System::Type*>* ignoredPools);
    // public System.Void LateDispose()
    // Offset: 0xF1F958
    // Implemented from: Zenject.ILateDisposable
    // Base method: System.Void ILateDisposable::LateDispose()
    void LateDispose();
  }; // Zenject.PoolCleanupChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolCleanupChecker*, "Zenject", "PoolCleanupChecker");
#pragma pack(pop)
