// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: PlayerData
  class PlayerData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LevelStatsView
  class LevelStatsView : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _highScoreText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* highScoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _maxComboText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* maxComboText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _maxRankText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* maxRankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: LevelStatsView
    LevelStatsView(TMPro::TextMeshProUGUI* highScoreText_ = {}, TMPro::TextMeshProUGUI* maxComboText_ = {}, TMPro::TextMeshProUGUI* maxRankText_ = {}) noexcept : highScoreText{highScoreText_}, maxComboText{maxComboText_}, maxRankText{maxRankText_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Hide()
    // Offset: 0x11FDDEC
    void Hide();
    // public System.Void ShowStats(IDifficultyBeatmap difficultyBeatmap, PlayerData playerData)
    // Offset: 0x11FDE14
    void ShowStats(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::PlayerData* playerData);
    // public System.Void .ctor()
    // Offset: 0x11FE1B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelStatsView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelStatsView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelStatsView*, creationType>()));
    }
  }; // LevelStatsView
  #pragma pack(pop)
  static check_size<sizeof(LevelStatsView), 40 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_LevelStatsViewSizeCheck;
  static_assert(sizeof(LevelStatsView) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelStatsView*, "", "LevelStatsView");
