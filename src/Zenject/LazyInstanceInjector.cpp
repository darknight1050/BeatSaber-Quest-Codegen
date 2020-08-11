// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.LazyInstanceInjector
#include "Zenject/LazyInstanceInjector.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.LazyInstanceInjector..ctor
Zenject::LazyInstanceInjector* Zenject::LazyInstanceInjector::New_ctor(Zenject::DiContainer* container) {
  return (LazyInstanceInjector*)THROW_UNLESS(il2cpp_utils::New("Zenject", "LazyInstanceInjector", container));
}
// Autogenerated method: Zenject.LazyInstanceInjector.get_Instances
System::Collections::Generic::IEnumerable_1<::CsObject*>* Zenject::LazyInstanceInjector::get_Instances() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<::CsObject*>*>(this, "get_Instances"));
}
// Autogenerated method: Zenject.LazyInstanceInjector.AddInstance
void Zenject::LazyInstanceInjector::AddInstance(::CsObject* instance) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddInstance", instance));
}
// Autogenerated method: Zenject.LazyInstanceInjector.AddInstances
void Zenject::LazyInstanceInjector::AddInstances(System::Collections::Generic::IEnumerable_1<::CsObject*>* instances) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddInstances", instances));
}
// Autogenerated method: Zenject.LazyInstanceInjector.LazyInject
void Zenject::LazyInstanceInjector::LazyInject(::CsObject* instance) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LazyInject", instance));
}
// Autogenerated method: Zenject.LazyInstanceInjector.LazyInjectAll
void Zenject::LazyInstanceInjector::LazyInjectAll() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LazyInjectAll"));
}
