// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NetEaseManager
#include "GlobalNamespace/NetEaseManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetEaseManager/<LogoutAsync>d__15
  // [CompilerGeneratedAttribute] Offset: E116CC
  struct NetEaseManager::$LogoutAsync$d__15/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<NetEase.Docker.LogoutData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::LogoutData> $$t__builder;
    // public NetEaseManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetEaseManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.LogoutData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LogoutData> $$u__1;
    // Creating value type constructor for type: $LogoutAsync$d__15
    constexpr $LogoutAsync$d__15(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::LogoutData> $$t__builder_ = {}, GlobalNamespace::NetEaseManager* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LogoutData> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xFA1B7C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFA1B84
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetEaseManager/<LogoutAsync>d__15
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseManager::$LogoutAsync$d__15, "", "NetEaseManager/<LogoutAsync>d__15");
