// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IDestinationRequestManager
#include "GlobalNamespace/IDestinationRequestManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: MenuDestination
  class MenuDestination;
  // Forward declaring type: IDeeplinkManager
  class IDeeplinkManager;
  // Forward declaring type: Deeplink
  class Deeplink;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DeeplinkManagerToDestinationRequestManagerAdapter
  class DeeplinkManagerToDestinationRequestManagerAdapter : public ::CsObject, public GlobalNamespace::IDestinationRequestManager {
    public:
    // private BeatmapLevelsModel _beatmapLevelsModel
    // Offset: 0x10
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private System.Action`1<MenuDestination> didSendMenuDestinationRequestEvent
    // Offset: 0x20
    System::Action_1<GlobalNamespace::MenuDestination*>* didSendMenuDestinationRequestEvent;
    // private MenuDestination _currentMenuDestinationRequest
    // Offset: 0x28
    GlobalNamespace::MenuDestination* currentMenuDestinationRequest;
    // public System.Void Init(IDeeplinkManager deeplinkManager)
    // Offset: 0xBD094C
    void Init(GlobalNamespace::IDeeplinkManager* deeplinkManager);
    // protected System.Void HandleDeeplinkManagerDidReceiveDeeplink(Deeplink deeplink)
    // Offset: 0xBD0B24
    void HandleDeeplinkManagerDidReceiveDeeplink(GlobalNamespace::Deeplink* deeplink);
    // public System.Void add_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0xBD07FC
    // Implemented from: IDestinationRequestManager
    // Base method: System.Void IDestinationRequestManager::add_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    void add_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public System.Void remove_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0xBD08A0
    // Implemented from: IDestinationRequestManager
    // Base method: System.Void IDestinationRequestManager::remove_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    void remove_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public MenuDestination get_currentMenuDestinationRequest()
    // Offset: 0xBD0944
    // Implemented from: IDestinationRequestManager
    // Base method: MenuDestination IDestinationRequestManager::get_currentMenuDestinationRequest()
    GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();
    // public System.Void Clear()
    // Offset: 0xBD1090
    // Implemented from: IDestinationRequestManager
    // Base method: System.Void IDestinationRequestManager::Clear()
    void Clear();
    // public System.Void .ctor()
    // Offset: 0xBD109C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DeeplinkManagerToDestinationRequestManagerAdapter* New_ctor();
  }; // DeeplinkManagerToDestinationRequestManagerAdapter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*, "", "DeeplinkManagerToDestinationRequestManagerAdapter");
#pragma pack(pop)
