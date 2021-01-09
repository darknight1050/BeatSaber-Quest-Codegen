// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Task/DelayPromise
  // [] Offset: FFFFFFFF
  class Task::DelayPromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> {
    public:
    // readonly System.Threading.CancellationToken Token
    // Size: 0x8
    // Offset: 0x58
    System::Threading::CancellationToken Token;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // System.Threading.CancellationTokenRegistration Registration
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    System::Threading::CancellationTokenRegistration Registration;
    // System.Threading.Timer Timer
    // Size: 0x8
    // Offset: 0x78
    System::Threading::Timer* Timer;
    // Field size check
    static_assert(sizeof(System::Threading::Timer*) == 0x8);
    // Creating value type constructor for type: DelayPromise
    DelayPromise(System::Threading::CancellationToken Token_ = {}, System::Threading::CancellationTokenRegistration Registration_ = {}, System::Threading::Timer* Timer_ = {}) noexcept : Token{Token_}, Registration{Registration_}, Timer{Timer_} {}
    // System.Void .ctor(System.Threading.CancellationToken token)
    // Offset: 0x1D15BCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::DelayPromise* New_ctor(System::Threading::CancellationToken token) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::DelayPromise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::DelayPromise*, creationType>(token)));
    }
    // System.Void Complete()
    // Offset: 0x1D16E64
    void Complete();
  }; // System.Threading.Tasks.Task/DelayPromise
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::DelayPromise*, "System.Threading.Tasks", "Task/DelayPromise");
