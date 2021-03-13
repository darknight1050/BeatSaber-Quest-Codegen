// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RelativeScoreAndImmediateRankCounter
  // [] Offset: FFFFFFFF
  class RelativeScoreAndImmediateRankCounter : public UnityEngine::MonoBehaviour {
    public:
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD252E4
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xD252F4
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25304
    // private System.Action relativeScoreOrImmediateRankDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* relativeScoreOrImmediateRankDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25314
    // private System.Single <relativeScore>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    float relativeScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD25324
    // private RankModel/Rank <immediateRank>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::RankModel::Rank immediateRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // Creating value type constructor for type: RelativeScoreAndImmediateRankCounter
    RelativeScoreAndImmediateRankCounter(GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, System::Action* relativeScoreOrImmediateRankDidChangeEvent_ = {}, float relativeScore_ = {}, GlobalNamespace::RankModel::Rank immediateRank_ = {}) noexcept : gameplayModifiersModel{gameplayModifiersModel_}, scoreController{scoreController_}, gameplayModifiers{gameplayModifiers_}, relativeScoreOrImmediateRankDidChangeEvent{relativeScoreOrImmediateRankDidChangeEvent_}, relativeScore{relativeScore_}, immediateRank{immediateRank_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_relativeScoreOrImmediateRankDidChangeEvent(System.Action value)
    // Offset: 0xFA4968
    void add_relativeScoreOrImmediateRankDidChangeEvent(System::Action* value);
    // public System.Void remove_relativeScoreOrImmediateRankDidChangeEvent(System.Action value)
    // Offset: 0xFA4A0C
    void remove_relativeScoreOrImmediateRankDidChangeEvent(System::Action* value);
    // public System.Single get_relativeScore()
    // Offset: 0xFA4AB0
    float get_relativeScore();
    // private System.Void set_relativeScore(System.Single value)
    // Offset: 0xFA4AB8
    void set_relativeScore(float value);
    // public RankModel/Rank get_immediateRank()
    // Offset: 0xFA4AC0
    GlobalNamespace::RankModel::Rank get_immediateRank();
    // private System.Void set_immediateRank(RankModel/Rank value)
    // Offset: 0xFA4AC8
    void set_immediateRank(GlobalNamespace::RankModel::Rank value);
    // protected System.Void Start()
    // Offset: 0xFA4AD0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFA4C08
    void OnDestroy();
    // private System.Void HandleScoreControllerImmediateMaxPossibleScoreDidChange(System.Int32 immediateMaxPossibleScore, System.Int32 immediateMaxPossibleModifiedScore)
    // Offset: 0xFA4D08
    void HandleScoreControllerImmediateMaxPossibleScoreDidChange(int immediateMaxPossibleScore, int immediateMaxPossibleModifiedScore);
    // private System.Void UpdateRelativeScoreAndImmediateRank(System.Int32 score, System.Int32 modifiedScore, System.Int32 maxPossibleScore, System.Int32 maxPossibleModifiedScore)
    // Offset: 0xFA4E5C
    void UpdateRelativeScoreAndImmediateRank(int score, int modifiedScore, int maxPossibleScore, int maxPossibleModifiedScore);
    // public System.Void .ctor()
    // Offset: 0xFA4EE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelativeScoreAndImmediateRankCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RelativeScoreAndImmediateRankCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelativeScoreAndImmediateRankCounter*, creationType>()));
    }
  }; // RelativeScoreAndImmediateRankCounter
  #pragma pack(pop)
  static check_size<sizeof(RelativeScoreAndImmediateRankCounter), 60 + sizeof(GlobalNamespace::RankModel::Rank)> __GlobalNamespace_RelativeScoreAndImmediateRankCounterSizeCheck;
  static_assert(sizeof(RelativeScoreAndImmediateRankCounter) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RelativeScoreAndImmediateRankCounter*, "", "RelativeScoreAndImmediateRankCounter");
