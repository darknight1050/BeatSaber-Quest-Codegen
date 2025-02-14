// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BadCutsMissionObjectiveChecker
  class BadCutsMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xE1C8E0
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // Creating value type constructor for type: BadCutsMissionObjectiveChecker
    BadCutsMissionObjectiveChecker(GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}) noexcept : beatmapObjectManager{beatmapObjectManager_} {}
    // protected System.Void OnDestroy()
    // Offset: 0x113815C
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x11381F4
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo& noteCutInfo);
    // protected override System.Void Init()
    // Offset: 0x1138064
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x113826C
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadCutsMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BadCutsMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadCutsMissionObjectiveChecker*, creationType>()));
    }
  }; // BadCutsMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(BadCutsMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::BeatmapObjectManager*)> __GlobalNamespace_BadCutsMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(BadCutsMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BadCutsMissionObjectiveChecker*, "", "BadCutsMissionObjectiveChecker");
