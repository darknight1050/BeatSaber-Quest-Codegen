// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.LateTickablesTaskUpdater
#include "Zenject/LateTickablesTaskUpdater.hpp"
// Including type: Zenject.ILateTickable
#include "Zenject/ILateTickable.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.LateTickablesTaskUpdater.UpdateItem
void Zenject::LateTickablesTaskUpdater::UpdateItem(Zenject::ILateTickable* task) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateItem", task));
}
// Autogenerated method: Zenject.LateTickablesTaskUpdater..ctor
Zenject::LateTickablesTaskUpdater* Zenject::LateTickablesTaskUpdater::New_ctor() {
  return (LateTickablesTaskUpdater*)THROW_UNLESS(il2cpp_utils::New("Zenject", "LateTickablesTaskUpdater"));
}
