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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicsTableView
  class BeatmapCharacteristicsTableView;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
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
  // Size: 0x8C
  // Autogenerated type: BeatmapCharacteristicsViewController
  // [] Offset: FFFFFFFF
  class BeatmapCharacteristicsViewController : public HMUI::ViewController {
    public:
    // private BeatmapCharacteristicsTableView _beatmapCharacteristicsTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapCharacteristicsTableView* beatmapCharacteristicsTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicsTableView*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFAC8
    // private System.Action`1<BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private System.Int32 _selectedBeatmapCharacteristicNum
    // Size: 0x4
    // Offset: 0x88
    int selectedBeatmapCharacteristicNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapCharacteristicsViewController
    BeatmapCharacteristicsViewController(GlobalNamespace::BeatmapCharacteristicsTableView* beatmapCharacteristicsTableView_ = {}, System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent_ = {}, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, int selectedBeatmapCharacteristicNum_ = {}) noexcept : beatmapCharacteristicsTableView{beatmapCharacteristicsTableView_}, didSelectBeatmapCharacteristicEvent{didSelectBeatmapCharacteristicEvent_}, beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, selectedBeatmapCharacteristicNum{selectedBeatmapCharacteristicNum_} {}
    // public System.Void add_didSelectBeatmapCharacteristicEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x1A7D858
    void add_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectBeatmapCharacteristicEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x1A7D8FC
    void remove_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicCollectionSO get_beatmapCharacteristicCollection()
    // Offset: 0x1A7D9A0
    GlobalNamespace::BeatmapCharacteristicCollectionSO* get_beatmapCharacteristicCollection();
    // public BeatmapCharacteristicSO get_selectedBeatmapCharacteristic()
    // Offset: 0x1A7D9A8
    GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();
    // public System.Void SetData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, System.Int32 selectedCharacteristicNum)
    // Offset: 0x1A7DBC8
    void SetData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, int selectedCharacteristicNum);
    // private System.Void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1A7DC44
    void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A7DA68
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1A7DB20
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1A7DD60
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicsViewController*, creationType>()));
    }
  }; // BeatmapCharacteristicsViewController
  static check_size<sizeof(BeatmapCharacteristicsViewController), 136 + sizeof(int)> __GlobalNamespace_BeatmapCharacteristicsViewControllerSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicsViewController) == 0x8C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsViewController*, "", "BeatmapCharacteristicsViewController");
#pragma pack(pop)
