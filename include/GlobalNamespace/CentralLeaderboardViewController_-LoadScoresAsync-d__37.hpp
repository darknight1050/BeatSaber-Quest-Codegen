// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CentralLeaderboardViewController/<LoadScoresAsync>d__37
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C904
  struct CentralLeaderboardViewController::$LoadScoresAsync$d__37/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public CentralLeaderboardViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::CentralLeaderboardViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CentralLeaderboardViewController*) == 0x8);
    // private IDifficultyBeatmap <loadingFordifficultyBeatmap>5__2
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IDifficultyBeatmap* $loadingFordifficultyBeatmap$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__3
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken $cancellationToken$5__3;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.LeaderboardEntriesResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::LeaderboardEntriesResult*> $$u__1;
    // Creating value type constructor for type: $LoadScoresAsync$d__37
    constexpr $LoadScoresAsync$d__37(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::CentralLeaderboardViewController* $$4__this_ = {}, GlobalNamespace::IDifficultyBeatmap* $loadingFordifficultyBeatmap$5__2_ = {}, System::Threading::CancellationToken $cancellationToken$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::LeaderboardEntriesResult*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $loadingFordifficultyBeatmap$5__2{$loadingFordifficultyBeatmap$5__2_}, $cancellationToken$5__3{$cancellationToken$5__3_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDDD098
    void MoveNext_NEW();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDDD0A0
    void SetStateMachine_NEW(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // CentralLeaderboardViewController/<LoadScoresAsync>d__37
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::$LoadScoresAsync$d__37, "", "CentralLeaderboardViewController/<LoadScoresAsync>d__37");
