// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPool`5
#include "Zenject/StaticMemoryPool_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`4<TParam1, TParam2, TParam3, TParam4>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IPoolable_4;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class PoolableStaticMemoryPool_5 : public Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_base_of_v<Zenject::IPoolable_4<TParam1, TParam2, TParam3, TParam4>, std::remove_pointer_t<TValue>>));
    public:
    // static private System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue value)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue value) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), "OnSpawned", p1, p2, p3, p4, value)));
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(TValue value) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), "OnDespawned", value)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableStaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor() {
      return (PoolableStaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get())));
    }
  }; // Zenject.PoolableStaticMemoryPool`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_5, "Zenject", "PoolableStaticMemoryPool`5");
#pragma pack(pop)
