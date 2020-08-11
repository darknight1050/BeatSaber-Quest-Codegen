// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.GetFromGameObjectComponentProvider
#include "Zenject/GetFromGameObjectComponentProvider.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.GetFromGameObjectComponentProvider..ctor
Zenject::GetFromGameObjectComponentProvider* Zenject::GetFromGameObjectComponentProvider::New_ctor(System::Type* componentType, UnityEngine::GameObject* gameObject, bool matchSingle) {
  return (GetFromGameObjectComponentProvider*)THROW_UNLESS(il2cpp_utils::New("Zenject", "GetFromGameObjectComponentProvider", componentType, gameObject, matchSingle));
}
// Autogenerated method: Zenject.GetFromGameObjectComponentProvider.get_IsCached
bool Zenject::GetFromGameObjectComponentProvider::get_IsCached() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
}
// Autogenerated method: Zenject.GetFromGameObjectComponentProvider.get_TypeVariesBasedOnMemberType
bool Zenject::GetFromGameObjectComponentProvider::get_TypeVariesBasedOnMemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
}
// Autogenerated method: Zenject.GetFromGameObjectComponentProvider.GetInstanceType
System::Type* Zenject::GetFromGameObjectComponentProvider::GetInstanceType(Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
}
// Autogenerated method: Zenject.GetFromGameObjectComponentProvider.GetAllInstancesWithInjectSplit
void Zenject::GetFromGameObjectComponentProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::CsObject*>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
}
