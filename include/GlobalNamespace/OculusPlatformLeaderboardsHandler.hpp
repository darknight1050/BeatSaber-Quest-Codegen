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
  // Size: 0x20
  // Autogenerated type: OculusPlatformLeaderboardsHandler
  // [] Offset: FFFFFFFF
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
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<uint64_t>* oculusRequestIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<uint64_t>*) == 0x8);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // Creating value type constructor for type: OculusPlatformLeaderboardsHandler
    OculusPlatformLeaderboardsHandler(System::Collections::Generic::HashSet_1<uint64_t>* oculusRequestIds_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}) noexcept : oculusRequestIds{oculusRequestIds_}, gameplayModifiersModel{gameplayModifiersModel_} {}
    // private System.Void AddOculusRequest(Oculus.Platform.Request oculusRequest, HMAsyncRequest asyncRequest)
    // Offset: 0x1011D84
    void AddOculusRequest(Oculus::Platform::Request* oculusRequest, GlobalNamespace::HMAsyncRequest* asyncRequest);
    // private System.Boolean CheckMessageForValidRequest(Oculus.Platform.Message message)
    // Offset: 0x1011EA0
    bool CheckMessageForValidRequest(Oculus::Platform::Message* message);
    // public System.Void .ctor()
    // Offset: 0x1011C58
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: System.Void PlatformLeaderboardsHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformLeaderboardsHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler*, creationType>()));
    }
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x1011F3C
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::Il2CppString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x10120F0
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
  }; // OculusPlatformLeaderboardsHandler
  static check_size<sizeof(OculusPlatformLeaderboardsHandler), 24 + sizeof(GlobalNamespace::GameplayModifiersModelSO*)> __GlobalNamespace_OculusPlatformLeaderboardsHandlerSizeCheck;
  static_assert(sizeof(OculusPlatformLeaderboardsHandler) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler*, "", "OculusPlatformLeaderboardsHandler");
#pragma pack(pop)
