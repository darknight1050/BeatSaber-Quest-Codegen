// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<SendAndWaitAsync>d__12
  struct HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__12 : public System::Runtime::CompilerServices::IAsyncStateMachine, public System::ValueType {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public UnityEngine.Networking.UnityWebRequest webRequest
    // Offset: 0x20
    UnityEngine::Networking::UnityWebRequest* webRequest;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // private UnityEngine.AsyncOperation <asyncOperation>5__2
    // Offset: 0x30
    UnityEngine::AsyncOperation* $asyncOperation$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $SendAndWaitAsync$d__12
    $SendAndWaitAsync$d__12(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, UnityEngine::Networking::UnityWebRequest* webRequest_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, UnityEngine::AsyncOperation* $asyncOperation$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, webRequest{webRequest_}, cancellationToken{cancellationToken_}, $asyncOperation$5__2{$asyncOperation$5__2_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0x99241C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x992424
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<SendAndWaitAsync>d__12
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__12, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendAndWaitAsync>d__12");
#pragma pack(pop)
