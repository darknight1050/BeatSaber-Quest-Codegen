// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1CCB4
  struct HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.String path
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Object objectToSendAsJson
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* objectToSendAsJson;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String method
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <uri>5__2
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* $uri$5__2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <bodyData>5__3
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* $bodyData$5__3;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2;
    // Creating value type constructor for type: $SendWebRequestWithOathAsync$d__5
    constexpr $SendWebRequestWithOathAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* path_ = {}, ::Il2CppObject* objectToSendAsJson_ = {}, ::Il2CppString* method_ = {}, ::Il2CppString* $uri$5__2_ = {}, ::Il2CppString* $bodyData$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, path{path_}, objectToSendAsJson{objectToSendAsJson_}, method{method_}, $uri$5__2{$uri$5__2_}, $bodyData$5__3{$bodyData$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDDECE8
    void MoveNext_NEW();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDDECF0
    void SetStateMachine_NEW(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5");
