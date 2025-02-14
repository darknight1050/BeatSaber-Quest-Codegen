// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TableView/CellsGroup
  class TableView::CellsGroup : public ::Il2CppObject {
    public:
    // private System.String _reuseIdentifier
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* reuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<HMUI.TableCell> _cells
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<HMUI::TableCell*>* cells;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<HMUI::TableCell*>*) == 0x8);
    // Creating value type constructor for type: CellsGroup
    CellsGroup(::Il2CppString* reuseIdentifier_ = {}, System::Collections::Generic::List_1<HMUI::TableCell*>* cells_ = {}) noexcept : reuseIdentifier{reuseIdentifier_}, cells{cells_} {}
    // public System.String get_reuseIdentifier()
    // Offset: 0x12A51CC
    ::Il2CppString* get_reuseIdentifier();
    // public System.Collections.Generic.List`1<HMUI.TableCell> get_cells()
    // Offset: 0x12A51D4
    System::Collections::Generic::List_1<HMUI::TableCell*>* get_cells();
    // public System.Void .ctor()
    // Offset: 0x12A51DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableView::CellsGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::TableView::CellsGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableView::CellsGroup*, creationType>()));
    }
  }; // HMUI.TableView/CellsGroup
  #pragma pack(pop)
  static check_size<sizeof(TableView::CellsGroup), 24 + sizeof(System::Collections::Generic::List_1<HMUI::TableCell*>*)> __HMUI_TableView_CellsGroupSizeCheck;
  static_assert(sizeof(TableView::CellsGroup) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView::CellsGroup*, "HMUI", "TableView/CellsGroup");
