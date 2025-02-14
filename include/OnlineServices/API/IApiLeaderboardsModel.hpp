// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.ApiResponse`1
#include "OnlineServices/API/ApiResponse_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntries
  class LeaderboardEntries;
  // Forward declaring type: LeaderboardQuery
  class LeaderboardQuery;
  // Forward declaring type: LevelScoreResult
  class LevelScoreResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.IApiLeaderboardsModel
  class IApiLeaderboardsModel {
    public:
    // Creating value type constructor for type: IApiLeaderboardsModel
    IApiLeaderboardsModel() noexcept {}
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> GetLeaderboardEntriesAsync(BeatSaberAPI.DataTransferObjects.LeaderboardQuery leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* GetLeaderboardEntriesAsync(BeatSaberAPI::DataTransferObjects::LeaderboardQuery* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(BeatSaberAPI.DataTransferObjects.LevelScoreResult levelScoreResultDto, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(BeatSaberAPI::DataTransferObjects::LevelScoreResult* levelScoreResultDto, System::Threading::CancellationToken cancellationToken);
    // public System.Void LogoutAsync()
    // Offset: 0xFFFFFFFF
    void LogoutAsync();
  }; // OnlineServices.API.IApiLeaderboardsModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::IApiLeaderboardsModel*, "OnlineServices.API", "IApiLeaderboardsModel");
