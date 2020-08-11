// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RawImage
  class RawImage;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelListTableCell
  class LevelListTableCell : public HMUI::TableCell {
    public:
    // Nested type: GlobalNamespace::LevelListTableCell::$SetDataFromLevelAsync$d__15
    struct $SetDataFromLevelAsync$d__15;
    // Nested type: GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__20
    struct $RefreshAvailabilityAsync$d__20;
    // private UnityEngine.Color _selectedHighlightElementsColor
    // Offset: 0x4C
    UnityEngine::Color selectedHighlightElementsColor;
    // private UnityEngine.Color _beatmapCharacteristicImagesNormalColor
    // Offset: 0x5C
    UnityEngine::Color beatmapCharacteristicImagesNormalColor;
    // private TMPro.TextMeshProUGUI _songNameText
    // Offset: 0x70
    TMPro::TextMeshProUGUI* songNameText;
    // private TMPro.TextMeshProUGUI _authorText
    // Offset: 0x78
    TMPro::TextMeshProUGUI* authorText;
    // private UnityEngine.UI.RawImage _coverRawImage
    // Offset: 0x80
    UnityEngine::UI::RawImage* coverRawImage;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x88
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _highlightImage
    // Offset: 0x90
    UnityEngine::UI::Image* highlightImage;
    // private UnityEngine.UI.Image[] _beatmapCharacteristicImages
    // Offset: 0x98
    ::Array<UnityEngine::UI::Image*>* beatmapCharacteristicImages;
    // private BeatmapCharacteristicSO[] _beatmapCharacteristics
    // Offset: 0xA0
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // private UnityEngine.UI.RawImage _favoritesBadgeImage
    // Offset: 0xA8
    UnityEngine::UI::RawImage* favoritesBadgeImage;
    // private System.Threading.CancellationTokenSource _refreshingAvailabilityCancellationTokenSource
    // Offset: 0xB0
    System::Threading::CancellationTokenSource* refreshingAvailabilityCancellationTokenSource;
    // private System.Threading.CancellationTokenSource _settingDataCancellationTokenSource
    // Offset: 0xB8
    System::Threading::CancellationTokenSource* settingDataCancellationTokenSource;
    // private System.Boolean _bought
    // Offset: 0xC0
    bool bought;
    // private System.String _refreshingAvailabilityLevelID
    // Offset: 0xC8
    ::CsString* refreshingAvailabilityLevelID;
    // private System.String _settingDataFromLevelId
    // Offset: 0xD0
    ::CsString* settingDataFromLevelId;
    // public System.Void SetDataFromLevelAsync(IPreviewBeatmapLevel level, System.Boolean isFavorite)
    // Offset: 0xB48FD4
    void SetDataFromLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* level, bool isFavorite);
    // private System.Void RefreshVisuals()
    // Offset: 0xB4CEEC
    void RefreshVisuals();
    // public System.Void RefreshAvailabilityAsync(AdditionalContentModel contentModel, System.String levelID)
    // Offset: 0xB490D0
    void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel* contentModel, ::CsString* levelID);
    // public System.Void CancelAsyncOperations()
    // Offset: 0xB496A4
    void CancelAsyncOperations();
    // protected override System.Void SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0xB4CEE8
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0xB4D1BC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void WasPreparedForReuse()
    // Offset: 0xB4D1C0
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::WasPreparedForReuse()
    void WasPreparedForReuse();
    // public System.Void .ctor()
    // Offset: 0xB4D1C4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelListTableCell* New_ctor();
  }; // LevelListTableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelListTableCell*, "", "LevelListTableCell");
#pragma pack(pop)
