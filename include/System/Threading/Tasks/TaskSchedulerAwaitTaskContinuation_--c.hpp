// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
#include "System/Threading/Tasks/TaskSchedulerAwaitTaskContinuation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c
  class TaskSchedulerAwaitTaskContinuation::$$c : public ::CsObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c <>9
    static System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c <>9
    static void _set_$$9(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::$$c* value);
    // Get static field: static public System.Action`1<System.Object> <>9__2_0
    static System::Action_1<::CsObject*>* _get_$$9__2_0();
    // Set static field: static public System.Action`1<System.Object> <>9__2_0
    static void _set_$$9__2_0(System::Action_1<::CsObject*>* value);
    // static private System.Void .cctor()
    // Offset: 0xCD24AC
    static void _cctor();
    // System.Void <Run>b__2_0(System.Object state)
    // Offset: 0xCD251C
    void $Run$b__2_0(::CsObject* state);
    // public System.Void .ctor()
    // Offset: 0xCD2514
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TaskSchedulerAwaitTaskContinuation::$$c* New_ctor();
  }; // System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::$$c*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation/<>c");
#pragma pack(pop)
