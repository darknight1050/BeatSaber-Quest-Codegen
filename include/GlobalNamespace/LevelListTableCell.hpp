// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: LevelListTableCell
  class LevelListTableCell : public HMUI::TableCell {
    public:
    // Nested type: GlobalNamespace::LevelListTableCell::$SetDataFromLevelAsync$d__17
    struct $SetDataFromLevelAsync$d__17;
    // Nested type: GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22
    struct $RefreshAvailabilityAsync$d__22;
    // private UnityEngine.UI.Image _backgroundImage
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [SpaceAttribute] Offset: 0xE21814
    // private UnityEngine.UI.Image _coverImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _songNameText
    // Size: 0x8
    // Offset: 0x68
    TMPro::TextMeshProUGUI* songNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _songAuthorText
    // Size: 0x8
    // Offset: 0x70
    TMPro::TextMeshProUGUI* songAuthorText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _favoritesBadgeImage
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Image* favoritesBadgeImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _songDurationText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* songDurationText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _songBpmText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* songBpmText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xE2189C
    // private UnityEngine.Color _highlightBackgroundColor
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Color highlightBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedBackgroundColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color selectedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedAndHighlightedBackgroundColor
    // Size: 0x10
    // Offset: 0xB0
    UnityEngine::Color selectedAndHighlightedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _notOwnedAlpha
    // Size: 0x4
    // Offset: 0xC0
    float notOwnedAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: notOwnedAlpha and: refreshingAvailabilityCancellationTokenSource
    char __padding11[0x4] = {};
    // private System.Threading.CancellationTokenSource _refreshingAvailabilityCancellationTokenSource
    // Size: 0x8
    // Offset: 0xC8
    System::Threading::CancellationTokenSource* refreshingAvailabilityCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Threading.CancellationTokenSource _settingDataCancellationTokenSource
    // Size: 0x8
    // Offset: 0xD0
    System::Threading::CancellationTokenSource* settingDataCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Boolean _notOwned
    // Size: 0x1
    // Offset: 0xD8
    bool notOwned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: notOwned and: refreshingAvailabilityLevelID
    char __padding14[0x7] = {};
    // private System.String _refreshingAvailabilityLevelID
    // Size: 0x8
    // Offset: 0xE0
    ::Il2CppString* refreshingAvailabilityLevelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _settingDataFromLevelId
    // Size: 0x8
    // Offset: 0xE8
    ::Il2CppString* settingDataFromLevelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LevelListTableCell
    LevelListTableCell(UnityEngine::UI::Image* backgroundImage_ = {}, UnityEngine::CanvasGroup* canvasGroup_ = {}, UnityEngine::UI::Image* coverImage_ = {}, TMPro::TextMeshProUGUI* songNameText_ = {}, TMPro::TextMeshProUGUI* songAuthorText_ = {}, UnityEngine::UI::Image* favoritesBadgeImage_ = {}, TMPro::TextMeshProUGUI* songDurationText_ = {}, TMPro::TextMeshProUGUI* songBpmText_ = {}, UnityEngine::Color highlightBackgroundColor_ = {}, UnityEngine::Color selectedBackgroundColor_ = {}, UnityEngine::Color selectedAndHighlightedBackgroundColor_ = {}, float notOwnedAlpha_ = {}, System::Threading::CancellationTokenSource* refreshingAvailabilityCancellationTokenSource_ = {}, System::Threading::CancellationTokenSource* settingDataCancellationTokenSource_ = {}, bool notOwned_ = {}, ::Il2CppString* refreshingAvailabilityLevelID_ = {}, ::Il2CppString* settingDataFromLevelId_ = {}) noexcept : backgroundImage{backgroundImage_}, canvasGroup{canvasGroup_}, coverImage{coverImage_}, songNameText{songNameText_}, songAuthorText{songAuthorText_}, favoritesBadgeImage{favoritesBadgeImage_}, songDurationText{songDurationText_}, songBpmText{songBpmText_}, highlightBackgroundColor{highlightBackgroundColor_}, selectedBackgroundColor{selectedBackgroundColor_}, selectedAndHighlightedBackgroundColor{selectedAndHighlightedBackgroundColor_}, notOwnedAlpha{notOwnedAlpha_}, refreshingAvailabilityCancellationTokenSource{refreshingAvailabilityCancellationTokenSource_}, settingDataCancellationTokenSource{settingDataCancellationTokenSource_}, notOwned{notOwned_}, refreshingAvailabilityLevelID{refreshingAvailabilityLevelID_}, settingDataFromLevelId{settingDataFromLevelId_} {}
    // public System.Void SetDataFromLevelAsync(IPreviewBeatmapLevel level, System.Boolean isFavorite)
    // Offset: 0x11F7CBC
    void SetDataFromLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* level, bool isFavorite);
    // private System.Void RefreshVisuals()
    // Offset: 0x11F7D94
    void RefreshVisuals();
    // public System.Void RefreshAvailabilityAsync(AdditionalContentModel contentModel, System.String levelID)
    // Offset: 0x11F7EB0
    void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel* contentModel, ::Il2CppString* levelID);
    // public System.Void CancelAsyncOperations()
    // Offset: 0x11F7E6C
    void CancelAsyncOperations();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x11F7D90
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x11F7E64
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void WasPreparedForReuse()
    // Offset: 0x11F7E68
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::WasPreparedForReuse()
    void WasPreparedForReuse();
    // public System.Void .ctor()
    // Offset: 0x11F7F80
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelListTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelListTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelListTableCell*, creationType>()));
    }
  }; // LevelListTableCell
  #pragma pack(pop)
  static check_size<sizeof(LevelListTableCell), 232 + sizeof(::Il2CppString*)> __GlobalNamespace_LevelListTableCellSizeCheck;
  static_assert(sizeof(LevelListTableCell) == 0xF0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelListTableCell*, "", "LevelListTableCell");
