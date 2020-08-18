// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSettingsPanelController
  class PlayerSettingsPanelController;
  // Forward declaring type: GameplayModifiersPanelController
  class GameplayModifiersPanelController;
  // Forward declaring type: EnvironmentOverrideSettingsPanelController
  class EnvironmentOverrideSettingsPanelController;
  // Forward declaring type: ColorsOverrideSettingsPanelController
  class ColorsOverrideSettingsPanelController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplaySetupViewController
  class GameplaySetupViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::GameplaySetupViewController::Panel
    class Panel;
    // private HMUI.TextSegmentedControl _selectionSegmentedControl
    // Offset: 0x68
    HMUI::TextSegmentedControl* selectionSegmentedControl;
    // private PlayerSettingsPanelController _playerSettingsPanelController
    // Offset: 0x70
    GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController;
    // private GameplayModifiersPanelController _gameplayModifiersPanelController
    // Offset: 0x78
    GlobalNamespace::GameplayModifiersPanelController* gameplayModifiersPanelController;
    // private EnvironmentOverrideSettingsPanelController _environmentOverrideSettingsPanelController
    // Offset: 0x80
    GlobalNamespace::EnvironmentOverrideSettingsPanelController* environmentOverrideSettingsPanelController;
    // private ColorsOverrideSettingsPanelController _colorsOverrideSettingsPanelController
    // Offset: 0x88
    GlobalNamespace::ColorsOverrideSettingsPanelController* colorsOverrideSettingsPanelController;
    // private PlayerDataModel _playerDataModel
    // Offset: 0x90
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private System.Collections.Generic.List`1<GameplaySetupViewController/Panel> _panels
    // Offset: 0x98
    System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>* panels;
    // private System.Int32 _activePanelIdx
    // Offset: 0xA0
    int activePanelIdx;
    // private System.Boolean _showModifiers
    // Offset: 0xA4
    bool showModifiers;
    // private System.Boolean _showEnvironmentOverrideSettings
    // Offset: 0xA5
    bool showEnvironmentOverrideSettings;
    // private System.Boolean _showColorSchemesSettings
    // Offset: 0xA6
    bool showColorSchemesSettings;
    // private System.Boolean _shouldRefreshContent
    // Offset: 0xA7
    bool shouldRefreshContent;
    // private System.Boolean _isInitialized
    // Offset: 0xA8
    bool isInitialized;
    // public PlayerSpecificSettings get_playerSettings()
    // Offset: 0xB40C78
    GlobalNamespace::PlayerSpecificSettings* get_playerSettings();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xB40CA0
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public OverrideEnvironmentSettings get_environmentOverrideSettings()
    // Offset: 0xB40CC8
    GlobalNamespace::OverrideEnvironmentSettings* get_environmentOverrideSettings();
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0xB40CF0
    GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // public System.Void Setup(System.Boolean showModifiers, System.Boolean showEnvironmentOverrideSettings, System.Boolean showColorSchemesSettings)
    // Offset: 0xB40D18
    void Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings);
    // private System.Void Init()
    // Offset: 0xB40D8C
    void Init();
    // private System.Void HandleSelectionSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0xB413E4
    void HandleSelectionSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // private System.Void SetActivePanel(System.Int32 panelIdx)
    // Offset: 0xB4132C
    void SetActivePanel(int panelIdx);
    // private System.Void RefreshContent()
    // Offset: 0xB40E40
    void RefreshContent();
    // private System.Void RefreshActivePanel()
    // Offset: 0xB413EC
    void RefreshActivePanel();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB41258
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xB4153C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplaySetupViewController* New_ctor();
  }; // GameplaySetupViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController*, "", "GameplaySetupViewController");
#pragma pack(pop)
