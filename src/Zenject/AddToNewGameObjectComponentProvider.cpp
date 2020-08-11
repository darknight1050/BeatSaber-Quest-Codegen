// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AddToNewGameObjectComponentProvider
#include "Zenject/AddToNewGameObjectComponentProvider.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.AddToNewGameObjectComponentProvider..ctor
Zenject::AddToNewGameObjectComponentProvider* Zenject::AddToNewGameObjectComponentProvider::New_ctor(Zenject::DiContainer* container, System::Type* componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::CsObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::CsObject*>* instantiateCallback) {
  return (AddToNewGameObjectComponentProvider*)THROW_UNLESS(il2cpp_utils::New("Zenject", "AddToNewGameObjectComponentProvider", container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback));
}
// Autogenerated method: Zenject.AddToNewGameObjectComponentProvider.get_ShouldToggleActive
bool Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ShouldToggleActive"));
}
// Autogenerated method: Zenject.AddToNewGameObjectComponentProvider.GetGameObject
UnityEngine::GameObject* Zenject::AddToNewGameObjectComponentProvider::GetGameObject(Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "GetGameObject", context));
}
