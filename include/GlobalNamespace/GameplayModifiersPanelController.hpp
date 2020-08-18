// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifierToggle
  class GameplayModifierToggle;
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifiersPanelController
  class GameplayModifiersPanelController : public GlobalNamespace::IRefreshable, public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private TMPro.TextMeshProUGUI _totalMultiplierValueText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* totalMultiplierValueText;
    // private TMPro.TextMeshProUGUI _maxRankValueText
    // Offset: 0x28
    TMPro::TextMeshProUGUI* maxRankValueText;
    // private GameplayModifiers _gameplayModifiers
    // Offset: 0x30
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private HMUI.ToggleBinder _toggleBinder
    // Offset: 0x38
    HMUI::ToggleBinder* toggleBinder;
    // private GameplayModifierToggle[] _gameplayModifierToggles
    // Offset: 0x40
    ::Array<GlobalNamespace::GameplayModifierToggle*>* gameplayModifierToggles;
    // private System.Boolean _changingGameplayModifierToggles
    // Offset: 0x48
    bool changingGameplayModifierToggles;
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xB40758
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public System.Void SetData(GameplayModifiers gameplayModifiers)
    // Offset: 0xB40760
    void SetData(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // protected System.Void Awake()
    // Offset: 0xB40768
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0xB4090C
    void OnDestroy();
    // private System.Void DisableTogglesWithGameplayModifier(GameplayModifierParamsSO gameplayModifier)
    // Offset: 0xB40920
    void DisableTogglesWithGameplayModifier(GlobalNamespace::GameplayModifierParamsSO* gameplayModifier);
    // private System.Void RefreshTotalMultiplierAndRankUI()
    // Offset: 0xB40AAC
    void RefreshTotalMultiplierAndRankUI();
    // public System.Void Refresh()
    // Offset: 0xB40A0C
    // Implemented from: IRefreshable
    // Base method: System.Void IRefreshable::Refresh()
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0xB40B84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayModifiersPanelController* New_ctor();
  }; // GameplayModifiersPanelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersPanelController*, "", "GameplayModifiersPanelController");
#pragma pack(pop)
