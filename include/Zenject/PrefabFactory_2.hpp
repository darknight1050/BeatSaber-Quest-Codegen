// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IFactory`3
#include "Zenject/IFactory_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabFactory`2
  template<typename P1, typename T>
  class PrefabFactory_2 : public ::CsObject, public Zenject::IFactory_3<UnityEngine::Object*, P1, T>, public Zenject::IFactory {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(UnityEngine.Object prefab, P1 param)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`3
    // Base method: TValue IFactory`3::Create(UnityEngine.Object prefab, P1 param)
    T Create(UnityEngine::Object* prefab, P1 param) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefab, param));
    }
    // Creating proxy method: Zenject_IFactory_3_Create
    // Maps to method: Create
    T Zenject_IFactory_3_Create(UnityEngine::Object* prefab, P1 param) {
      return Create(prefab, param);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabFactory_2<P1, T>* New_ctor() {
      return (PrefabFactory_2<P1, T>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabFactory_2<P1, T>*>::get())));
    }
  }; // Zenject.PrefabFactory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_2, "Zenject", "PrefabFactory`2");
#pragma pack(pop)
