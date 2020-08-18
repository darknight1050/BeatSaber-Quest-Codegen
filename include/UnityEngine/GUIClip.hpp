// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUIClip
  class GUIClip : public ::Il2CppObject {
    public:
    // static UnityEngine.Rect get_visibleRect()
    // Offset: 0x11C3BD0
    static UnityEngine::Rect get_visibleRect();
    // static System.Void Internal_Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
    // Offset: 0x11C7A40
    static void Internal_Push(UnityEngine::Rect screenRect, UnityEngine::Vector2 scrollOffset, UnityEngine::Vector2 renderOffset, bool resetOffset);
    // static System.Void Internal_Pop()
    // Offset: 0x11C5648
    static void Internal_Pop();
    // static System.Void Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
    // Offset: 0x11C5608
    static void Push(UnityEngine::Rect screenRect, UnityEngine::Vector2 scrollOffset, UnityEngine::Vector2 renderOffset, bool resetOffset);
    // static System.Void Pop()
    // Offset: 0x11C6AE4
    static void Pop();
    // static private System.Void get_visibleRect_Injected(UnityEngine.Rect ret)
    // Offset: 0x11C7A00
    static void get_visibleRect_Injected(UnityEngine::Rect& ret);
    // static private System.Void Internal_Push_Injected(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
    // Offset: 0x11C7AA8
    static void Internal_Push_Injected(UnityEngine::Rect& screenRect, UnityEngine::Vector2& scrollOffset, UnityEngine::Vector2& renderOffset, bool resetOffset);
  }; // UnityEngine.GUIClip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIClip*, "UnityEngine", "GUIClip");
#pragma pack(pop)
