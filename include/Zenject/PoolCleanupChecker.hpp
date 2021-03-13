// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PoolCleanupChecker
  // [] Offset: FFFFFFFF
  class PoolCleanupChecker : public ::Il2CppObject/*, public Zenject::ILateDisposable*/ {
    public:
    // Nested type: Zenject::PoolCleanupChecker::$$c
    class $$c;
    // private readonly System.Collections.Generic.List`1<Zenject.IMemoryPool> _poolFactories
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::IMemoryPool*>* poolFactories;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::IMemoryPool*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Type> _ignoredPools
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Type*>* ignoredPools;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Type*>*) == 0x8);
    // Creating value type constructor for type: PoolCleanupChecker
    PoolCleanupChecker(System::Collections::Generic::List_1<Zenject::IMemoryPool*>* poolFactories_ = {}, System::Collections::Generic::List_1<System::Type*>* ignoredPools_ = {}) noexcept : poolFactories{poolFactories_}, ignoredPools{ignoredPools_} {}
    // Creating interface conversion operator: operator Zenject::ILateDisposable
    operator Zenject::ILateDisposable() noexcept {
      return *reinterpret_cast<Zenject::ILateDisposable*>(this);
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IMemoryPool> poolFactories, System.Collections.Generic.List`1<System.Type> ignoredPools)
    // Offset: 0x150C864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolCleanupChecker* New_ctor(System::Collections::Generic::List_1<Zenject::IMemoryPool*>* poolFactories, System::Collections::Generic::List_1<System::Type*>* ignoredPools) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolCleanupChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolCleanupChecker*, creationType>(poolFactories, ignoredPools)));
    }
    // public System.Void LateDispose()
    // Offset: 0x150C974
    void LateDispose_NEW();
  }; // Zenject.PoolCleanupChecker
  #pragma pack(pop)
  static check_size<sizeof(PoolCleanupChecker), 24 + sizeof(System::Collections::Generic::List_1<System::Type*>*)> __Zenject_PoolCleanupCheckerSizeCheck;
  static_assert(sizeof(PoolCleanupChecker) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolCleanupChecker*, "Zenject", "PoolCleanupChecker");
