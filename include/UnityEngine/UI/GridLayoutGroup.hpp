// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.LayoutGroup
#include "UnityEngine/UI/LayoutGroup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: Corner because it is already included!
  // Skipping declaration: Axis because it is already included!
  // Skipping declaration: Constraint because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.GridLayoutGroup
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: CD82C0
  class GridLayoutGroup : public UnityEngine::UI::LayoutGroup {
    public:
    // Nested type: UnityEngine::UI::GridLayoutGroup::Corner
    struct Corner;
    // Nested type: UnityEngine::UI::GridLayoutGroup::Axis
    struct Axis;
    // Nested type: UnityEngine::UI::GridLayoutGroup::Constraint
    struct Constraint;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GridLayoutGroup/Corner
    // [] Offset: FFFFFFFF
    struct Corner/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Corner
      constexpr Corner(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Corner UpperLeft
      static constexpr const int UpperLeft = 0;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Corner UpperLeft
      static UnityEngine::UI::GridLayoutGroup::Corner _get_UpperLeft();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Corner UpperLeft
      static void _set_UpperLeft(UnityEngine::UI::GridLayoutGroup::Corner value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Corner UpperRight
      static constexpr const int UpperRight = 1;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Corner UpperRight
      static UnityEngine::UI::GridLayoutGroup::Corner _get_UpperRight();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Corner UpperRight
      static void _set_UpperRight(UnityEngine::UI::GridLayoutGroup::Corner value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Corner LowerLeft
      static constexpr const int LowerLeft = 2;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Corner LowerLeft
      static UnityEngine::UI::GridLayoutGroup::Corner _get_LowerLeft();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Corner LowerLeft
      static void _set_LowerLeft(UnityEngine::UI::GridLayoutGroup::Corner value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Corner LowerRight
      static constexpr const int LowerRight = 3;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Corner LowerRight
      static UnityEngine::UI::GridLayoutGroup::Corner _get_LowerRight();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Corner LowerRight
      static void _set_LowerRight(UnityEngine::UI::GridLayoutGroup::Corner value);
    }; // UnityEngine.UI.GridLayoutGroup/Corner
    #pragma pack(pop)
    static check_size<sizeof(GridLayoutGroup::Corner), 0 + sizeof(int)> __UnityEngine_UI_GridLayoutGroup_CornerSizeCheck;
    static_assert(sizeof(GridLayoutGroup::Corner) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GridLayoutGroup/Axis
    // [] Offset: FFFFFFFF
    struct Axis/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Axis
      constexpr Axis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Axis Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Axis Horizontal
      static UnityEngine::UI::GridLayoutGroup::Axis _get_Horizontal();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Axis Horizontal
      static void _set_Horizontal(UnityEngine::UI::GridLayoutGroup::Axis value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Axis Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Axis Vertical
      static UnityEngine::UI::GridLayoutGroup::Axis _get_Vertical();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Axis Vertical
      static void _set_Vertical(UnityEngine::UI::GridLayoutGroup::Axis value);
    }; // UnityEngine.UI.GridLayoutGroup/Axis
    #pragma pack(pop)
    static check_size<sizeof(GridLayoutGroup::Axis), 0 + sizeof(int)> __UnityEngine_UI_GridLayoutGroup_AxisSizeCheck;
    static_assert(sizeof(GridLayoutGroup::Axis) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GridLayoutGroup/Constraint
    // [] Offset: FFFFFFFF
    struct Constraint/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Constraint
      constexpr Constraint(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Constraint Flexible
      static constexpr const int Flexible = 0;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Constraint Flexible
      static UnityEngine::UI::GridLayoutGroup::Constraint _get_Flexible();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Constraint Flexible
      static void _set_Flexible(UnityEngine::UI::GridLayoutGroup::Constraint value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Constraint FixedColumnCount
      static constexpr const int FixedColumnCount = 1;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Constraint FixedColumnCount
      static UnityEngine::UI::GridLayoutGroup::Constraint _get_FixedColumnCount();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Constraint FixedColumnCount
      static void _set_FixedColumnCount(UnityEngine::UI::GridLayoutGroup::Constraint value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/Constraint FixedRowCount
      static constexpr const int FixedRowCount = 2;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/Constraint FixedRowCount
      static UnityEngine::UI::GridLayoutGroup::Constraint _get_FixedRowCount();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/Constraint FixedRowCount
      static void _set_FixedRowCount(UnityEngine::UI::GridLayoutGroup::Constraint value);
    }; // UnityEngine.UI.GridLayoutGroup/Constraint
    #pragma pack(pop)
    static check_size<sizeof(GridLayoutGroup::Constraint), 0 + sizeof(int)> __UnityEngine_UI_GridLayoutGroup_ConstraintSizeCheck;
    static_assert(sizeof(GridLayoutGroup::Constraint) == 0x4);
    // protected UnityEngine.UI.GridLayoutGroup/Corner m_StartCorner
    // Size: 0x4
    // Offset: 0x58
    UnityEngine::UI::GridLayoutGroup::Corner m_StartCorner;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::GridLayoutGroup::Corner) == 0x4);
    // protected UnityEngine.UI.GridLayoutGroup/Axis m_StartAxis
    // Size: 0x4
    // Offset: 0x5C
    UnityEngine::UI::GridLayoutGroup::Axis m_StartAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::GridLayoutGroup::Axis) == 0x4);
    // protected UnityEngine.Vector2 m_CellSize
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Vector2 m_CellSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // protected UnityEngine.Vector2 m_Spacing
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Vector2 m_Spacing;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // protected UnityEngine.UI.GridLayoutGroup/Constraint m_Constraint
    // Size: 0x4
    // Offset: 0x70
    UnityEngine::UI::GridLayoutGroup::Constraint m_Constraint;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::GridLayoutGroup::Constraint) == 0x4);
    // protected System.Int32 m_ConstraintCount
    // Size: 0x4
    // Offset: 0x74
    int m_ConstraintCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GridLayoutGroup
    GridLayoutGroup(UnityEngine::UI::GridLayoutGroup::Corner m_StartCorner_ = {}, UnityEngine::UI::GridLayoutGroup::Axis m_StartAxis_ = {}, UnityEngine::Vector2 m_CellSize_ = {}, UnityEngine::Vector2 m_Spacing_ = {}, UnityEngine::UI::GridLayoutGroup::Constraint m_Constraint_ = {}, int m_ConstraintCount_ = {}) noexcept : m_StartCorner{m_StartCorner_}, m_StartAxis{m_StartAxis_}, m_CellSize{m_CellSize_}, m_Spacing{m_Spacing_}, m_Constraint{m_Constraint_}, m_ConstraintCount{m_ConstraintCount_} {}
    // public UnityEngine.UI.GridLayoutGroup/Corner get_startCorner()
    // Offset: 0x1755F88
    UnityEngine::UI::GridLayoutGroup::Corner get_startCorner();
    // public System.Void set_startCorner(UnityEngine.UI.GridLayoutGroup/Corner value)
    // Offset: 0x1755F90
    void set_startCorner(UnityEngine::UI::GridLayoutGroup::Corner value);
    // public UnityEngine.UI.GridLayoutGroup/Axis get_startAxis()
    // Offset: 0x1755FF4
    UnityEngine::UI::GridLayoutGroup::Axis get_startAxis();
    // public System.Void set_startAxis(UnityEngine.UI.GridLayoutGroup/Axis value)
    // Offset: 0x1755FFC
    void set_startAxis(UnityEngine::UI::GridLayoutGroup::Axis value);
    // public UnityEngine.Vector2 get_cellSize()
    // Offset: 0x1756060
    UnityEngine::Vector2 get_cellSize();
    // public System.Void set_cellSize(UnityEngine.Vector2 value)
    // Offset: 0x1756068
    void set_cellSize(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_spacing()
    // Offset: 0x17560D4
    UnityEngine::Vector2 get_spacing();
    // public System.Void set_spacing(UnityEngine.Vector2 value)
    // Offset: 0x17560DC
    void set_spacing(UnityEngine::Vector2 value);
    // public UnityEngine.UI.GridLayoutGroup/Constraint get_constraint()
    // Offset: 0x1756148
    UnityEngine::UI::GridLayoutGroup::Constraint get_constraint();
    // public System.Void set_constraint(UnityEngine.UI.GridLayoutGroup/Constraint value)
    // Offset: 0x1756150
    void set_constraint(UnityEngine::UI::GridLayoutGroup::Constraint value);
    // public System.Int32 get_constraintCount()
    // Offset: 0x17561B4
    int get_constraintCount();
    // public System.Void set_constraintCount(System.Int32 value)
    // Offset: 0x17561BC
    void set_constraintCount(int value);
    // private System.Void SetCellsAlongAxis(System.Int32 axis)
    // Offset: 0x1756688
    void SetCellsAlongAxis(int axis);
    // protected System.Void .ctor()
    // Offset: 0x1756254
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridLayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::GridLayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridLayoutGroup*, creationType>()));
    }
    // public override System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1756300
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputHorizontal_NEW()
    void CalculateLayoutInputHorizontal();
    // public override System.Void CalculateLayoutInputVertical()
    // Offset: 0x175649C
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputVertical_NEW()
    void CalculateLayoutInputVertical();
    // public override System.Void SetLayoutHorizontal()
    // Offset: 0x1756680
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutHorizontal_NEW()
    void SetLayoutHorizontal();
    // public override System.Void SetLayoutVertical()
    // Offset: 0x1756D18
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutVertical_NEW()
    void SetLayoutVertical();
  }; // UnityEngine.UI.GridLayoutGroup
  #pragma pack(pop)
  static check_size<sizeof(GridLayoutGroup), 116 + sizeof(int)> __UnityEngine_UI_GridLayoutGroupSizeCheck;
  static_assert(sizeof(GridLayoutGroup) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GridLayoutGroup*, "UnityEngine.UI", "GridLayoutGroup");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GridLayoutGroup::Corner, "UnityEngine.UI", "GridLayoutGroup/Corner");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GridLayoutGroup::Axis, "UnityEngine.UI", "GridLayoutGroup/Axis");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GridLayoutGroup::Constraint, "UnityEngine.UI", "GridLayoutGroup/Constraint");
