// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`2<TParam1, TContract>
  template<typename TParam1, typename TContract>
  class FactoryFromBinder_2;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IFactory_2;
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: MemoryPool`3<TValue, TParam1, TParam2>
  template<typename TValue, typename TParam1, typename TParam2>
  class MemoryPool_3;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder1Extensions
  class FactoryFromBinder1Extensions : public ::CsObject {
    public:
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2<TParam1, TContract>
    template<typename TParam1, typename TContract>
    class $$c__DisplayClass0_0_2;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__1_2<TParam1, TContract>
    template<typename TParam1, typename TContract>
    class $$c__1_2;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__3_2<TParam1, TContract>
    template<typename TParam1, typename TContract>
    class $$c__3_2;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>
    template<typename TParam1, typename TContract, typename TMemoryPool>
    class $$c__5_3;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>
    template<typename TParam1, typename TContract, typename TMemoryPool>
    class $$c__DisplayClass6_0_3;
    // static public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`2<TParam1,TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1, TContract>*>*>* factoryBindGenerator) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromIFactory", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, factoryBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromMonoPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromMonoPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_3<TParam1, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_3<TParam1, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, fromBinder, poolBindGenerator)));
    }
  }; // Zenject.FactoryFromBinder1Extensions
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder1Extensions*, "Zenject", "FactoryFromBinder1Extensions");
#pragma pack(pop)
