// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
  // [] Offset: FFFFFFFF
  class IScriptableRuntimeReflectionSystem/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IScriptableRuntimeReflectionSystem
    IScriptableRuntimeReflectionSystem() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Boolean TickRealtimeProbes()
    // Offset: 0xFFFFFFFF
    bool TickRealtimeProbes_NEW();
  }; // UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
