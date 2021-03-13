// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Size: 0x54
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.FaceInfo
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: CD5910
  struct FaceInfo/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xCD5A6C
    // private System.String m_FamilyName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_FamilyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xCD5AB8
    // private System.String m_StyleName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* m_StyleName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xCD5B04
    // private System.Int32 m_PointSize
    // Size: 0x4
    // Offset: 0x10
    int m_PointSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5B50
    // private System.Single m_Scale
    // Size: 0x4
    // Offset: 0x14
    float m_Scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5B9C
    // private System.Single m_LineHeight
    // Size: 0x4
    // Offset: 0x18
    float m_LineHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5BE8
    // private System.Single m_AscentLine
    // Size: 0x4
    // Offset: 0x1C
    float m_AscentLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5C34
    // private System.Single m_CapLine
    // Size: 0x4
    // Offset: 0x20
    float m_CapLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5C80
    // private System.Single m_MeanLine
    // Size: 0x4
    // Offset: 0x24
    float m_MeanLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5CCC
    // private System.Single m_Baseline
    // Size: 0x4
    // Offset: 0x28
    float m_Baseline;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5D18
    // private System.Single m_DescentLine
    // Size: 0x4
    // Offset: 0x2C
    float m_DescentLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5D64
    // private System.Single m_SuperscriptOffset
    // Size: 0x4
    // Offset: 0x30
    float m_SuperscriptOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5DB0
    // private System.Single m_SuperscriptSize
    // Size: 0x4
    // Offset: 0x34
    float m_SuperscriptSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5DFC
    // private System.Single m_SubscriptOffset
    // Size: 0x4
    // Offset: 0x38
    float m_SubscriptOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5E48
    // private System.Single m_SubscriptSize
    // Size: 0x4
    // Offset: 0x3C
    float m_SubscriptSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5E94
    // private System.Single m_UnderlineOffset
    // Size: 0x4
    // Offset: 0x40
    float m_UnderlineOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5EE0
    // private System.Single m_UnderlineThickness
    // Size: 0x4
    // Offset: 0x44
    float m_UnderlineThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5F2C
    // private System.Single m_StrikethroughOffset
    // Size: 0x4
    // Offset: 0x48
    float m_StrikethroughOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5F78
    // private System.Single m_StrikethroughThickness
    // Size: 0x4
    // Offset: 0x4C
    float m_StrikethroughThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCD5FC4
    // private System.Single m_TabWidth
    // Size: 0x4
    // Offset: 0x50
    float m_TabWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FaceInfo
    constexpr FaceInfo(::Il2CppString* m_FamilyName_ = {}, ::Il2CppString* m_StyleName_ = {}, int m_PointSize_ = {}, float m_Scale_ = {}, float m_LineHeight_ = {}, float m_AscentLine_ = {}, float m_CapLine_ = {}, float m_MeanLine_ = {}, float m_Baseline_ = {}, float m_DescentLine_ = {}, float m_SuperscriptOffset_ = {}, float m_SuperscriptSize_ = {}, float m_SubscriptOffset_ = {}, float m_SubscriptSize_ = {}, float m_UnderlineOffset_ = {}, float m_UnderlineThickness_ = {}, float m_StrikethroughOffset_ = {}, float m_StrikethroughThickness_ = {}, float m_TabWidth_ = {}) noexcept : m_FamilyName{m_FamilyName_}, m_StyleName{m_StyleName_}, m_PointSize{m_PointSize_}, m_Scale{m_Scale_}, m_LineHeight{m_LineHeight_}, m_AscentLine{m_AscentLine_}, m_CapLine{m_CapLine_}, m_MeanLine{m_MeanLine_}, m_Baseline{m_Baseline_}, m_DescentLine{m_DescentLine_}, m_SuperscriptOffset{m_SuperscriptOffset_}, m_SuperscriptSize{m_SuperscriptSize_}, m_SubscriptOffset{m_SubscriptOffset_}, m_SubscriptSize{m_SubscriptSize_}, m_UnderlineOffset{m_UnderlineOffset_}, m_UnderlineThickness{m_UnderlineThickness_}, m_StrikethroughOffset{m_StrikethroughOffset_}, m_StrikethroughThickness{m_StrikethroughThickness_}, m_TabWidth{m_TabWidth_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void set_familyName(System.String value)
    // Offset: 0xE15C5C
    void set_familyName(::Il2CppString* value);
    // public System.Void set_styleName(System.String value)
    // Offset: 0xE15C64
    void set_styleName(::Il2CppString* value);
    // public System.Int32 get_pointSize()
    // Offset: 0xE15C6C
    int get_pointSize();
    // public System.Void set_pointSize(System.Int32 value)
    // Offset: 0xE15C74
    void set_pointSize(int value);
    // public System.Single get_scale()
    // Offset: 0xE15C7C
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0xE15C84
    void set_scale(float value);
    // public System.Single get_lineHeight()
    // Offset: 0xE15C8C
    float get_lineHeight();
    // public System.Void set_lineHeight(System.Single value)
    // Offset: 0xE15C94
    void set_lineHeight(float value);
    // public System.Single get_ascentLine()
    // Offset: 0xE15C9C
    float get_ascentLine();
    // public System.Void set_ascentLine(System.Single value)
    // Offset: 0xE15CA4
    void set_ascentLine(float value);
    // public System.Single get_capLine()
    // Offset: 0xE15CAC
    float get_capLine();
    // public System.Void set_capLine(System.Single value)
    // Offset: 0xE15CB4
    void set_capLine(float value);
    // public System.Void set_meanLine(System.Single value)
    // Offset: 0xE15CBC
    void set_meanLine(float value);
    // public System.Single get_baseline()
    // Offset: 0xE15CC4
    float get_baseline();
    // public System.Void set_baseline(System.Single value)
    // Offset: 0xE15CCC
    void set_baseline(float value);
    // public System.Single get_descentLine()
    // Offset: 0xE15CD4
    float get_descentLine();
    // public System.Void set_descentLine(System.Single value)
    // Offset: 0xE15CDC
    void set_descentLine(float value);
    // public System.Single get_superscriptOffset()
    // Offset: 0xE15CE4
    float get_superscriptOffset();
    // public System.Void set_superscriptOffset(System.Single value)
    // Offset: 0xE15CEC
    void set_superscriptOffset(float value);
    // public System.Single get_superscriptSize()
    // Offset: 0xE15CF4
    float get_superscriptSize();
    // public System.Void set_superscriptSize(System.Single value)
    // Offset: 0xE15CFC
    void set_superscriptSize(float value);
    // public System.Single get_subscriptOffset()
    // Offset: 0xE15D04
    float get_subscriptOffset();
    // public System.Void set_subscriptOffset(System.Single value)
    // Offset: 0xE15D0C
    void set_subscriptOffset(float value);
    // public System.Single get_subscriptSize()
    // Offset: 0xE15D14
    float get_subscriptSize();
    // public System.Void set_subscriptSize(System.Single value)
    // Offset: 0xE15D1C
    void set_subscriptSize(float value);
    // public System.Single get_underlineOffset()
    // Offset: 0xE15D24
    float get_underlineOffset();
    // public System.Void set_underlineOffset(System.Single value)
    // Offset: 0xE15D2C
    void set_underlineOffset(float value);
    // public System.Single get_underlineThickness()
    // Offset: 0xE15D34
    float get_underlineThickness();
    // public System.Void set_underlineThickness(System.Single value)
    // Offset: 0xE15D3C
    void set_underlineThickness(float value);
    // public System.Single get_strikethroughOffset()
    // Offset: 0xE15D44
    float get_strikethroughOffset();
    // public System.Void set_strikethroughOffset(System.Single value)
    // Offset: 0xE15D4C
    void set_strikethroughOffset(float value);
    // public System.Void set_strikethroughThickness(System.Single value)
    // Offset: 0xE15D54
    void set_strikethroughThickness(float value);
    // public System.Single get_tabWidth()
    // Offset: 0xE15D5C
    float get_tabWidth();
    // public System.Void set_tabWidth(System.Single value)
    // Offset: 0xE15D64
    void set_tabWidth(float value);
  }; // UnityEngine.TextCore.FaceInfo
  #pragma pack(pop)
  static check_size<sizeof(FaceInfo), 80 + sizeof(float)> __UnityEngine_TextCore_FaceInfoSizeCheck;
  static_assert(sizeof(FaceInfo) == 0x54);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
