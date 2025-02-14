// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteWasCutDelegate
  class NoteWasCutDelegate;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IScoreController
  class IScoreController {
    public:
    // Creating value type constructor for type: IScoreController
    IScoreController() noexcept {}
    // public System.Void add_noteWasCutEvent(NoteWasCutDelegate value)
    // Offset: 0xFFFFFFFF
    void add_noteWasCutEvent(GlobalNamespace::NoteWasCutDelegate* value);
    // public System.Void remove_noteWasCutEvent(NoteWasCutDelegate value)
    // Offset: 0xFFFFFFFF
    void remove_noteWasCutEvent(GlobalNamespace::NoteWasCutDelegate* value);
    // public System.Void add_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_noteWasMissedEvent(System::Action_2<GlobalNamespace::NoteData*, int>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_noteWasMissedEvent(System::Action_2<GlobalNamespace::NoteData*, int>* value);
    // public System.Void add_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_scoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void remove_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_scoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void add_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_immediateMaxPossibleScoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void remove_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_immediateMaxPossibleScoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void add_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_multiplierDidChangeEvent(System::Action_2<int, float>* value);
    // public System.Void remove_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_multiplierDidChangeEvent(System::Action_2<int, float>* value);
    // public System.Void add_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_comboDidChangeEvent(System::Action_1<int>* value);
    // public System.Void remove_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_comboDidChangeEvent(System::Action_1<int>* value);
    // public System.Void add_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_feverModeChargeProgressDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_feverModeChargeProgressDidChangeEvent(System::Action_1<float>* value);
    // public System.Void add_feverDidStartEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_feverDidStartEvent(System::Action* value);
    // public System.Void remove_feverDidStartEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_feverDidStartEvent(System::Action* value);
    // public System.Void add_feverDidFinishEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_feverDidFinishEvent(System::Action* value);
    // public System.Void remove_feverDidFinishEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_feverDidFinishEvent(System::Action* value);
    // public System.Void add_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_comboBreakingEventHappenedEvent(System::Action* value);
    // public System.Void remove_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_comboBreakingEventHappenedEvent(System::Action* value);
    // public System.Int32 get_prevFrameRawScore()
    // Offset: 0xFFFFFFFF
    int get_prevFrameRawScore();
    // public System.Int32 get_prevFrameModifiedScore()
    // Offset: 0xFFFFFFFF
    int get_prevFrameModifiedScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0xFFFFFFFF
    int get_maxCombo();
    // public System.Int32 get_multiplierWithFever()
    // Offset: 0xFFFFFFFF
    int get_multiplierWithFever();
    // public System.Boolean get_feverModeActive()
    // Offset: 0xFFFFFFFF
    bool get_feverModeActive();
    // public System.Single get_feverModeDrainProgress()
    // Offset: 0xFFFFFFFF
    float get_feverModeDrainProgress();
    // public System.Single get_feverModeChargeProgress()
    // Offset: 0xFFFFFFFF
    float get_feverModeChargeProgress();
    // public System.Int32 get_immediateMaxPossibleRawScore()
    // Offset: 0xFFFFFFFF
    int get_immediateMaxPossibleRawScore();
    // public System.Single get_gameplayModifiersScoreMultiplier()
    // Offset: 0xFFFFFFFF
    float get_gameplayModifiersScoreMultiplier();
    // public System.Void SetEnabled(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    void SetEnabled(bool enabled);
  }; // IScoreController
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IScoreController*, "", "IScoreController");
