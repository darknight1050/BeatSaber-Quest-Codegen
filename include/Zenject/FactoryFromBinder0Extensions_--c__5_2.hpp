// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder0Extensions
#include "Zenject/FactoryFromBinder0Extensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`2<TValue, TParam1>
  template<typename TValue, typename TParam1>
  class MemoryPool_2;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions/<>c__5`2
  template<typename TContract, typename TMemoryPool>
  class FactoryFromBinder0Extensions::$$c__5_2 : public ::CsObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TContract>> || std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TMemoryPool>> || std::is_base_of_v<Zenject::MemoryPool_2<Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>));
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder0Extensions/<>c__5`2<TContract,TMemoryPool> <>9
    static Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>* _get_$$9() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder0Extensions/<>c__5`2<TContract,TMemoryPool> <>9
    static void _set_$$9(Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__5_0() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9__5_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static void _set_$$9__5_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9__5_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), ".cctor")));
    }
    // System.Void <FromPoolableMemoryPool>b__5_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0xFFFFFFFF
    void $FromPoolableMemoryPool$b__5_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromPoolableMemoryPool>b__5_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>* New_ctor() {
      return (FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get())));
    }
  }; // Zenject.FactoryFromBinder0Extensions/<>c__5`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder0Extensions::$$c__5_2, "Zenject", "FactoryFromBinder0Extensions/<>c__5`2");
#pragma pack(pop)
