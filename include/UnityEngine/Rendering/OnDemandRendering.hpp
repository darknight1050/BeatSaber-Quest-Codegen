// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.OnDemandRendering
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CA9FD8
  class OnDemandRendering : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OnDemandRendering
    OnDemandRendering() noexcept {}
    // Get static field: static private System.Int32 m_RenderFrameInterval
    static int _get_m_RenderFrameInterval();
    // Set static field: static private System.Int32 m_RenderFrameInterval
    static void _set_m_RenderFrameInterval(int value);
    // static public System.Int32 get_renderFrameInterval()
    // Offset: 0x197B258
    static int get_renderFrameInterval();
    // static System.Void GetRenderFrameInterval(out System.Int32 frameInterval)
    // Offset: 0x197B2C0
    static void GetRenderFrameInterval(int& frameInterval);
    // static private System.Void .cctor()
    // Offset: 0x197B328
    static void _cctor();
  }; // UnityEngine.Rendering.OnDemandRendering
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::OnDemandRendering*, "UnityEngine.Rendering", "OnDemandRendering");
