// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.PlaceholderFactory`4
#include "Zenject/PlaceholderFactory_4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Factory`4
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class Factory_4 : public Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`4
    // Base method: System.Void PlaceholderFactory`4::.ctor()
    // Base method: System.Void PlaceholderFactoryBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static Factory_4<TParam1, TParam2, TParam3, TValue>* New_ctor() {
      return (Factory_4<TParam1, TParam2, TParam3, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Factory_4<TParam1, TParam2, TParam3, TValue>*>::get())));
    }
  }; // Zenject.Factory`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_4, "Zenject", "Factory`4");
#pragma pack(pop)
