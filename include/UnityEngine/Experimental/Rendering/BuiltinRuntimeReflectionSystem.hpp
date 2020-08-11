// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
#include "UnityEngine/Experimental/Rendering/IScriptableRuntimeReflectionSystem.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
  class BuiltinRuntimeReflectionSystem : public ::CsObject, public UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem, public System::IDisposable {
    public:
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x12F6C18
    void Dispose(bool disposing);
    // static private System.Boolean BuiltinUpdate()
    // Offset: 0x12F6BE0
    static bool BuiltinUpdate();
    // static private UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
    // Offset: 0x12F6C1C
    static UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();
    // public System.Boolean TickRealtimeProbes()
    // Offset: 0x12F6BAC
    // Implemented from: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
    // Base method: System.Boolean IScriptableRuntimeReflectionSystem::TickRealtimeProbes()
    bool TickRealtimeProbes();
    // public System.Void Dispose()
    // Offset: 0x12F6C14
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x12F6C78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BuiltinRuntimeReflectionSystem* New_ctor();
  }; // UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
#pragma pack(pop)
