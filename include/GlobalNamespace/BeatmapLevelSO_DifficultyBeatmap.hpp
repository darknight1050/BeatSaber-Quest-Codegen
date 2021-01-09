// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataSO
  class BeatmapDataSO;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: BeatmapLevelSO/DifficultyBeatmap
  // [] Offset: FFFFFFFF
  class BeatmapLevelSO::DifficultyBeatmap : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmap*/ {
    public:
    // private BeatmapDifficulty _difficulty
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private System.Int32 _difficultyRank
    // Size: 0x4
    // Offset: 0x14
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x18
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x1C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapDataSO _beatmapData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapDataSO* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDataSO*) == 0x8);
    // private IBeatmapLevel _parentLevel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IBeatmapLevel* parentLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private IDifficultyBeatmapSet _parentDifficultyBeatmapSet
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmapSet*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmap
    DifficultyBeatmap(GlobalNamespace::BeatmapDifficulty difficulty_ = {}, int difficultyRank_ = {}, float noteJumpMovementSpeed_ = {}, float noteJumpStartBeatOffset_ = {}, GlobalNamespace::BeatmapDataSO* beatmapData_ = {}, GlobalNamespace::IBeatmapLevel* parentLevel_ = {}, GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet_ = {}) noexcept : difficulty{difficulty_}, difficultyRank{difficultyRank_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, noteJumpStartBeatOffset{noteJumpStartBeatOffset_}, beatmapData{beatmapData_}, parentLevel{parentLevel_}, parentDifficultyBeatmapSet{parentDifficultyBeatmapSet_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmap
    operator GlobalNamespace::IDifficultyBeatmap() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // public System.Void SetParents(IBeatmapLevel parentLevel, IDifficultyBeatmapSet parentDifficultyBeatmapSet)
    // Offset: 0x1A86C58
    void SetParents(GlobalNamespace::IBeatmapLevel* parentLevel, GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet);
    // public System.Void .ctor(IBeatmapLevel parentLevel, BeatmapDifficulty difficulty, System.Int32 difficultyRank, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset, BeatmapDataSO beatmapData)
    // Offset: 0x1A8A530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelSO::DifficultyBeatmap* New_ctor(GlobalNamespace::IBeatmapLevel* parentLevel, GlobalNamespace::BeatmapDifficulty difficulty, int difficultyRank, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, GlobalNamespace::BeatmapDataSO* beatmapData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelSO::DifficultyBeatmap*, creationType>(parentLevel, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, beatmapData)));
    }
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x1A8A4C8
    // Implemented from: IDifficultyBeatmap
    // Base method: BeatmapDifficulty IDifficultyBeatmap::get_difficulty()
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x1A8A4D0
    // Implemented from: IDifficultyBeatmap
    // Base method: System.Int32 IDifficultyBeatmap::get_difficultyRank()
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x1A8A4D8
    // Implemented from: IDifficultyBeatmap
    // Base method: System.Single IDifficultyBeatmap::get_noteJumpMovementSpeed()
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x1A8A4E0
    // Implemented from: IDifficultyBeatmap
    // Base method: System.Single IDifficultyBeatmap::get_noteJumpStartBeatOffset()
    float get_noteJumpStartBeatOffset();
    // public BeatmapData get_beatmapData()
    // Offset: 0x1A8A4E8
    // Implemented from: IDifficultyBeatmap
    // Base method: BeatmapData IDifficultyBeatmap::get_beatmapData()
    GlobalNamespace::BeatmapData* get_beatmapData();
    // public IBeatmapLevel get_level()
    // Offset: 0x1A8A520
    // Implemented from: IDifficultyBeatmap
    // Base method: IBeatmapLevel IDifficultyBeatmap::get_level()
    GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0x1A8A528
    // Implemented from: IDifficultyBeatmap
    // Base method: IDifficultyBeatmapSet IDifficultyBeatmap::get_parentDifficultyBeatmapSet()
    GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
  }; // BeatmapLevelSO/DifficultyBeatmap
  static check_size<sizeof(BeatmapLevelSO::DifficultyBeatmap), 48 + sizeof(GlobalNamespace::IDifficultyBeatmapSet*)> __GlobalNamespace_BeatmapLevelSO_DifficultyBeatmapSizeCheck;
  static_assert(sizeof(BeatmapLevelSO::DifficultyBeatmap) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*, "", "BeatmapLevelSO/DifficultyBeatmap");
#pragma pack(pop)
