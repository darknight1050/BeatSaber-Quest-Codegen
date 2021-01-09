// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NetworkPlayerTableCell
  class NetworkPlayerTableCell;
  // Forward declaring type: NetworkPlayerOptionsTableCell
  class NetworkPlayerOptionsTableCell;
  // Forward declaring type: LevelPackHeaderTableCell
  class LevelPackHeaderTableCell;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  // Autogenerated type: NetworkPlayersTableView
  // [] Offset: FFFFFFFF
  class NetworkPlayersTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: GlobalNamespace::NetworkPlayersTableView::CellInfo
    class CellInfo;
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private NetworkPlayerTableCell _playerCellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetworkPlayerTableCell* playerCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerTableCell*) == 0x8);
    // private NetworkPlayerOptionsTableCell _optionsCellPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NetworkPlayerOptionsTableCell* optionsCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerOptionsTableCell*) == 0x8);
    // private LevelPackHeaderTableCell _headerCellPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::LevelPackHeaderTableCell* headerCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelPackHeaderTableCell*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x38
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rowHeight and: cellInfo
    char __padding4[0x4] = {};
    // private System.Collections.Generic.List`1<NetworkPlayersTableView/CellInfo> _cellInfo
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* cellInfo;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>*) == 0x8);
    // private System.Int32 _selectedCellIndex
    // Size: 0x4
    // Offset: 0x48
    int selectedCellIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedCellIndex and: selectedPlayerID
    char __padding6[0x4] = {};
    // private System.String _selectedPlayerID
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* selectedPlayerID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _selectedCellHasOptions
    // Size: 0x1
    // Offset: 0x58
    bool selectedCellHasOptions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NetworkPlayersTableView
    NetworkPlayersTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::NetworkPlayerTableCell* playerCellPrefab_ = {}, GlobalNamespace::NetworkPlayerOptionsTableCell* optionsCellPrefab_ = {}, GlobalNamespace::LevelPackHeaderTableCell* headerCellPrefab_ = {}, float rowHeight_ = {}, System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* cellInfo_ = {}, int selectedCellIndex_ = {}, ::Il2CppString* selectedPlayerID_ = {}, bool selectedCellHasOptions_ = {}) noexcept : tableView{tableView_}, playerCellPrefab{playerCellPrefab_}, optionsCellPrefab{optionsCellPrefab_}, headerCellPrefab{headerCellPrefab_}, rowHeight{rowHeight_}, cellInfo{cellInfo_}, selectedCellIndex{selectedCellIndex_}, selectedPlayerID{selectedPlayerID_}, selectedCellHasOptions{selectedCellHasOptions_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kPlayerCellIdentifier
    static constexpr const char* kPlayerCellIdentifier = "PlayerCell";
    // Get static field: static private System.String kPlayerCellIdentifier
    static ::Il2CppString* _get_kPlayerCellIdentifier();
    // Set static field: static private System.String kPlayerCellIdentifier
    static void _set_kPlayerCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kHeaderCellIdentifier
    static constexpr const char* kHeaderCellIdentifier = "HeaderCell";
    // Get static field: static private System.String kHeaderCellIdentifier
    static ::Il2CppString* _get_kHeaderCellIdentifier();
    // Set static field: static private System.String kHeaderCellIdentifier
    static void _set_kHeaderCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kOptionsCellIdentifier
    static constexpr const char* kOptionsCellIdentifier = "OptionsCell";
    // Get static field: static private System.String kOptionsCellIdentifier
    static ::Il2CppString* _get_kOptionsCellIdentifier();
    // Set static field: static private System.String kOptionsCellIdentifier
    static void _set_kOptionsCellIdentifier(::Il2CppString* value);
    // private System.Void AddPlayers(System.Collections.Generic.IEnumerable`1<INetworkPlayer> players, System.String title)
    // Offset: 0xFDE110
    void AddPlayers(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* players, ::Il2CppString* title);
    // public System.Void SetParties(System.Collections.Generic.IEnumerable`1<INetworkPlayer> partyPlayers, System.Collections.Generic.IEnumerable`1<INetworkPlayer> otherPlayers, System.String myPartyTitle, System.String otherPlayersTitle)
    // Offset: 0xFDE9F8
    void SetParties(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* partyPlayers, System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* otherPlayers, ::Il2CppString* myPartyTitle, ::Il2CppString* otherPlayersTitle);
    // private System.Void HandleCellWasPressed(HMUI.TableView tableView, HMUI.TableCell tableCell)
    // Offset: 0xFDEB18
    void HandleCellWasPressed(HMUI::TableView* tableView, HMUI::TableCell* tableCell);
    // static private System.Boolean HasVisibleOptions(INetworkPlayer player)
    // Offset: 0xFDE660
    static bool HasVisibleOptions(GlobalNamespace::INetworkPlayer* player);
    // public System.Single CellSize()
    // Offset: 0xFDDB08
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xFDDB10
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xFDDB60
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xFDEB1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPlayersTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayersTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayersTableView*, creationType>()));
    }
  }; // NetworkPlayersTableView
  static check_size<sizeof(NetworkPlayersTableView), 88 + sizeof(bool)> __GlobalNamespace_NetworkPlayersTableViewSizeCheck;
  static_assert(sizeof(NetworkPlayersTableView) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView*, "", "NetworkPlayersTableView");
#pragma pack(pop)
