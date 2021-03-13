// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.AsyncHelper
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AsyncHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AsyncHelper
    AsyncHelper() noexcept {}
    // Get static field: static public readonly System.Threading.Tasks.Task DoneTask
    static System::Threading::Tasks::Task* _get_DoneTask();
    // Set static field: static public readonly System.Threading.Tasks.Task DoneTask
    static void _set_DoneTask(System::Threading::Tasks::Task* value);
    // Get static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskTrue
    static System::Threading::Tasks::Task_1<bool>* _get_DoneTaskTrue();
    // Set static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskTrue
    static void _set_DoneTaskTrue(System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskFalse
    static System::Threading::Tasks::Task_1<bool>* _get_DoneTaskFalse();
    // Set static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskFalse
    static void _set_DoneTaskFalse(System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static public readonly System.Threading.Tasks.Task`1<System.Int32> DoneTaskZero
    static System::Threading::Tasks::Task_1<int>* _get_DoneTaskZero();
    // Set static field: static public readonly System.Threading.Tasks.Task`1<System.Int32> DoneTaskZero
    static void _set_DoneTaskZero(System::Threading::Tasks::Task_1<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1780494
    static void _cctor();
  }; // System.Xml.AsyncHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::AsyncHelper*, "System.Xml", "AsyncHelper");
