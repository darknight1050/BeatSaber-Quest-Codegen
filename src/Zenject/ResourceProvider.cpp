// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ResourceProvider
#include "Zenject/ResourceProvider.hpp"
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
// Autogenerated method: Zenject.ResourceProvider..ctor
Zenject::ResourceProvider* Zenject::ResourceProvider::New_ctor(::CsString* resourcePath, System::Type* resourceType, bool matchSingle) {
  return (ResourceProvider*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ResourceProvider", resourcePath, resourceType, matchSingle));
}
// Autogenerated method: Zenject.ResourceProvider.get_IsCached
bool Zenject::ResourceProvider::get_IsCached() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
}
// Autogenerated method: Zenject.ResourceProvider.get_TypeVariesBasedOnMemberType
bool Zenject::ResourceProvider::get_TypeVariesBasedOnMemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
}
// Autogenerated method: Zenject.ResourceProvider.GetInstanceType
System::Type* Zenject::ResourceProvider::GetInstanceType(Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
}
// Autogenerated method: Zenject.ResourceProvider.GetAllInstancesWithInjectSplit
void Zenject::ResourceProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::CsObject*>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
}
