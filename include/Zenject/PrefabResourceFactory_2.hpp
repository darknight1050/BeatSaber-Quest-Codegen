// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`3
#include "Zenject/IFactory_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabResourceFactory`2
  template<typename P1, typename T>
  class PrefabResourceFactory_2 : public Zenject::IFactory_3<::Il2CppString*, P1, T>, public ::Il2CppObject {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(System.String prefabResourceName, P1 param)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`3
    // Base method: TValue IFactory`3::Create(System.String prefabResourceName, P1 param)
    T Create(::Il2CppString* prefabResourceName, P1 param) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefabResourceName, param));
    }
    // Creating proxy method: Zenject_IFactory_3_Create
    // Maps to method: Create
    T Zenject_IFactory_3_Create(::Il2CppString* prefabResourceName, P1 param) {
      return Create(prefabResourceName, param);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceFactory_2<P1, T>* New_ctor() {
      return (PrefabResourceFactory_2<P1, T>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabResourceFactory_2<P1, T>*>::get())));
    }
  }; // Zenject.PrefabResourceFactory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_2, "Zenject", "PrefabResourceFactory`2");
#pragma pack(pop)
