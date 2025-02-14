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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RelativeScoreAndImmediateRankCounter
  class RelativeScoreAndImmediateRankCounter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ImmediateRankUIPanel
  class ImmediateRankUIPanel : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _relativeScoreText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* relativeScoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B9C8
    // private RelativeScoreAndImmediateRankCounter _relativeScoreAndImmediateRankCounter
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::RelativeScoreAndImmediateRankCounter* relativeScoreAndImmediateRankCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*) == 0x8);
    // private System.Text.StringBuilder _stringBuilder
    // Size: 0x8
    // Offset: 0x30
    System::Text::StringBuilder* stringBuilder;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Single _prevRelativeScore
    // Size: 0x4
    // Offset: 0x38
    float prevRelativeScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RankModel/Rank _prevImmediateRank
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::RankModel::Rank prevImmediateRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // Creating value type constructor for type: ImmediateRankUIPanel
    ImmediateRankUIPanel(TMPro::TextMeshProUGUI* rankText_ = {}, TMPro::TextMeshProUGUI* relativeScoreText_ = {}, GlobalNamespace::RelativeScoreAndImmediateRankCounter* relativeScoreAndImmediateRankCounter_ = {}, System::Text::StringBuilder* stringBuilder_ = {}, float prevRelativeScore_ = {}, GlobalNamespace::RankModel::Rank prevImmediateRank_ = {}) noexcept : rankText{rankText_}, relativeScoreText{relativeScoreText_}, relativeScoreAndImmediateRankCounter{relativeScoreAndImmediateRankCounter_}, stringBuilder{stringBuilder_}, prevRelativeScore{prevRelativeScore_}, prevImmediateRank{prevImmediateRank_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1069234
    void Start();
    // protected System.Void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange()
    // Offset: 0x106946C
    void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange();
    // private System.Void RefreshUI()
    // Offset: 0x10692EC
    void RefreshUI();
    // public System.Void .ctor()
    // Offset: 0x1069470
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImmediateRankUIPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ImmediateRankUIPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImmediateRankUIPanel*, creationType>()));
    }
  }; // ImmediateRankUIPanel
  #pragma pack(pop)
  static check_size<sizeof(ImmediateRankUIPanel), 60 + sizeof(GlobalNamespace::RankModel::Rank)> __GlobalNamespace_ImmediateRankUIPanelSizeCheck;
  static_assert(sizeof(ImmediateRankUIPanel) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImmediateRankUIPanel*, "", "ImmediateRankUIPanel");
