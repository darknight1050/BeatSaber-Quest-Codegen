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
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__10
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1CD14
  struct HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.String uri
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String method
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String bearerToken
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* bearerToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String bodyData
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* bodyData;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private OnlineServices.API.HTTPLeaderboardsOathHelper/<>c__DisplayClass10_1 <>8__1
    // Size: 0x8
    // Offset: 0x48
    OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1* $$8__1;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1*) == 0x8);
    // private OnlineServices.API.HTTPLeaderboardsOathHelper/<>c__DisplayClass10_0 <>8__2
    // Size: 0x8
    // Offset: 0x50
    OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* $$8__2;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    // Creating value type constructor for type: $SendWebRequestAsync$d__10
    constexpr $SendWebRequestAsync$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, ::Il2CppString* uri_ = {}, ::Il2CppString* method_ = {}, ::Il2CppString* bearerToken_ = {}, ::Il2CppString* bodyData_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1* $$8__1_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* $$8__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, uri{uri_}, method{method_}, bearerToken{bearerToken_}, bodyData{bodyData_}, $$8__1{$$8__1_}, $$8__2{$$8__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDDECD8
    void MoveNext_NEW();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDDECE0
    void SetStateMachine_NEW(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__10");
