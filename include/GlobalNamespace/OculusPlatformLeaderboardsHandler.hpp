// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsHandler
#include "GlobalNamespace/PlatformLeaderboardsHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Message
  class Message;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformLeaderboardsHandler
  class OculusPlatformLeaderboardsHandler : public GlobalNamespace::PlatformLeaderboardsHandler {
    public:
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c
    class $$c;
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // private System.Collections.Generic.HashSet`1<System.UInt64> _oculusRequestIds
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<uint64_t>* oculusRequestIds;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private System.Void AddOculusRequest(Oculus.Platform.Request oculusRequest, HMAsyncRequest asyncRequest)
    // Offset: 0xC27EAC
    void AddOculusRequest(Oculus::Platform::Request* oculusRequest, GlobalNamespace::HMAsyncRequest* asyncRequest);
    // private System.Boolean CheckMessageForValidRequest(Oculus.Platform.Message message)
    // Offset: 0xC27FC8
    bool CheckMessageForValidRequest(Oculus::Platform::Message* message);
    // public System.Void .ctor()
    // Offset: 0xC27D80
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: System.Void PlatformLeaderboardsHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    static OculusPlatformLeaderboardsHandler* New_ctor();
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0xC28064
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::CsString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0xC28218
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
  }; // OculusPlatformLeaderboardsHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler*, "", "OculusPlatformLeaderboardsHandler");
#pragma pack(pop)
