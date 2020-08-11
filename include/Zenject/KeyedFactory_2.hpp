// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.KeyedFactoryBase`2
#include "Zenject/KeyedFactoryBase_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.KeyedFactory`2
  template<typename TBase, typename TKey>
  class KeyedFactory_2 : public Zenject::KeyedFactoryBase_2<TBase, TKey> {
    public:
    // public TBase Create(TKey key)
    // Offset: 0xFFFFFFFF
    TBase Create(TKey key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TBase>(this, "Create", key));
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ProvidedTypes()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> KeyedFactoryBase`2::get_ProvidedTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ProvidedTypes() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this, "get_ProvidedTypes"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Void KeyedFactoryBase`2::.ctor()
    // Base method: System.Void Object::.ctor()
    static KeyedFactory_2<TBase, TKey>* New_ctor() {
      return (KeyedFactory_2<TBase, TKey>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyedFactory_2<TBase, TKey>*>::get())));
    }
  }; // Zenject.KeyedFactory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::KeyedFactory_2, "Zenject", "KeyedFactory`2");
#pragma pack(pop)
