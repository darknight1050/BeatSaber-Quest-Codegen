// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`9
#include "Zenject/MemoryPool_9.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8>
  class IPoolable_8;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoPoolableMemoryPool`9
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TValue>
  class MonoPoolableMemoryPool_9 : public Zenject::MemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_convertible_v<TValue, UnityEngine::Component*>) && (!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_base_of_v<Zenject::IPoolable_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8>, std::remove_pointer_t<TValue>>));
    public:
    // private UnityEngine.Transform _originalParent
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // protected System.Void OnCreated(TValue item)
    // Offset: 0xFFFFFFFF
    void OnCreated(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDestroyed(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`9
    // Base method: System.Void MemoryPool`9::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoPoolableMemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>* New_ctor() {
      return (MonoPoolableMemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoPoolableMemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>*>::get())));
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`9
    // Base method: System.Void MemoryPool`9::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, p3, p4, p5, p6, p7, p8, item));
    }
  }; // Zenject.MonoPoolableMemoryPool`9
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoPoolableMemoryPool_9, "Zenject", "MonoPoolableMemoryPool`9");
#pragma pack(pop)
