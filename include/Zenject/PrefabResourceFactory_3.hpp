// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`4
#include "Zenject/IFactory_4.hpp"
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
  // Autogenerated type: Zenject.PrefabResourceFactory`3
  template<typename P1, typename P2, typename T>
  class PrefabResourceFactory_3 : public Zenject::IFactory_4<::Il2CppString*, P1, P2, T>, public ::Il2CppObject {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(System.String prefabResourceName, P1 param, P2 param2)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`4
    // Base method: TValue IFactory`4::Create(System.String prefabResourceName, P1 param, P2 param2)
    T Create(::Il2CppString* prefabResourceName, P1 param, P2 param2) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefabResourceName, param, param2));
    }
    // Creating proxy method: Zenject_IFactory_4_Create
    // Maps to method: Create
    T Zenject_IFactory_4_Create(::Il2CppString* prefabResourceName, P1 param, P2 param2) {
      return Create(prefabResourceName, param, param2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceFactory_3<P1, P2, T>* New_ctor() {
      return (PrefabResourceFactory_3<P1, P2, T>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabResourceFactory_3<P1, P2, T>*>::get())));
    }
  }; // Zenject.PrefabResourceFactory`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_3, "Zenject", "PrefabResourceFactory`3");
#pragma pack(pop)
