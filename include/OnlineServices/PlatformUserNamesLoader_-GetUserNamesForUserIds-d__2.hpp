// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.PlatformUserNamesLoader
#include "OnlineServices/PlatformUserNamesLoader.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.PlatformUserNamesLoader/<GetUserNamesForUserIds>d__2
  struct PlatformUserNamesLoader::$GetUserNamesForUserIds$d__2 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String[]> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Array<::CsString*>*> $$t__builder;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // public OnlineServices.PlatformUserNamesLoader <>4__this
    // Offset: 0x28
    OnlineServices::PlatformUserNamesLoader* $$4__this;
    // public System.String[] userPlatfromIds
    // Offset: 0x30
    ::Array<::CsString*>* userPlatfromIds;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<::CsString*>*> $$u__1;
    // Creating value type constructor for type: $GetUserNamesForUserIds$d__2
    $GetUserNamesForUserIds$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Array<::CsString*>*> $$t__builder_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, OnlineServices::PlatformUserNamesLoader* $$4__this_ = {}, ::Array<::CsString*>* userPlatfromIds_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<::CsString*>*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, userPlatfromIds{userPlatfromIds_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA275F0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA275F8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.PlatformUserNamesLoader/<GetUserNamesForUserIds>d__2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformUserNamesLoader::$GetUserNamesForUserIds$d__2, "OnlineServices", "PlatformUserNamesLoader/<GetUserNamesForUserIds>d__2");
#pragma pack(pop)
