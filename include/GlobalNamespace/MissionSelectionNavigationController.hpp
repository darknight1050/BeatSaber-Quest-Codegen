// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionSelectionMapViewController
  class MissionSelectionMapViewController;
  // Forward declaring type: MissionLevelDetailViewController
  class MissionLevelDetailViewController;
  // Forward declaring type: MissionNode
  class MissionNode;
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
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MissionSelectionNavigationController
  // [] Offset: FFFFFFFF
  class MissionSelectionNavigationController : public HMUI::NavigationController {
    public:
    // Writing base type padding for base size: 0x94 to desired offset: 0x98
    char ___base_padding[0x4] = {};
    // Nested type: GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // [InjectAttribute] Offset: 0xD2ECF0
    // private MissionSelectionMapViewController _missionSelectionMapViewController
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MissionSelectionMapViewController* missionSelectionMapViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionSelectionMapViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2ED00
    // private MissionLevelDetailViewController _missionLevelDetailViewController
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MissionLevelDetailViewController* missionLevelDetailViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelDetailViewController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2ED10
    // private System.Action`1<MissionSelectionNavigationController> didPressPlayButtonEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* didPressPlayButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*) == 0x8);
    // Creating value type constructor for type: MissionSelectionNavigationController
    MissionSelectionNavigationController(GlobalNamespace::MissionSelectionMapViewController* missionSelectionMapViewController_ = {}, GlobalNamespace::MissionLevelDetailViewController* missionLevelDetailViewController_ = {}, System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* didPressPlayButtonEvent_ = {}) noexcept : missionSelectionMapViewController{missionSelectionMapViewController_}, missionLevelDetailViewController{missionLevelDetailViewController_}, didPressPlayButtonEvent{didPressPlayButtonEvent_} {}
    // public System.Void add_didPressPlayButtonEvent(System.Action`1<MissionSelectionNavigationController> value)
    // Offset: 0x102CF60
    void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action`1<MissionSelectionNavigationController> value)
    // Offset: 0x102D004
    void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* value);
    // public MissionNode get_selectedMissionNode()
    // Offset: 0x102D0A8
    GlobalNamespace::MissionNode* get_selectedMissionNode();
    // private System.Void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(MissionSelectionMapViewController viewController, MissionNode _missionNode)
    // Offset: 0x102D310
    void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(GlobalNamespace::MissionSelectionMapViewController* viewController, GlobalNamespace::MissionNode* _missionNode);
    // private System.Void HandleMissionLevelDetailViewControllerDidPressPlayButton(MissionLevelDetailViewController viewController)
    // Offset: 0x102D388
    void HandleMissionLevelDetailViewControllerDidPressPlayButton(GlobalNamespace::MissionLevelDetailViewController* viewController);
    // public System.Void PresentMissionClearedIfNeeded(System.Action`1<System.Boolean> finishedCallback)
    // Offset: 0x102D3EC
    void PresentMissionClearedIfNeeded(System::Action_1<bool>* finishedCallback);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x102D0C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate_NEW(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x102D220
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate_NEW(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x102D4F4
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionSelectionNavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionSelectionNavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionSelectionNavigationController*, creationType>()));
    }
  }; // MissionSelectionNavigationController
  #pragma pack(pop)
  static check_size<sizeof(MissionSelectionNavigationController), 168 + sizeof(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*)> __GlobalNamespace_MissionSelectionNavigationControllerSizeCheck;
  static_assert(sizeof(MissionSelectionNavigationController) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionSelectionNavigationController*, "", "MissionSelectionNavigationController");
