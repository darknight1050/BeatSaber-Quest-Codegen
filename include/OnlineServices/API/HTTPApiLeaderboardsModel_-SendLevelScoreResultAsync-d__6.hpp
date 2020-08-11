// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.API.HTTPApiLeaderboardsModel
#include "OnlineServices/API/HTTPApiLeaderboardsModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.API.Response
#include "OnlineServices/API/Response.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LevelScoreResultDTO
  class LevelScoreResultDTO;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPApiLeaderboardsModel/<SendLevelScoreResultAsync>d__6
  struct HTTPApiLeaderboardsModel::$SendLevelScoreResultAsync$d__6 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.API.Response> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::Response> $$t__builder;
    // public OnlineServices.API.HTTPApiLeaderboardsModel <>4__this
    // Offset: 0x20
    OnlineServices::API::HTTPApiLeaderboardsModel* $$4__this;
    // public LeaderboardsDTO.LevelScoreResultDTO levelScoreResultDto
    // Offset: 0x28
    LeaderboardsDTO::LevelScoreResultDTO* levelScoreResultDto;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<::CsString*> $$u__1;
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__6
    $SendLevelScoreResultAsync$d__6(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::Response> $$t__builder_ = {}, OnlineServices::API::HTTPApiLeaderboardsModel* $$4__this_ = {}, LeaderboardsDTO::LevelScoreResultDTO* levelScoreResultDto_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::CsString*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelScoreResultDto{levelScoreResultDto_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA27DC8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA27DD0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPApiLeaderboardsModel/<SendLevelScoreResultAsync>d__6
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPApiLeaderboardsModel::$SendLevelScoreResultAsync$d__6, "OnlineServices.API", "HTTPApiLeaderboardsModel/<SendLevelScoreResultAsync>d__6");
#pragma pack(pop)
