// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFixedTickable
  class IFixedTickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FixedTickablesTaskUpdater
  class FixedTickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::IFixedTickable*> {
    public:
    // protected System.Void UpdateItem(Zenject.IFixedTickable task)
    // Offset: 0xF1CA30
    void UpdateItem(Zenject::IFixedTickable* task);
    // public System.Void .ctor()
    // Offset: 0xF1CADC
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static FixedTickablesTaskUpdater* New_ctor();
  }; // Zenject.FixedTickablesTaskUpdater
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FixedTickablesTaskUpdater*, "Zenject", "FixedTickablesTaskUpdater");
#pragma pack(pop)
