// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: MultiplayerBadgeAwardData
  class MultiplayerBadgeAwardData;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData : public ::Il2CppObject/*, public System::IComparable*/ {
    public:
    // public readonly IConnectedPlayer connectedPlayer
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // public readonly MultiplayerLevelCompletionResults multiplayerLevelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelCompletionResults*) == 0x8);
    // public MultiplayerBadgeAwardData badge
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerBadgeAwardData* badge;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBadgeAwardData*) == 0x8);
    // Creating value type constructor for type: MultiplayerPlayerResultsData
    MultiplayerPlayerResultsData(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults_ = {}, GlobalNamespace::MultiplayerBadgeAwardData* badge_ = {}) noexcept : connectedPlayer{connectedPlayer_}, multiplayerLevelCompletionResults{multiplayerLevelCompletionResults_}, badge{badge_} {}
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // public LevelCompletionResults get_levelCompletionResults()
    // Offset: 0x23DFE50
    GlobalNamespace::LevelCompletionResults* get_levelCompletionResults();
    // public System.Void .ctor(IConnectedPlayer connectedPlayer, MultiplayerLevelCompletionResults multiplayerLevelCompletionResults)
    // Offset: 0x23DFE6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerPlayerResultsData* New_ctor(GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerPlayerResultsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerPlayerResultsData*, creationType>(connectedPlayer, multiplayerLevelCompletionResults)));
    }
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x23DFEA4
    int CompareTo(::Il2CppObject* obj);
  }; // MultiplayerPlayerResultsData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPlayerResultsData), 32 + sizeof(GlobalNamespace::MultiplayerBadgeAwardData*)> __GlobalNamespace_MultiplayerPlayerResultsDataSizeCheck;
  static_assert(sizeof(MultiplayerPlayerResultsData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerResultsData*, "", "MultiplayerPlayerResultsData");
