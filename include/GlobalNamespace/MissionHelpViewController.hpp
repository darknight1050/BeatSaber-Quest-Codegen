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
  // Forward declaring type: MissionHelpSO
  class MissionHelpSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionHelpViewController
  class MissionHelpViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionHelpViewController::MissionHelpGameObjectPair
    class MissionHelpGameObjectPair;
    // private UnityEngine.UI.Button _okButton
    // Offset: 0x68
    UnityEngine::UI::Button* okButton;
    // private MissionHelpViewController/MissionHelpGameObjectPair[] _missionHelpGameObjectPairs
    // Offset: 0x70
    ::Array<GlobalNamespace::MissionHelpViewController::MissionHelpGameObjectPair*>* missionHelpGameObjectPairs;
    // private System.Action`1<MissionHelpViewController> didFinishEvent
    // Offset: 0x78
    System::Action_1<GlobalNamespace::MissionHelpViewController*>* didFinishEvent;
    // private MissionHelpSO _missionHelp
    // Offset: 0x80
    GlobalNamespace::MissionHelpSO* missionHelp;
    // public System.Void add_didFinishEvent(System.Action`1<MissionHelpViewController> value)
    // Offset: 0x1949E8C
    void add_didFinishEvent(System::Action_1<GlobalNamespace::MissionHelpViewController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<MissionHelpViewController> value)
    // Offset: 0x1949F30
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::MissionHelpViewController*>* value);
    // public System.Void Setup(MissionHelpSO missionHelp)
    // Offset: 0x1949FD4
    void Setup(GlobalNamespace::MissionHelpSO* missionHelp);
    // public System.Void RefreshContent()
    // Offset: 0x194A018
    void RefreshContent();
    // private System.Void OkButtonPressed()
    // Offset: 0x194A1AC
    void OkButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0x194A108
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0x194A210
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionHelpViewController* New_ctor();
  }; // MissionHelpViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionHelpViewController*, "", "MissionHelpViewController");
#pragma pack(pop)
