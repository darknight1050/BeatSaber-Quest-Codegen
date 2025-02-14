// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Fill because it is already included!
  // Skipping declaration: Anchor because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings
  struct AutoUnwrapSettings/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor
    struct Anchor;
    // Nested type: UnityEngine::ProBuilder::AutoUnwrapSettings::Fill
    struct Fill;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
    struct Anchor/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Anchor
      constexpr Anchor(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperLeft
      static constexpr const int UpperLeft = 0;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperLeft
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperLeft
      static void _set_UpperLeft(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperCenter
      static constexpr const int UpperCenter = 1;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperCenter
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperCenter
      static void _set_UpperCenter(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperRight
      static constexpr const int UpperRight = 2;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperRight
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperRight
      static void _set_UpperRight(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleLeft
      static constexpr const int MiddleLeft = 3;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleLeft
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleLeft
      static void _set_MiddleLeft(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleCenter
      static constexpr const int MiddleCenter = 4;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleCenter
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleCenter
      static void _set_MiddleCenter(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleRight
      static constexpr const int MiddleRight = 5;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleRight
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleRight
      static void _set_MiddleRight(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerLeft
      static constexpr const int LowerLeft = 6;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerLeft
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerLeft
      static void _set_LowerLeft(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerCenter
      static constexpr const int LowerCenter = 7;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerCenter
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerCenter
      static void _set_LowerCenter(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerRight
      static constexpr const int LowerRight = 8;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerRight
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerRight
      static void _set_LowerRight(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor None
      static constexpr const int None = 9;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor None
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_None();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor None
      static void _set_None(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
    }; // UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
    #pragma pack(pop)
    static check_size<sizeof(AutoUnwrapSettings::Anchor), 0 + sizeof(int)> __UnityEngine_ProBuilder_AutoUnwrapSettings_AnchorSizeCheck;
    static_assert(sizeof(AutoUnwrapSettings::Anchor) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
    struct Fill/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Fill
      constexpr Fill(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Fit
      static constexpr const int Fit = 0;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Fit
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Fit();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Fit
      static void _set_Fit(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Tile
      static constexpr const int Tile = 1;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Tile
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Tile();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Tile
      static void _set_Tile(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Stretch
      static constexpr const int Stretch = 2;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Stretch
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Stretch();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Stretch
      static void _set_Stretch(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
    }; // UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
    #pragma pack(pop)
    static check_size<sizeof(AutoUnwrapSettings::Fill), 0 + sizeof(int)> __UnityEngine_ProBuilder_AutoUnwrapSettings_FillSizeCheck;
    static_assert(sizeof(AutoUnwrapSettings::Fill) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE395A8
    // private System.Boolean m_UseWorldSpace
    // Size: 0x1
    // Offset: 0x0
    bool m_UseWorldSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0xE395F4
    // private System.Boolean m_FlipU
    // Size: 0x1
    // Offset: 0x1
    bool m_FlipU;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0xE39640
    // private System.Boolean m_FlipV
    // Size: 0x1
    // Offset: 0x2
    bool m_FlipV;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0xE3968C
    // private System.Boolean m_SwapUV
    // Size: 0x1
    // Offset: 0x3
    bool m_SwapUV;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0xE396D8
    // private UnityEngine.ProBuilder.AutoUnwrapSettings/Fill m_Fill
    // Size: 0x4
    // Offset: 0x4
    UnityEngine::ProBuilder::AutoUnwrapSettings::Fill m_Fill;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE39724
    // private UnityEngine.Vector2 m_Scale
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Vector2 m_Scale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE39770
    // private UnityEngine.Vector2 m_Offset
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Vector2 m_Offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE397BC
    // private System.Single m_Rotation
    // Size: 0x4
    // Offset: 0x18
    float m_Rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE39808
    // private UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor m_Anchor
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor m_Anchor;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor) == 0x4);
    // Creating value type constructor for type: AutoUnwrapSettings
    constexpr AutoUnwrapSettings(bool m_UseWorldSpace_ = {}, bool m_FlipU_ = {}, bool m_FlipV_ = {}, bool m_SwapUV_ = {}, UnityEngine::ProBuilder::AutoUnwrapSettings::Fill m_Fill_ = {}, UnityEngine::Vector2 m_Scale_ = {}, UnityEngine::Vector2 m_Offset_ = {}, float m_Rotation_ = {}, UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor m_Anchor_ = {}) noexcept : m_UseWorldSpace{m_UseWorldSpace_}, m_FlipU{m_FlipU_}, m_FlipV{m_FlipV_}, m_SwapUV{m_SwapUV_}, m_Fill{m_Fill_}, m_Scale{m_Scale_}, m_Offset{m_Offset_}, m_Rotation{m_Rotation_}, m_Anchor{m_Anchor_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_defaultAutoUnwrapSettings()
    // Offset: 0x1F415B0
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings();
    // public System.Boolean get_useWorldSpace()
    // Offset: 0xF12D34
    bool get_useWorldSpace();
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0xF12D3C
    void set_useWorldSpace(bool value);
    // public System.Boolean get_flipU()
    // Offset: 0xF12D48
    bool get_flipU();
    // public System.Void set_flipU(System.Boolean value)
    // Offset: 0xF12D50
    void set_flipU(bool value);
    // public System.Boolean get_flipV()
    // Offset: 0xF12D5C
    bool get_flipV();
    // public System.Void set_flipV(System.Boolean value)
    // Offset: 0xF12D64
    void set_flipV(bool value);
    // public System.Boolean get_swapUV()
    // Offset: 0xF12D70
    bool get_swapUV();
    // public System.Void set_swapUV(System.Boolean value)
    // Offset: 0xF12D78
    void set_swapUV(bool value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill get_fill()
    // Offset: 0xF12D84
    UnityEngine::ProBuilder::AutoUnwrapSettings::Fill get_fill();
    // public System.Void set_fill(UnityEngine.ProBuilder.AutoUnwrapSettings/Fill value)
    // Offset: 0xF12D8C
    void set_fill(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
    // public UnityEngine.Vector2 get_scale()
    // Offset: 0xF12D94
    UnityEngine::Vector2 get_scale();
    // public System.Void set_scale(UnityEngine.Vector2 value)
    // Offset: 0xF12D9C
    void set_scale(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_offset()
    // Offset: 0xF12DA4
    UnityEngine::Vector2 get_offset();
    // public System.Void set_offset(UnityEngine.Vector2 value)
    // Offset: 0xF12DAC
    void set_offset(UnityEngine::Vector2 value);
    // public System.Single get_rotation()
    // Offset: 0xF12DB4
    float get_rotation();
    // public System.Void set_rotation(System.Single value)
    // Offset: 0xF12DBC
    void set_rotation(float value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor get_anchor()
    // Offset: 0xF12DC4
    UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor get_anchor();
    // public System.Void set_anchor(UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor value)
    // Offset: 0xF12DCC
    void set_anchor(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
    // public System.Void .ctor(UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0xF12DD4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: is copy constructor.  AutoUnwrapSettings(UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings)
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_tile()
    // Offset: 0x1F4176C
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_tile();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_fit()
    // Offset: 0x1F417A8
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_fit();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_stretch()
    // Offset: 0x1F417E8
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch();
    // public System.Void Reset()
    // Offset: 0xF12E30
    void Reset();
    // public override System.String ToString()
    // Offset: 0xF12E38
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.AutoUnwrapSettings
  #pragma pack(pop)
  static check_size<sizeof(AutoUnwrapSettings), 28 + sizeof(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor)> __UnityEngine_ProBuilder_AutoUnwrapSettingsSizeCheck;
  static_assert(sizeof(AutoUnwrapSettings) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
