// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollView
  class ScrollView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeSelectionManager
  class MissionNodeSelectionManager;
  // Forward declaring type: MissionMapAnimationController
  class MissionMapAnimationController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  // Autogenerated type: MissionSelectionMapViewController
  // [] Offset: FFFFFFFF
  class MissionSelectionMapViewController : public HMUI::ViewController {
    public:
    // private HMUI.ScrollView _mapScrollView
    // Size: 0x8
    // Offset: 0x70
    HMUI::ScrollView* mapScrollView;
    // Field size check
    static_assert(sizeof(HMUI::ScrollView*) == 0x8);
    // private MissionNodeSelectionManager _missionNodeSelectionManager
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MissionNodeSelectionManager* missionNodeSelectionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeSelectionManager*) == 0x8);
    // private MissionMapAnimationController _missionMapAnimationController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MissionMapAnimationController* missionMapAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionMapAnimationController*) == 0x8);
    // [InjectAttribute] Offset: 0xDD05D0
    // private SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD05E0
    // private System.Action`2<MissionSelectionMapViewController,MissionNode> didSelectMissionLevelEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>* didSelectMissionLevelEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>*) == 0x8);
    // private MissionNode _selectedMissionNode
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MissionNode* selectedMissionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // Creating value type constructor for type: MissionSelectionMapViewController
    MissionSelectionMapViewController(HMUI::ScrollView* mapScrollView_ = {}, GlobalNamespace::MissionNodeSelectionManager* missionNodeSelectionManager_ = {}, GlobalNamespace::MissionMapAnimationController* missionMapAnimationController_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>* didSelectMissionLevelEvent_ = {}, GlobalNamespace::MissionNode* selectedMissionNode_ = {}) noexcept : mapScrollView{mapScrollView_}, missionNodeSelectionManager{missionNodeSelectionManager_}, missionMapAnimationController{missionMapAnimationController_}, songPreviewPlayer{songPreviewPlayer_}, didSelectMissionLevelEvent{didSelectMissionLevelEvent_}, selectedMissionNode{selectedMissionNode_} {}
    // public System.Void add_didSelectMissionLevelEvent(System.Action`2<MissionSelectionMapViewController,MissionNode> value)
    // Offset: 0x1020BDC
    void add_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>* value);
    // public System.Void remove_didSelectMissionLevelEvent(System.Action`2<MissionSelectionMapViewController,MissionNode> value)
    // Offset: 0x1020C80
    void remove_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*>* value);
    // public System.Boolean get_animatedUpdateIsRequired()
    // Offset: 0x1020D24
    bool get_animatedUpdateIsRequired();
    // private System.Void HandleMissionNodeSelectionManagerDidSelectMissionNode(MissionNodeVisualController missionNodeVisualController)
    // Offset: 0x1020FAC
    void HandleMissionNodeSelectionManagerDidSelectMissionNode(GlobalNamespace::MissionNodeVisualController* missionNodeVisualController);
    // public System.Void ShowMissionClearedAnimation(System.Action finishCallback)
    // Offset: 0x1021074
    void ShowMissionClearedAnimation(System::Action* finishCallback);
    // public System.Void DeselectSelectedNode()
    // Offset: 0x1021094
    void DeselectSelectedNode();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1020D3C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1020E80
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10210AC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionSelectionMapViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionSelectionMapViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionSelectionMapViewController*, creationType>()));
    }
  }; // MissionSelectionMapViewController
  static check_size<sizeof(MissionSelectionMapViewController), 152 + sizeof(GlobalNamespace::MissionNode*)> __GlobalNamespace_MissionSelectionMapViewControllerSizeCheck;
  static_assert(sizeof(MissionSelectionMapViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionSelectionMapViewController*, "", "MissionSelectionMapViewController");
#pragma pack(pop)
