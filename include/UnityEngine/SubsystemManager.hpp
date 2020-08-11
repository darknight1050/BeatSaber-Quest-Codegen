// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SubsystemManager
  class SubsystemManager : public ::CsObject {
    public:
    // Get static field: static private System.Action reloadSubsytemsStarted
    static System::Action* _get_reloadSubsytemsStarted();
    // Set static field: static private System.Action reloadSubsytemsStarted
    static void _set_reloadSubsytemsStarted(System::Action* value);
    // Get static field: static private System.Action reloadSubsytemsCompleted
    static System::Action* _get_reloadSubsytemsCompleted();
    // Set static field: static private System.Action reloadSubsytemsCompleted
    static void _set_reloadSubsytemsCompleted(System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x1961DD8
    static void _cctor();
    // static System.Void ReportSingleSubsystemAnalytics(System.String id)
    // Offset: 0x196138C
    static void ReportSingleSubsystemAnalytics(::CsString* id);
    // static System.Void StaticConstructScriptingClassMap()
    // Offset: 0x1961E0C
    static void StaticConstructScriptingClassMap();
    // static private System.Void Internal_ReloadSubsystemsStarted()
    // Offset: 0x1961E40
    static void Internal_ReloadSubsystemsStarted();
    // static private System.Void Internal_ReloadSubsystemsCompleted()
    // Offset: 0x1961EE8
    static void Internal_ReloadSubsystemsCompleted();
  }; // UnityEngine.SubsystemManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
#pragma pack(pop)
