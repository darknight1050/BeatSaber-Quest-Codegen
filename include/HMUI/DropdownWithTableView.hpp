// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ModalView
  class ModalView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.DropdownWithTableView
  class DropdownWithTableView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _button
    // Offset: 0x18
    UnityEngine::UI::Button* button;
    // private HMUI.TableView _tableView
    // Offset: 0x20
    HMUI::TableView* tableView;
    // private HMUI.ModalView _modalView
    // Offset: 0x28
    HMUI::ModalView* modalView;
    // private System.Action`2<HMUI.DropdownWithTableView,System.Int32> didSelectCellWithIdxEvent
    // Offset: 0x30
    System::Action_2<HMUI::DropdownWithTableView*, int>* didSelectCellWithIdxEvent;
    // private System.Int32 _selectedCellIdx
    // Offset: 0x38
    int selectedCellIdx;
    // private System.Boolean _shouldScrollToSelectedCell
    // Offset: 0x3C
    bool shouldScrollToSelectedCell;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`2<HMUI.DropdownWithTableView,System.Int32> value)
    // Offset: 0xE35EB8
    void add_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView*, int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`2<HMUI.DropdownWithTableView,System.Int32> value)
    // Offset: 0xE35F5C
    void remove_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView*, int>* value);
    // public HMUI.TableView/IDataSource get_tableViewDataSource()
    // Offset: 0xE36000
    HMUI::TableView::IDataSource* get_tableViewDataSource();
    // public System.Void Init(HMUI.TableView/IDataSource tableViewDataSource)
    // Offset: 0xE3601C
    void Init(HMUI::TableView::IDataSource* tableViewDataSource);
    // public System.Void ReloadData()
    // Offset: 0xE36054
    void ReloadData();
    // public System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0xE36090
    void SelectCellWithIdx(int idx);
    // protected System.Void Awake()
    // Offset: 0xE360B8
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0xE3629C
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0xE362E8
    void OnDestroy();
    // private System.Void OnButtonClick()
    // Offset: 0xE36554
    void OnButtonClick();
    // private System.Void HandleTableViewDidSelectCellWithIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xE365E0
    void HandleTableViewDidSelectCellWithIdx(HMUI::TableView* tableView, int idx);
    // private System.Void Hide(System.Boolean animated)
    // Offset: 0xE362A4
    void Hide(bool animated);
    // private System.Void Show(System.Boolean animated)
    // Offset: 0xE3655C
    void Show(bool animated);
    // private System.Void HandleModalViewBlockerClicked()
    // Offset: 0xE36B00
    void HandleModalViewBlockerClicked();
    // public System.Void .ctor()
    // Offset: 0xE36B08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DropdownWithTableView* New_ctor();
  }; // HMUI.DropdownWithTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::DropdownWithTableView*, "HMUI", "DropdownWithTableView");
#pragma pack(pop)
