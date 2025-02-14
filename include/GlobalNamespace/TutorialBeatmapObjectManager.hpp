// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: TutorialNoteController
#include "GlobalNamespace/TutorialNoteController.hpp"
// Including type: BombNoteController
#include "GlobalNamespace/BombNoteController.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Skipping declaration: NoteController because it is already included!
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: TutorialBeatmapObjectManager
  class TutorialBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::TutorialBeatmapObjectManager::InitData
    class InitData;
    // private readonly MemoryPoolContainer`1<TutorialNoteController> _tutorialNotePoolContainer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>* tutorialNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>*) == 0x8);
    // private readonly MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* bombNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>*) == 0x8);
    // private readonly MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* obstaclePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // private readonly TutorialBeatmapObjectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialBeatmapObjectManager::InitData*) == 0x8);
    // Creating value type constructor for type: TutorialBeatmapObjectManager
    TutorialBeatmapObjectManager(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>* tutorialNotePoolContainer_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* bombNotePoolContainer_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* obstaclePoolContainer_ = {}, GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData_ = {}) noexcept : tutorialNotePoolContainer{tutorialNotePoolContainer_}, bombNotePoolContainer{bombNotePoolContainer_}, obstaclePoolContainer{obstaclePoolContainer_}, initData{initData_} {}
    // private System.Void .ctor(TutorialBeatmapObjectManager/InitData initData, TutorialNoteController/Pool tutorialNotePool, BombNoteController/Pool bombNotePool, ObstacleController/Pool obstaclePool)
    // Offset: 0x10F9A20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBeatmapObjectManager* New_ctor(GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData, GlobalNamespace::TutorialNoteController::Pool* tutorialNotePool, GlobalNamespace::BombNoteController::Pool* bombNotePool, GlobalNamespace::ObstacleController::Pool* obstaclePool) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBeatmapObjectManager*, creationType>(initData, tutorialNotePool, bombNotePool, obstaclePool)));
    }
    // public override System.Collections.Generic.List`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0x10F99C8
    // Implemented from: BeatmapObjectManager
    // Base method: System.Collections.Generic.List`1<ObstacleController> BeatmapObjectManager::get_activeObstacleControllers()
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // protected override ObstacleController SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x10F9B14
    // Implemented from: BeatmapObjectManager
    // Base method: ObstacleController BeatmapObjectManager::SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    GlobalNamespace::ObstacleController* SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // protected override NoteController SpawnBombNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x10F9BE8
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBombNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    GlobalNamespace::NoteController* SpawnBombNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // protected override NoteController SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0x10F9CB0
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    GlobalNamespace::NoteController* SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected override System.Void DespawnInternal(NoteController noteController)
    // Offset: 0x10F9E98
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(NoteController noteController)
    void DespawnInternal(GlobalNamespace::NoteController* noteController);
    // protected override System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0x10F9F8C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(ObstacleController obstacleController)
    void DespawnInternal(GlobalNamespace::ObstacleController* obstacleController);
    // public override System.Void DissolveAllObjects()
    // Offset: 0x10F9FF4
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DissolveAllObjects()
    void DissolveAllObjects();
    // public override System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0x10FA2AC
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::HideAllBeatmapObjects(System.Boolean hide)
    void HideAllBeatmapObjects(bool hide);
    // public override System.Void PauseAllBeatmapObjects(System.Boolean pause)
    // Offset: 0x10FA570
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::PauseAllBeatmapObjects(System.Boolean pause)
    void PauseAllBeatmapObjects(bool pause);
  }; // TutorialBeatmapObjectManager
  #pragma pack(pop)
  static check_size<sizeof(TutorialBeatmapObjectManager), 128 + sizeof(GlobalNamespace::TutorialBeatmapObjectManager::InitData*)> __GlobalNamespace_TutorialBeatmapObjectManagerSizeCheck;
  static_assert(sizeof(TutorialBeatmapObjectManager) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialBeatmapObjectManager*, "", "TutorialBeatmapObjectManager");
