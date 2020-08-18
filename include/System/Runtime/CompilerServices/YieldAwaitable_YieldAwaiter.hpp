// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Runtime.CompilerServices.YieldAwaitable
#include "System/Runtime/CompilerServices/YieldAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
  struct YieldAwaitable::YieldAwaiter : public System::Runtime::CompilerServices::ICriticalNotifyCompletion, public System::ValueType {
    public:
    // Get static field: static private readonly System.Threading.WaitCallback s_waitCallbackRunAction
    static System::Threading::WaitCallback* _get_s_waitCallbackRunAction();
    // Set static field: static private readonly System.Threading.WaitCallback s_waitCallbackRunAction
    static void _set_s_waitCallbackRunAction(System::Threading::WaitCallback* value);
    // Get static field: static private readonly System.Threading.SendOrPostCallback s_sendOrPostCallbackRunAction
    static System::Threading::SendOrPostCallback* _get_s_sendOrPostCallbackRunAction();
    // Set static field: static private readonly System.Threading.SendOrPostCallback s_sendOrPostCallbackRunAction
    static void _set_s_sendOrPostCallbackRunAction(System::Threading::SendOrPostCallback* value);
    // Creating value type constructor for type: YieldAwaiter
    YieldAwaiter() {}
    // public System.Boolean get_IsCompleted()
    // Offset: 0x9A7EBC
    bool get_IsCompleted();
    // static private System.Void QueueContinuation(System.Action continuation, System.Boolean flowContext)
    // Offset: 0x10C52A8
    static void QueueContinuation(System::Action* continuation, bool flowContext);
    // static private System.Void RunAction(System.Object state)
    // Offset: 0x10C557C
    static void RunAction(::Il2CppObject* state);
    // public System.Void GetResult()
    // Offset: 0x9A7EC8
    void GetResult();
    // static private System.Void .cctor()
    // Offset: 0x10C55EC
    static void _cctor();
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0x9A7EC4
    // Implemented from: System.Runtime.CompilerServices.ICriticalNotifyCompletion
    // Base method: System.Void ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action continuation)
    void UnsafeOnCompleted(System::Action* continuation);
  }; // System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
#pragma pack(pop)
