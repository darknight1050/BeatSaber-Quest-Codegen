// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutEntry
  // [] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: CC0C24
  class GUILayoutEntry : public ::Il2CppObject {
    public:
    // public System.Single minWidth
    // Size: 0x4
    // Offset: 0x10
    float minWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxWidth
    // Size: 0x4
    // Offset: 0x14
    float maxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minHeight
    // Size: 0x4
    // Offset: 0x18
    float minHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxHeight
    // Size: 0x4
    // Offset: 0x1C
    float maxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Rect rect
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Rect rect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public System.Int32 stretchWidth
    // Size: 0x4
    // Offset: 0x30
    int stretchWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stretchHeight
    // Size: 0x4
    // Offset: 0x34
    int stretchHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean consideredForMargin
    // Size: 0x1
    // Offset: 0x38
    bool consideredForMargin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: consideredForMargin and: m_Style
    char __padding7[0x7] = {};
    // private UnityEngine.GUIStyle m_Style
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GUIStyle* m_Style;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // Creating value type constructor for type: GUILayoutEntry
    GUILayoutEntry(float minWidth_ = {}, float maxWidth_ = {}, float minHeight_ = {}, float maxHeight_ = {}, UnityEngine::Rect rect_ = {}, int stretchWidth_ = {}, int stretchHeight_ = {}, bool consideredForMargin_ = {}, UnityEngine::GUIStyle* m_Style_ = {}) noexcept : minWidth{minWidth_}, maxWidth{maxWidth_}, minHeight{minHeight_}, maxHeight{maxHeight_}, rect{rect_}, stretchWidth{stretchWidth_}, stretchHeight{stretchHeight_}, consideredForMargin{consideredForMargin_}, m_Style{m_Style_} {}
    // Get static field: static UnityEngine.Rect kDummyRect
    static UnityEngine::Rect _get_kDummyRect();
    // Set static field: static UnityEngine.Rect kDummyRect
    static void _set_kDummyRect(UnityEngine::Rect value);
    // Get static field: static protected System.Int32 indent
    static int _get_indent();
    // Set static field: static protected System.Int32 indent
    static void _set_indent(int value);
    // public UnityEngine.GUIStyle get_style()
    // Offset: 0x1907068
    UnityEngine::GUIStyle* get_style();
    // public System.Void set_style(UnityEngine.GUIStyle value)
    // Offset: 0x1907070
    void set_style(UnityEngine::GUIStyle* value);
    // public System.Int32 get_marginLeft()
    // Offset: 0x1907080
    int get_marginLeft();
    // public System.Int32 get_marginRight()
    // Offset: 0x19070A8
    int get_marginRight();
    // public System.Int32 get_marginTop()
    // Offset: 0x19070D0
    int get_marginTop();
    // public System.Int32 get_marginBottom()
    // Offset: 0x19070F8
    int get_marginBottom();
    // public System.Int32 get_marginHorizontal()
    // Offset: 0x1907120
    int get_marginHorizontal();
    // public System.Int32 get_marginVertical()
    // Offset: 0x1907160
    int get_marginVertical();
    // public System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style)
    // Offset: 0x19071A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutEntry* New_ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, UnityEngine::GUIStyle* _style) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUILayoutEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutEntry*, creationType>(_minWidth, _maxWidth, _minHeight, _maxHeight, _style)));
    }
    // public System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x19072BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutEntry* New_ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, UnityEngine::GUIStyle* _style, ::Array<UnityEngine::GUILayoutOption*>* options) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUILayoutEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutEntry*, creationType>(_minWidth, _maxWidth, _minHeight, _maxHeight, _style, options)));
    }
    // public System.Void CalcWidth()
    // Offset: 0x19073D0
    void CalcWidth();
    // public System.Void CalcHeight()
    // Offset: 0x19073D4
    void CalcHeight();
    // public System.Void SetHorizontal(System.Single x, System.Single width)
    // Offset: 0x19073D8
    void SetHorizontal(float x, float width);
    // public System.Void SetVertical(System.Single y, System.Single height)
    // Offset: 0x1907418
    void SetVertical(float y, float height);
    // protected System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
    // Offset: 0x1907458
    void ApplyStyleSettings(UnityEngine::GUIStyle* style);
    // public System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
    // Offset: 0x19075E0
    void ApplyOptions(::Array<UnityEngine::GUILayoutOption*>* options);
    // static private System.Void .cctor()
    // Offset: 0x1907E64
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x19078BC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString();
  }; // UnityEngine.GUILayoutEntry
  #pragma pack(pop)
  static check_size<sizeof(GUILayoutEntry), 64 + sizeof(UnityEngine::GUIStyle*)> __UnityEngine_GUILayoutEntrySizeCheck;
  static_assert(sizeof(GUILayoutEntry) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutEntry*, "UnityEngine", "GUILayoutEntry");
