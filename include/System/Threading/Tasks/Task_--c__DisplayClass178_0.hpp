// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.InternalTaskOptions
#include "System/Threading/Tasks/InternalTaskOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task/<>c__DisplayClass178_0
  class Task::$$c__DisplayClass178_0 : public ::CsObject {
    public:
    // public System.Threading.Tasks.Task root
    // Offset: 0x10
    System::Threading::Tasks::Task* root;
    // public System.Boolean replicasAreQuitting
    // Offset: 0x18
    bool replicasAreQuitting;
    // public System.Action`1<System.Object> taskReplicaDelegate
    // Offset: 0x20
    System::Action_1<::CsObject*>* taskReplicaDelegate;
    // public System.Threading.Tasks.TaskCreationOptions creationOptionsForReplicas
    // Offset: 0x28
    System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas;
    // public System.Threading.Tasks.InternalTaskOptions internalOptionsForReplicas
    // Offset: 0x2C
    System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas;
    // System.Void <ExecuteSelfReplicating>b__0(System.Object $p0$)
    // Offset: 0xCD0378
    void $ExecuteSelfReplicating$b__0(::CsObject* $p0$);
    // public System.Void .ctor()
    // Offset: 0xCCD880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Task::$$c__DisplayClass178_0* New_ctor();
  }; // System.Threading.Tasks.Task/<>c__DisplayClass178_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::$$c__DisplayClass178_0*, "System.Threading.Tasks", "Task/<>c__DisplayClass178_0");
#pragma pack(pop)
