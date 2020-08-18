// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Including type: HMUI.TableViewScroller
#include "HMUI/TableViewScroller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.SectionTableView
  class SectionTableView : public HMUI::TableView::IDataSource, public HMUI::TableView {
    public:
    // Nested type: HMUI::SectionTableView::IDataSource
    class IDataSource;
    // Nested type: HMUI::SectionTableView::Section
    struct Section;
    // private System.Boolean _unfoldSectionsByDefault
    // Offset: 0xB1
    bool unfoldSectionsByDefault;
    // private System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> didSelectRowInSectionEvent
    // Offset: 0xB8
    System::Action_3<HMUI::SectionTableView*, int, int>* didSelectRowInSectionEvent;
    // private System.Action`2<HMUI.SectionTableView,System.Int32> didSelectHeaderEvent
    // Offset: 0xC0
    System::Action_2<HMUI::SectionTableView*, int>* didSelectHeaderEvent;
    // private HMUI.SectionTableView/IDataSource _dataSource
    // Offset: 0xC8
    HMUI::SectionTableView::IDataSource* dataSource;
    // private HMUI.SectionTableView/Section[] _sections
    // Offset: 0xD0
    ::Array<HMUI::SectionTableView::Section>* sections;
    // public System.Void add_didSelectRowInSectionEvent(System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> value)
    // Offset: 0x103FEF0
    void add_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView*, int, int>* value);
    // public System.Void remove_didSelectRowInSectionEvent(System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> value)
    // Offset: 0x103FF94
    void remove_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView*, int, int>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`2<HMUI.SectionTableView,System.Int32> value)
    // Offset: 0x1040038
    void add_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView*, int>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`2<HMUI.SectionTableView,System.Int32> value)
    // Offset: 0x10400DC
    void remove_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView*, int>* value);
    // public HMUI.SectionTableView/IDataSource get_dataSource()
    // Offset: 0x1040180
    HMUI::SectionTableView::IDataSource* get_dataSource();
    // public System.Void set_dataSource(HMUI.SectionTableView/IDataSource value)
    // Offset: 0x1040188
    void set_dataSource(HMUI::SectionTableView::IDataSource* value);
    // public System.Boolean IsSectionUnfolded(System.Int32 section)
    // Offset: 0x10401E0
    bool IsSectionUnfolded(int section);
    // public System.Void ReloadData(System.Boolean resetFoldState)
    // Offset: 0x10405C8
    void ReloadData(bool resetFoldState);
    // public System.Void UnfoldAllSections()
    // Offset: 0x1040B7C
    void UnfoldAllSections();
    // public System.Void FoldAll()
    // Offset: 0x1040BDC
    void FoldAll();
    // public System.Void UnfoldSection(System.Int32 section)
    // Offset: 0x1040C38
    void UnfoldSection(int section);
    // public System.Void FoldSection(System.Int32 section)
    // Offset: 0x10410C8
    void FoldSection(int section);
    // public System.Void ScrollToRow(System.Int32 section, System.Int32 row, HMUI.TableViewScroller/ScrollPositionType scrollPositionType, System.Boolean animated)
    // Offset: 0x10414B0
    void ScrollToRow(int section, int row, HMUI::TableViewScroller::ScrollPositionType scrollPositionType, bool animated);
    // public System.Void SectionAndRowForBaseRow(System.Int32 baseRow, System.Int32 section, System.Int32 row, System.Boolean isSectionHeader)
    // Offset: 0x10404D0
    void SectionAndRowForBaseRow(int baseRow, int& section, int& row, bool& isSectionHeader);
    // public System.Single CellSize()
    // Offset: 0x1040220
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x10402D0
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 baseRow)
    // Offset: 0x1040320
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 baseRow)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int baseRow);
    // public override System.Void ReloadData()
    // Offset: 0x10405C0
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::ReloadData()
    void ReloadData();
    // protected override System.Void DidSelectCellWithIdx(System.Int32 baseRow)
    // Offset: 0x1040AB4
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::DidSelectCellWithIdx(System.Int32 baseRow)
    void DidSelectCellWithIdx(int baseRow);
    // public System.Void .ctor()
    // Offset: 0x1041550
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SectionTableView* New_ctor();
  }; // HMUI.SectionTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::SectionTableView*, "HMUI", "SectionTableView");
#pragma pack(pop)
