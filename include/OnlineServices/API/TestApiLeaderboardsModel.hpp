// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.IApiLeaderboardsModel
#include "OnlineServices/API/IApiLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
}
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.TestApiLeaderboardsModel
  class TestApiLeaderboardsModel : public ::Il2CppObject/*, public OnlineServices::API::IApiLeaderboardsModel*/ {
    public:
    // Nested type: OnlineServices::API::TestApiLeaderboardsModel::$LogoutAsync$d__0
    struct $LogoutAsync$d__0;
    // Nested type: OnlineServices::API::TestApiLeaderboardsModel::$GetLeaderboardEntriesAsync$d__1
    struct $GetLeaderboardEntriesAsync$d__1;
    // Nested type: OnlineServices::API::TestApiLeaderboardsModel::$SendLevelScoreResultAsync$d__2
    struct $SendLevelScoreResultAsync$d__2;
    // Creating value type constructor for type: TestApiLeaderboardsModel
    TestApiLeaderboardsModel() noexcept {}
    // Creating interface conversion operator: operator OnlineServices::API::IApiLeaderboardsModel
    operator OnlineServices::API::IApiLeaderboardsModel() noexcept {
      return *reinterpret_cast<OnlineServices::API::IApiLeaderboardsModel*>(this);
    }
    // public System.Void LogoutAsync()
    // Offset: 0x11D8FF4
    void LogoutAsync();
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> GetLeaderboardEntriesAsync(BeatSaberAPI.DataTransferObjects.LeaderboardQuery leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x11D9098
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* GetLeaderboardEntriesAsync(BeatSaberAPI::DataTransferObjects::LeaderboardQuery* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(BeatSaberAPI.DataTransferObjects.LevelScoreResult levelScoreResult, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x11D9198
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(BeatSaberAPI::DataTransferObjects::LevelScoreResult* levelScoreResult, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x11D9298
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestApiLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::TestApiLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestApiLeaderboardsModel*, creationType>()));
    }
  }; // OnlineServices.API.TestApiLeaderboardsModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::TestApiLeaderboardsModel*, "OnlineServices.API", "TestApiLeaderboardsModel");
