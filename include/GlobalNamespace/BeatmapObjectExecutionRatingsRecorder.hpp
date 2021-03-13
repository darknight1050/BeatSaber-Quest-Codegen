// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ICutScoreHandlerDidFinishEvent
#include "GlobalNamespace/ICutScoreHandlerDidFinishEvent.hpp"
// Including type: ISaberSwingRatingCounterDidFinishReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Skipping declaration: CutScoreHandler because it is already included!
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
  // Forward declaring type: NoteExecutionRating
  class NoteExecutionRating;
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder
  // [] Offset: FFFFFFFF
  class BeatmapObjectExecutionRatingsRecorder : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ICutScoreHandlerDidFinishEvent*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler
    class CutScoreHandler;
    // Size: 0x30
    #pragma pack(push, 1)
    // Autogenerated type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
    // [] Offset: FFFFFFFF
    class CutScoreHandler : public ::Il2CppObject/*, public GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*/ {
      public:
      // Nested type: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::Pool
      class Pool;
      // private NoteExecutionRating _noteExecutionRating
      // Size: 0x8
      // Offset: 0x10
      GlobalNamespace::NoteExecutionRating* noteExecutionRating;
      // Field size check
      static_assert(sizeof(GlobalNamespace::NoteExecutionRating*) == 0x8);
      // private ISaberSwingRatingCounter _saberSwingRatingCounter
      // Size: 0x8
      // Offset: 0x18
      GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter;
      // Field size check
      static_assert(sizeof(GlobalNamespace::ISaberSwingRatingCounter*) == 0x8);
      // private System.Single _cutDistanceToCenter
      // Size: 0x4
      // Offset: 0x20
      float cutDistanceToCenter;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: cutDistanceToCenter and: didFinishEvent
      char __padding2[0x4] = {};
      // private readonly LazyCopyHashSet`1<ICutScoreHandlerDidFinishEvent> _didFinishEvent
      // Size: 0x8
      // Offset: 0x28
      GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* didFinishEvent;
      // Field size check
      static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>*) == 0x8);
      // Creating value type constructor for type: CutScoreHandler
      CutScoreHandler(GlobalNamespace::NoteExecutionRating* noteExecutionRating_ = {}, GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter_ = {}, float cutDistanceToCenter_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* didFinishEvent_ = {}) noexcept : noteExecutionRating{noteExecutionRating_}, saberSwingRatingCounter{saberSwingRatingCounter_}, cutDistanceToCenter{cutDistanceToCenter_}, didFinishEvent{didFinishEvent_} {}
      // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
      operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() noexcept {
        return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
      }
      // public ILazyCopyHashSet`1<ICutScoreHandlerDidFinishEvent> get_didFinishEvent()
      // Offset: 0xEFCD1C
      GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>* get_didFinishEvent();
      // public System.Void Set(in NoteCutInfo noteCutInfo, NoteExecutionRating noteExecutionRating, ISaberSwingRatingCounter swingRatingCounter)
      // Offset: 0xEFC994
      void Set(GlobalNamespace::NoteCutInfo& noteCutInfo, GlobalNamespace::NoteExecutionRating* noteExecutionRating, GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
      // private System.Void Reinitialize()
      // Offset: 0xEFCD24
      void Reinitialize();
      // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter saberSwingRatingCounter)
      // Offset: 0xEFCD2C
      void HandleSaberSwingRatingCounterDidFinish_NEW(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);
      // public System.Void .ctor()
      // Offset: 0xEFCF78
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder::CutScoreHandler*, creationType>()));
      }
    }; // BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
    #pragma pack(pop)
    static check_size<sizeof(BeatmapObjectExecutionRatingsRecorder::CutScoreHandler), 40 + sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>*)> __GlobalNamespace_BeatmapObjectExecutionRatingsRecorder_CutScoreHandlerSizeCheck;
    static_assert(sizeof(BeatmapObjectExecutionRatingsRecorder::CutScoreHandler) == 0x30);
    // [InjectAttribute] Offset: 0xD226D4
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xD226E4
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD226F4
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0xD22704
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xD22714
    // private readonly BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/Pool _cutScoreHandlerPool
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::Pool* cutScoreHandlerPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::Pool*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRating> _beatmapObjectExecutionRatings
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<ObstacleData> _hitObstacles
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>* hitObstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ObstacleController> _prevIntersectingObstacles
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* prevIntersectingObstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectExecutionRatingsRecorder
    BeatmapObjectExecutionRatingsRecorder(GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::Pool* cutScoreHandlerPool_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings_ = {}, System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>* hitObstacles_ = {}, System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* prevIntersectingObstacles_ = {}) noexcept : scoreController{scoreController_}, beatmapObjectManager{beatmapObjectManager_}, playerHeadAndObstacleInteraction{playerHeadAndObstacleInteraction_}, audioTimeSyncController{audioTimeSyncController_}, cutScoreHandlerPool{cutScoreHandlerPool_}, beatmapObjectExecutionRatings{beatmapObjectExecutionRatings_}, hitObstacles{hitObstacles_}, prevIntersectingObstacles{prevIntersectingObstacles_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ICutScoreHandlerDidFinishEvent
    operator GlobalNamespace::ICutScoreHandlerDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICutScoreHandlerDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.List`1<BeatmapObjectExecutionRating> get_beatmapObjectExecutionRatings()
    // Offset: 0xEFBF2C
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* get_beatmapObjectExecutionRatings();
    // protected System.Void Start()
    // Offset: 0xEFBF34
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xEFC1AC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xEFC438
    void Update();
    // public System.Void HandleCutScoreHandlerDidFinish(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler)
    // Offset: 0xEFC654
    void HandleCutScoreHandlerDidFinish_NEW(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler);
    // private System.Void HandleScoreControllerNoteWasCut(NoteData noteData, in NoteCutInfo noteCutInfo, System.Int32 multiplier)
    // Offset: 0xEFC734
    void HandleScoreControllerNoteWasCut(GlobalNamespace::NoteData* noteData, GlobalNamespace::NoteCutInfo& noteCutInfo, int multiplier);
    // private System.Void HandleScoreControllerNoteWasMissed(NoteData noteData, System.Int32 multiplier)
    // Offset: 0xEFCA78
    void HandleScoreControllerNoteWasMissed(GlobalNamespace::NoteData* noteData, int multiplier);
    // private System.Void HandleObstacleDidPassAvoidedMark(ObstacleController obstacleController)
    // Offset: 0xEFCB60
    void HandleObstacleDidPassAvoidedMark(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Void .ctor()
    // Offset: 0xEFCC54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRatingsRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder*, creationType>()));
    }
  }; // BeatmapObjectExecutionRatingsRecorder
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRatingsRecorder), 80 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*)> __GlobalNamespace_BeatmapObjectExecutionRatingsRecorderSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRatingsRecorder) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, "", "BeatmapObjectExecutionRatingsRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler*, "", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler");
