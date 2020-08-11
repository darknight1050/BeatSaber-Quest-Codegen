// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.IPrefabInstantiator.get_ArgumentTarget
System::Type* Zenject::IPrefabInstantiator::get_ArgumentTarget() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ArgumentTarget"));
}
// Autogenerated method: Zenject.IPrefabInstantiator.get_ExtraArguments
System::Collections::Generic::List_1<Zenject::TypeValuePair>* Zenject::IPrefabInstantiator::get_ExtraArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(this, "get_ExtraArguments"));
}
// Autogenerated method: Zenject.IPrefabInstantiator.get_GameObjectCreationParameters
Zenject::GameObjectCreationParameters* Zenject::IPrefabInstantiator::get_GameObjectCreationParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::GameObjectCreationParameters*>(this, "get_GameObjectCreationParameters"));
}
// Autogenerated method: Zenject.IPrefabInstantiator.Instantiate
UnityEngine::GameObject* Zenject::IPrefabInstantiator::Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "Instantiate", context, args, injectAction));
}
// Autogenerated method: Zenject.IPrefabInstantiator.GetPrefab
UnityEngine::Object* Zenject::IPrefabInstantiator::GetPrefab() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "GetPrefab"));
}
