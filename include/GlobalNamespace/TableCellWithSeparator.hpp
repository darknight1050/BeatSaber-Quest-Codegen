// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TableCellWithSeparator
  // [] Offset: FFFFFFFF
  class TableCellWithSeparator : public HMUI::TableCell {
    public:
    // private UnityEngine.GameObject _separator
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* separator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: TableCellWithSeparator
    TableCellWithSeparator(UnityEngine::GameObject* separator_ = {}) noexcept : separator{separator_} {}
    // public override System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x211BB78
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::TableViewSetup_NEW(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    void TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx);
    // public System.Void .ctor()
    // Offset: 0x211BC6C
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableCellWithSeparator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TableCellWithSeparator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableCellWithSeparator*, creationType>()));
    }
  }; // TableCellWithSeparator
  #pragma pack(pop)
  static check_size<sizeof(TableCellWithSeparator), 80 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_TableCellWithSeparatorSizeCheck;
  static_assert(sizeof(TableCellWithSeparator) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableCellWithSeparator*, "", "TableCellWithSeparator");
