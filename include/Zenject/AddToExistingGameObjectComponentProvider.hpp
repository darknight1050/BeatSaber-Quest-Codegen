// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AddToGameObjectComponentProviderBase
#include "Zenject/AddToGameObjectComponentProviderBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.AddToExistingGameObjectComponentProvider
  class AddToExistingGameObjectComponentProvider : public Zenject::AddToGameObjectComponentProviderBase {
    public:
    // private readonly UnityEngine.GameObject _gameObject
    // Offset: 0x38
    UnityEngine::GameObject* gameObject;
    // public System.Void .ctor(UnityEngine.GameObject gameObject, Zenject.DiContainer container, System.Type componentType, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0xCC370C
    static AddToExistingGameObjectComponentProvider* New_ctor(UnityEngine::GameObject* gameObject, Zenject::DiContainer* container, System::Type* componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback);
    // protected override System.Boolean get_ShouldToggleActive()
    // Offset: 0xCC3864
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: System.Boolean AddToGameObjectComponentProviderBase::get_ShouldToggleActive()
    bool get_ShouldToggleActive();
    // protected override UnityEngine.GameObject GetGameObject(Zenject.InjectContext context)
    // Offset: 0xCC386C
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: UnityEngine.GameObject AddToGameObjectComponentProviderBase::GetGameObject(Zenject.InjectContext context)
    UnityEngine::GameObject* GetGameObject(Zenject::InjectContext* context);
  }; // Zenject.AddToExistingGameObjectComponentProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToExistingGameObjectComponentProvider*, "Zenject", "AddToExistingGameObjectComponentProvider");
#pragma pack(pop)
