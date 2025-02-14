// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyFreePlayFlowCoordinator
#include "GlobalNamespace/PartyFreePlayFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: PartyFreePlayFlowCoordinator/<>c__DisplayClass19_0
  // [CompilerGeneratedAttribute] Offset: E1257C
  class PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    // public PartyFreePlayFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PartyFreePlayFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyFreePlayFlowCoordinator*) == 0x8);
    // public LevelCompletionResults levelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    // public System.String leaderboardId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* leaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // public System.Boolean practice
    // Size: 0x1
    // Offset: 0x30
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass19_0
    $$c__DisplayClass19_0(GlobalNamespace::PartyFreePlayFlowCoordinator* $$4__this_ = {}, GlobalNamespace::LevelCompletionResults* levelCompletionResults_ = {}, ::Il2CppString* leaderboardId_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, bool practice_ = {}) noexcept : $$4__this{$$4__this_}, levelCompletionResults{levelCompletionResults_}, leaderboardId{leaderboardId_}, difficultyBeatmap{difficultyBeatmap_}, practice{practice_} {}
    // System.Void <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0x1007B60
    void $ProcessLevelCompletionResultsAfterLevelDidFinish$b__0(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName);
    // public System.Void .ctor()
    // Offset: 0x1007880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0*, creationType>()));
    }
  }; // PartyFreePlayFlowCoordinator/<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0), 48 + sizeof(bool)> __GlobalNamespace_PartyFreePlayFlowCoordinator_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass19_0");
