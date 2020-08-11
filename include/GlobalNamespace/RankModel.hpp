// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RankModel
  class RankModel : public ::CsObject {
    public:
    // Nested type: GlobalNamespace::RankModel::Rank
    struct Rank;
    // static public System.String GetRankName(RankModel/Rank rank)
    // Offset: 0xC0A3A4
    static ::CsString* GetRankName(GlobalNamespace::RankModel::Rank rank);
    // static public RankModel/Rank MaxRankForGameplayModifiers(GameplayModifiers gameplayModifiers, GameplayModifiersModelSO gameplayModifiersModel)
    // Offset: 0xC0A408
    static GlobalNamespace::RankModel::Rank MaxRankForGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel);
    // static public RankModel/Rank GetRankForScore(System.Int32 rawScore, System.Int32 modifiedScore, System.Int32 maxRawScore, System.Int32 maxModifiedScore)
    // Offset: 0xC0A450
    static GlobalNamespace::RankModel::Rank GetRankForScore(int rawScore, int modifiedScore, int maxRawScore, int maxModifiedScore);
    // public System.Void .ctor()
    // Offset: 0xC0A584
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RankModel* New_ctor();
  }; // RankModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModel*, "", "RankModel");
#pragma pack(pop)
