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
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.RenderPipeline
  class RenderPipeline : public ::CsObject {
    public:
    // private System.Boolean <disposed>k__BackingField
    // Offset: 0x10
    bool disposed;
    // protected System.Void Render(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0xFFFFFFFF
    void Render(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // System.Void InternalRender(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0x1372C90
    void InternalRender(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // public System.Boolean get_disposed()
    // Offset: 0x1372D50
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x1372D58
    void set_disposed(bool value);
    // System.Void Dispose()
    // Offset: 0x1372D64
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1372DEC
    void Dispose(bool disposing);
  }; // UnityEngine.Rendering.RenderPipeline
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
#pragma pack(pop)
