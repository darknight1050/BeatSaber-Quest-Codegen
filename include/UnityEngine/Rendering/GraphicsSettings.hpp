// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineAsset
  class RenderPipelineAsset;
  // Forward declaring type: BuiltinShaderType
  struct BuiltinShaderType;
  // Forward declaring type: BuiltinShaderMode
  struct BuiltinShaderMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.GraphicsSettings
  // [StaticAccessorAttribute] Offset: D91DA0
  // [NativeHeaderAttribute] Offset: D91DA0
  class GraphicsSettings : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: GraphicsSettings
    GraphicsSettings() noexcept {}
    // static public System.Boolean get_lightsUseLinearIntensity()
    // Offset: 0x1B11BFC
    static bool get_lightsUseLinearIntensity();
    // static System.Boolean AllowEnlightenSupportForUpgradedProject()
    // Offset: 0x1B11C30
    static bool AllowEnlightenSupportForUpgradedProject();
    // static public UnityEngine.Rendering.RenderPipelineAsset get_renderPipelineAsset()
    // Offset: 0x1B11C64
    static UnityEngine::Rendering::RenderPipelineAsset* get_renderPipelineAsset();
    // static private UnityEngine.ScriptableObject get_INTERNAL_defaultRenderPipeline()
    // Offset: 0x1B11D08
    static UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline();
    // static public UnityEngine.Rendering.RenderPipelineAsset get_defaultRenderPipeline()
    // Offset: 0x1B11C68
    static UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline();
    // static public System.Void SetShaderMode(UnityEngine.Rendering.BuiltinShaderType type, UnityEngine.Rendering.BuiltinShaderMode mode)
    // Offset: 0x1B11D3C
    static void SetShaderMode(UnityEngine::Rendering::BuiltinShaderType type, UnityEngine::Rendering::BuiltinShaderMode mode);
    // static public System.Void SetCustomShader(UnityEngine.Rendering.BuiltinShaderType type, UnityEngine.Shader shader)
    // Offset: 0x1B11D8C
    static void SetCustomShader(UnityEngine::Rendering::BuiltinShaderType type, UnityEngine::Shader* shader);
  }; // UnityEngine.Rendering.GraphicsSettings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
