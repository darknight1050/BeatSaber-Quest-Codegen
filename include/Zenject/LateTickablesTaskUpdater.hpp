// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateTickable
  class ILateTickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.LateTickablesTaskUpdater
  class LateTickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::ILateTickable*> {
    public:
    // protected System.Void UpdateItem(Zenject.ILateTickable task)
    // Offset: 0xF1E724
    void UpdateItem(Zenject::ILateTickable* task);
    // public System.Void .ctor()
    // Offset: 0xF1E7D0
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static LateTickablesTaskUpdater* New_ctor();
  }; // Zenject.LateTickablesTaskUpdater
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::LateTickablesTaskUpdater*, "Zenject", "LateTickablesTaskUpdater");
#pragma pack(pop)
