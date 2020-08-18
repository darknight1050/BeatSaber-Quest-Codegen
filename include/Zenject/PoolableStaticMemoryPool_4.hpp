// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPool`4
#include "Zenject/StaticMemoryPool_4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`3<TParam1, TParam2, TParam3>
  template<typename TParam1, typename TParam2, typename TParam3>
  class IPoolable_3;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`4
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class PoolableStaticMemoryPool_4 : public Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_base_of_v<Zenject::IPoolable_3<TParam1, TParam2, TParam3>, std::remove_pointer_t<TValue>>));
    public:
    // static private System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TValue value)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TValue value) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), "OnSpawned", p1, p2, p3, value)));
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(TValue value) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), "OnDespawned", value)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>* New_ctor() {
      return (PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get())));
    }
  }; // Zenject.PoolableStaticMemoryPool`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_4, "Zenject", "PoolableStaticMemoryPool`4");
#pragma pack(pop)
