// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass24_0
  class FactoryFromBinderBase::$$c__DisplayClass24_0 : public ::CsObject {
    public:
    // public Zenject.FactoryFromBinderBase <>4__this
    // Offset: 0x10
    Zenject::FactoryFromBinderBase* $$4__this;
    // public System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter
    // Offset: 0x18
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter;
    // Zenject.IProvider <FromComponentOn>b__0(Zenject.DiContainer container)
    // Offset: 0xF1BAA8
    Zenject::IProvider* $FromComponentOn$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF1AC24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinderBase::$$c__DisplayClass24_0* New_ctor();
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass24_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass24_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass24_0");
#pragma pack(pop)
