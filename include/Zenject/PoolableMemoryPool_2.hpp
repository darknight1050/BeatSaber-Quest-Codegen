// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPool`2
#include "Zenject/MemoryPool_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableMemoryPool`2
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class PoolableMemoryPool_2 : public Zenject::MemoryPool_2<TParam1, TValue> {
    public:
    // Creating value type constructor for type: PoolableMemoryPool_2
    PoolableMemoryPool_2() noexcept {}
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_2::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected override System.Void Reinitialize(TParam1 p1, TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`2
    // Base method: System.Void MemoryPool_2::Reinitialize_NEW(TParam1 p1, TValue item)
    void Reinitialize(TParam1 p1, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_2::Reinitialize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(p1, item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, p1, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`2
    // Base method: System.Void MemoryPool_2::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPool_2<TParam1, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPool_2<TParam1, TValue>*, creationType>()));
    }
  }; // Zenject.PoolableMemoryPool`2
  // Could not write size check! Type: Zenject.PoolableMemoryPool`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_2, "Zenject", "PoolableMemoryPool`2");
