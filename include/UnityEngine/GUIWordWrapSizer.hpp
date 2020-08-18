// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.GUILayoutEntry
#include "UnityEngine/GUILayoutEntry.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUIWordWrapSizer
  class GUIWordWrapSizer : public UnityEngine::GUILayoutEntry {
    public:
    // private readonly UnityEngine.GUIContent m_Content
    // Offset: 0x48
    UnityEngine::GUIContent* m_Content;
    // private readonly System.Single m_ForcedMinHeight
    // Offset: 0x50
    float m_ForcedMinHeight;
    // private readonly System.Single m_ForcedMaxHeight
    // Offset: 0x54
    float m_ForcedMaxHeight;
    // public System.Void .ctor(UnityEngine.GUIStyle style, UnityEngine.GUIContent content, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x11CF4D4
    static GUIWordWrapSizer* New_ctor(UnityEngine::GUIStyle* style, UnityEngine::GUIContent* content, ::Array<UnityEngine::GUILayoutOption*>* options);
    // public override System.Void CalcWidth()
    // Offset: 0x11D4460
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::CalcWidth()
    void CalcWidth();
    // public override System.Void CalcHeight()
    // Offset: 0x11D4524
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::CalcHeight()
    void CalcHeight();
  }; // UnityEngine.GUIWordWrapSizer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIWordWrapSizer*, "UnityEngine", "GUIWordWrapSizer");
#pragma pack(pop)
