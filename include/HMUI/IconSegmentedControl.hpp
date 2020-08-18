// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.SegmentedControl/IDataSource
#include "HMUI/SegmentedControl_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControlCell
  class IconSegmentedControlCell;
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.IconSegmentedControl
  class IconSegmentedControl : public HMUI::SegmentedControl::IDataSource, public HMUI::SegmentedControl {
    public:
    // Nested type: HMUI::IconSegmentedControl::DataItem
    class DataItem;
    // private HMUI.IconSegmentedControlCell _firstCellPrefab
    // Offset: 0x50
    HMUI::IconSegmentedControlCell* firstCellPrefab;
    // private HMUI.IconSegmentedControlCell _lastCellPrefab
    // Offset: 0x58
    HMUI::IconSegmentedControlCell* lastCellPrefab;
    // private HMUI.IconSegmentedControlCell _middleCellPrefab
    // Offset: 0x60
    HMUI::IconSegmentedControlCell* middleCellPrefab;
    // private HMUI.IconSegmentedControlCell _singleCellPrefab
    // Offset: 0x68
    HMUI::IconSegmentedControlCell* singleCellPrefab;
    // private Zenject.DiContainer _container
    // Offset: 0x70
    Zenject::DiContainer* container;
    // private HMUI.IconSegmentedControl/DataItem[] _dataItems
    // Offset: 0x78
    ::Array<HMUI::IconSegmentedControl::DataItem*>* dataItems;
    // private System.Boolean _isInitialized
    // Offset: 0x80
    bool isInitialized;
    // protected System.Void Init()
    // Offset: 0xE3F64C
    void Init();
    // public System.Void SetData(HMUI.IconSegmentedControl/DataItem[] dataItems)
    // Offset: 0xE3F66C
    void SetData(::Array<HMUI::IconSegmentedControl::DataItem*>* dataItems);
    // private HMUI.IconSegmentedControlCell InstantiateCell(UnityEngine.Object prefab)
    // Offset: 0xE3F7D4
    HMUI::IconSegmentedControlCell* InstantiateCell(UnityEngine::Object* prefab);
    // public System.Int32 NumberOfCells()
    // Offset: 0xE3F6C4
    // Implemented from: HMUI.SegmentedControl/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.SegmentedControlCell CellForCellNumber(System.Int32 cellNumber)
    // Offset: 0xE3F6DC
    // Implemented from: HMUI.SegmentedControl/IDataSource
    // Base method: HMUI.SegmentedControlCell IDataSource::CellForCellNumber(System.Int32 cellNumber)
    HMUI::SegmentedControlCell* CellForCellNumber(int cellNumber);
    // public System.Void .ctor()
    // Offset: 0xE3F968
    // Implemented from: HMUI.SegmentedControl
    // Base method: System.Void SegmentedControl::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static IconSegmentedControl* New_ctor();
  }; // HMUI.IconSegmentedControl
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControl*, "HMUI", "IconSegmentedControl");
#pragma pack(pop)
