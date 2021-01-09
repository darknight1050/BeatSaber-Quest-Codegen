// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsHandler
#include "GlobalNamespace/PlatformLeaderboardsHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ILeaderboardsModel
  class ILeaderboardsModel;
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: LeaderboardsModelLegacyWrapper
  // [] Offset: FFFFFFFF
  class LeaderboardsModelLegacyWrapper : public GlobalNamespace::PlatformLeaderboardsHandler {
    public:
    // Nested type: GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken
    class HMAsyncRequestWithCancellationToken;
    // Nested type: GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: GlobalNamespace::LeaderboardsModelLegacyWrapper::$SendLevelScoreResutlAsync$d__5
    struct $SendLevelScoreResutlAsync$d__5;
    // [InjectAttribute] Offset: 0xDC48EC
    // private OnlineServices.ILeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0x10
    OnlineServices::ILeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(OnlineServices::ILeaderboardsModel*) == 0x8);
    // Creating value type constructor for type: LeaderboardsModelLegacyWrapper
    LeaderboardsModelLegacyWrapper(OnlineServices::ILeaderboardsModel* leaderboardsModel_ = {}) noexcept : leaderboardsModel{leaderboardsModel_} {}
    // Creating conversion operator: operator OnlineServices::ILeaderboardsModel*
    constexpr operator OnlineServices::ILeaderboardsModel*() const noexcept {
      return leaderboardsModel;
    }
    // private System.Void GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0xF1EBA0
    void GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // private System.Void SendLevelScoreResutlAsync(OnlineServices.LevelScoreResultsData levelScoreResultsData, LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0xF1ED94
    void SendLevelScoreResutlAsync(OnlineServices::LevelScoreResultsData levelScoreResultsData, GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0xF1EA54
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::Il2CppString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0xF1ECC4
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // public System.Void .ctor()
    // Offset: 0xF1EEC4
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: System.Void PlatformLeaderboardsHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardsModelLegacyWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardsModelLegacyWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardsModelLegacyWrapper*, creationType>()));
    }
  }; // LeaderboardsModelLegacyWrapper
  static check_size<sizeof(LeaderboardsModelLegacyWrapper), 16 + sizeof(OnlineServices::ILeaderboardsModel*)> __GlobalNamespace_LeaderboardsModelLegacyWrapperSizeCheck;
  static_assert(sizeof(LeaderboardsModelLegacyWrapper) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardsModelLegacyWrapper*, "", "LeaderboardsModelLegacyWrapper");
#pragma pack(pop)
