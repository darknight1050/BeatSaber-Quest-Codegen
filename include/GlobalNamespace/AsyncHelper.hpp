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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AsyncHelper
  // [] Offset: FFFFFFFF
  class AsyncHelper : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AsyncHelper::$$c__DisplayClass0_0_1<T>
    template<typename T>
    class $$c__DisplayClass0_0_1;
    // Nested type: GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Creating value type constructor for type: AsyncHelper
    AsyncHelper() noexcept {}
    // static public T RunSync(System.Func`1<System.Threading.Tasks.Task`1<T>> asyncTask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T RunSync(System::Func_1<System::Threading::Tasks::Task_1<T>*>* asyncTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncHelper::RunSync");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "AsyncHelper", "RunSync", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(asyncTask)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, asyncTask);
    }
    // static public System.Void RunSync(System.Func`1<System.Threading.Tasks.Task> asyncTask)
    // Offset: 0x1118EDC
    static void RunSync(System::Func_1<System::Threading::Tasks::Task*>* asyncTask);
  }; // AsyncHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncHelper*, "", "AsyncHelper");
