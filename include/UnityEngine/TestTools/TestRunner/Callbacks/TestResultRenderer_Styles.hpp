// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
#include "UnityEngine/TestTools/TestRunner/Callbacks/TestResultRenderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/Styles
  // [] Offset: FFFFFFFF
  class TestResultRenderer::Styles : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Styles
    Styles() noexcept {}
    // Get static field: static public readonly UnityEngine.GUIStyle SucceedLabelStyle
    static UnityEngine::GUIStyle* _get_SucceedLabelStyle();
    // Set static field: static public readonly UnityEngine.GUIStyle SucceedLabelStyle
    static void _set_SucceedLabelStyle(UnityEngine::GUIStyle* value);
    // Get static field: static public readonly UnityEngine.GUIStyle FailedLabelStyle
    static UnityEngine::GUIStyle* _get_FailedLabelStyle();
    // Set static field: static public readonly UnityEngine.GUIStyle FailedLabelStyle
    static void _set_FailedLabelStyle(UnityEngine::GUIStyle* value);
    // Get static field: static public readonly UnityEngine.GUIStyle FailedMessagesStyle
    static UnityEngine::GUIStyle* _get_FailedMessagesStyle();
    // Set static field: static public readonly UnityEngine.GUIStyle FailedMessagesStyle
    static void _set_FailedMessagesStyle(UnityEngine::GUIStyle* value);
    // static private System.Void .cctor()
    // Offset: 0x1354674
    static void _cctor();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/Styles
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::Styles*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRenderer/Styles");
