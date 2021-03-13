// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskToApm
  // [] Offset: FFFFFFFF
  class TaskToApm : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult
    class TaskWrapperAsyncResult;
    // Nested type: System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Creating value type constructor for type: TaskToApm
    TaskToApm() noexcept {}
    // static public System.IAsyncResult Begin(System.Threading.Tasks.Task task, System.AsyncCallback callback, System.Object state)
    // Offset: 0x16DCF4C
    static System::IAsyncResult* Begin(System::Threading::Tasks::Task* task, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static public System.Void End(System.IAsyncResult asyncResult)
    // Offset: 0x16DD168
    static void End(System::IAsyncResult* asyncResult);
    // static public TResult End(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFF
    template<class TResult>
    static TResult End(System::IAsyncResult* asyncResult) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskToApm::End");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading.Tasks", "TaskToApm", "End", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::il2cpp_utils::ExtractTypes(asyncResult)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodThrow<TResult, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, asyncResult);
    }
    // static private System.Void InvokeCallbackWhenTaskCompletes(System.Threading.Tasks.Task antecedent, System.AsyncCallback callback, System.IAsyncResult asyncResult)
    // Offset: 0x16DD08C
    static void InvokeCallbackWhenTaskCompletes(System::Threading::Tasks::Task* antecedent, System::AsyncCallback* callback, System::IAsyncResult* asyncResult);
  }; // System.Threading.Tasks.TaskToApm
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskToApm*, "System.Threading.Tasks", "TaskToApm");
