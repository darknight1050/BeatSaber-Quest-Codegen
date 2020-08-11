// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.SingleProviderBindingFinalizer
#include "Zenject/SingleProviderBindingFinalizer.hpp"
// Including type: System.Func`3
#include "System/Func_3.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SingleProviderBindingFinalizer..ctor
Zenject::SingleProviderBindingFinalizer* Zenject::SingleProviderBindingFinalizer::New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory) {
  return (SingleProviderBindingFinalizer*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SingleProviderBindingFinalizer", bindInfo, providerFactory));
}
// Autogenerated method: Zenject.SingleProviderBindingFinalizer.OnFinalizeBinding
void Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnFinalizeBinding", container));
}
