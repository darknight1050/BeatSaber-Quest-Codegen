// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.HorizontalWrapMode
#include "UnityEngine/HorizontalWrapMode.hpp"
// Including type: UnityEngine.VerticalWrapMode
#include "UnityEngine/VerticalWrapMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.FontData
  class FontData : public UnityEngine::ISerializationCallbackReceiver, public ::Il2CppObject {
    public:
    // private UnityEngine.Font m_Font
    // Offset: 0x10
    UnityEngine::Font* m_Font;
    // private System.Int32 m_FontSize
    // Offset: 0x18
    int m_FontSize;
    // private UnityEngine.FontStyle m_FontStyle
    // Offset: 0x1C
    UnityEngine::FontStyle m_FontStyle;
    // private System.Boolean m_BestFit
    // Offset: 0x20
    bool m_BestFit;
    // private System.Int32 m_MinSize
    // Offset: 0x24
    int m_MinSize;
    // private System.Int32 m_MaxSize
    // Offset: 0x28
    int m_MaxSize;
    // private UnityEngine.TextAnchor m_Alignment
    // Offset: 0x2C
    UnityEngine::TextAnchor m_Alignment;
    // private System.Boolean m_AlignByGeometry
    // Offset: 0x30
    bool m_AlignByGeometry;
    // private System.Boolean m_RichText
    // Offset: 0x31
    bool m_RichText;
    // private UnityEngine.HorizontalWrapMode m_HorizontalOverflow
    // Offset: 0x34
    UnityEngine::HorizontalWrapMode m_HorizontalOverflow;
    // private UnityEngine.VerticalWrapMode m_VerticalOverflow
    // Offset: 0x38
    UnityEngine::VerticalWrapMode m_VerticalOverflow;
    // private System.Single m_LineSpacing
    // Offset: 0x3C
    float m_LineSpacing;
    // static public UnityEngine.UI.FontData get_defaultFontData()
    // Offset: 0x10C795C
    static UnityEngine::UI::FontData* get_defaultFontData();
    // public UnityEngine.Font get_font()
    // Offset: 0x10C79FC
    UnityEngine::Font* get_font();
    // public System.Void set_font(UnityEngine.Font value)
    // Offset: 0x10C7A04
    void set_font(UnityEngine::Font* value);
    // public System.Int32 get_fontSize()
    // Offset: 0x10C7A0C
    int get_fontSize();
    // public System.Void set_fontSize(System.Int32 value)
    // Offset: 0x10C7A14
    void set_fontSize(int value);
    // public UnityEngine.FontStyle get_fontStyle()
    // Offset: 0x10C7A1C
    UnityEngine::FontStyle get_fontStyle();
    // public System.Void set_fontStyle(UnityEngine.FontStyle value)
    // Offset: 0x10C7A24
    void set_fontStyle(UnityEngine::FontStyle value);
    // public System.Boolean get_bestFit()
    // Offset: 0x10C7A2C
    bool get_bestFit();
    // public System.Void set_bestFit(System.Boolean value)
    // Offset: 0x10C7A34
    void set_bestFit(bool value);
    // public System.Int32 get_minSize()
    // Offset: 0x10C7A40
    int get_minSize();
    // public System.Void set_minSize(System.Int32 value)
    // Offset: 0x10C7A48
    void set_minSize(int value);
    // public System.Int32 get_maxSize()
    // Offset: 0x10C7A50
    int get_maxSize();
    // public System.Void set_maxSize(System.Int32 value)
    // Offset: 0x10C7A58
    void set_maxSize(int value);
    // public UnityEngine.TextAnchor get_alignment()
    // Offset: 0x10C7A60
    UnityEngine::TextAnchor get_alignment();
    // public System.Void set_alignment(UnityEngine.TextAnchor value)
    // Offset: 0x10C7A68
    void set_alignment(UnityEngine::TextAnchor value);
    // public System.Boolean get_alignByGeometry()
    // Offset: 0x10C7A70
    bool get_alignByGeometry();
    // public System.Void set_alignByGeometry(System.Boolean value)
    // Offset: 0x10C7A78
    void set_alignByGeometry(bool value);
    // public System.Boolean get_richText()
    // Offset: 0x10C7A84
    bool get_richText();
    // public System.Void set_richText(System.Boolean value)
    // Offset: 0x10C7A8C
    void set_richText(bool value);
    // public UnityEngine.HorizontalWrapMode get_horizontalOverflow()
    // Offset: 0x10C7A98
    UnityEngine::HorizontalWrapMode get_horizontalOverflow();
    // public System.Void set_horizontalOverflow(UnityEngine.HorizontalWrapMode value)
    // Offset: 0x10C7AA0
    void set_horizontalOverflow(UnityEngine::HorizontalWrapMode value);
    // public UnityEngine.VerticalWrapMode get_verticalOverflow()
    // Offset: 0x10C7AA8
    UnityEngine::VerticalWrapMode get_verticalOverflow();
    // public System.Void set_verticalOverflow(UnityEngine.VerticalWrapMode value)
    // Offset: 0x10C7AB0
    void set_verticalOverflow(UnityEngine::VerticalWrapMode value);
    // public System.Single get_lineSpacing()
    // Offset: 0x10C7AB8
    float get_lineSpacing();
    // public System.Void set_lineSpacing(System.Single value)
    // Offset: 0x10C7AC0
    void set_lineSpacing(float value);
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x10C7AC8
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x10C7ACC
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x10C79F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FontData* New_ctor();
  }; // UnityEngine.UI.FontData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::FontData*, "UnityEngine.UI", "FontData");
#pragma pack(pop)
