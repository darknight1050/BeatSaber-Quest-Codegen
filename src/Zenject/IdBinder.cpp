// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IdBinder
#include "Zenject/IdBinder.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.IdBinder..ctor
Zenject::IdBinder* Zenject::IdBinder::New_ctor(Zenject::BindInfo* bindInfo) {
  return (IdBinder*)THROW_UNLESS(il2cpp_utils::New("Zenject", "IdBinder", bindInfo));
}
// Autogenerated method: Zenject.IdBinder.WithId
void Zenject::IdBinder::WithId(::CsObject* identifier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WithId", identifier));
}
