// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersViewController
#include "GlobalNamespace/NetworkPlayersViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformNetworkPlayerModel
  class PlatformNetworkPlayerModel;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: INetworkPlayerModel
  class INetworkPlayerModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB1
  #pragma pack(push, 1)
  // Autogenerated type: FriendsViewController
  class FriendsViewController : public GlobalNamespace::NetworkPlayersViewController {
    public:
    // private UnityEngine.UI.Toggle _enableOpenPartyToggle
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Toggle* enableOpenPartyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [InjectAttribute] Offset: 0xE24998
    // private readonly PlatformNetworkPlayerModel _networkPlayerModel
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::PlatformNetworkPlayerModel* networkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE249A8
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkConfig*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xA8
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private System.Boolean _allowAnyoneToJoin
    // Size: 0x1
    // Offset: 0xB0
    bool allowAnyoneToJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FriendsViewController
    FriendsViewController(UnityEngine::UI::Toggle* enableOpenPartyToggle_ = {}, GlobalNamespace::PlatformNetworkPlayerModel* networkPlayerModel_ = {}, GlobalNamespace::INetworkConfig* networkConfig_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, bool allowAnyoneToJoin_ = {}) noexcept : enableOpenPartyToggle{enableOpenPartyToggle_}, networkPlayerModel{networkPlayerModel_}, networkConfig{networkConfig_}, toggleBinder{toggleBinder_}, allowAnyoneToJoin{allowAnyoneToJoin_} {}
    // private System.Void HandleOpenPartyToggleChanged(System.Boolean openParty)
    // Offset: 0x1038358
    void HandleOpenPartyToggleChanged(bool openParty);
    // private System.Void RefreshParty(System.Boolean overrideHide)
    // Offset: 0x1038194
    void RefreshParty(bool overrideHide);
    // public override System.String get_myPartyTitle()
    // Offset: 0x1037FF0
    // Implemented from: NetworkPlayersViewController
    // Base method: System.String NetworkPlayersViewController::get_myPartyTitle()
    ::Il2CppString* get_myPartyTitle();
    // public override System.String get_otherPlayersTitle()
    // Offset: 0x1038038
    // Implemented from: NetworkPlayersViewController
    // Base method: System.String NetworkPlayersViewController::get_otherPlayersTitle()
    ::Il2CppString* get_otherPlayersTitle();
    // public override INetworkPlayerModel get_networkPlayerModel()
    // Offset: 0x1038080
    // Implemented from: NetworkPlayersViewController
    // Base method: INetworkPlayerModel NetworkPlayersViewController::get_networkPlayerModel()
    GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();
    // protected override System.Void NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x1038088
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10382D0
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1038324
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1038368
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FriendsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FriendsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FriendsViewController*, creationType>()));
    }
  }; // FriendsViewController
  #pragma pack(pop)
  static check_size<sizeof(FriendsViewController), 176 + sizeof(bool)> __GlobalNamespace_FriendsViewControllerSizeCheck;
  static_assert(sizeof(FriendsViewController) == 0xB1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FriendsViewController*, "", "FriendsViewController");
