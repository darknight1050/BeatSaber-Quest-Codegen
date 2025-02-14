// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundNonLightRendererCore
  // [ExecuteAlways] Offset: DF3658
  class BloomPrePassBackgroundNonLightRendererCore : public GlobalNamespace::BloomPrePassNonLightPass {
    public:
    // private System.Boolean _keepDefaultRendering
    // Size: 0x1
    // Offset: 0x20
    bool keepDefaultRendering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keepDefaultRendering and: commandBuffer
    char __padding0[0x7] = {};
    // private UnityEngine.Rendering.CommandBuffer _commandBuffer
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundNonLightRendererCore
    BloomPrePassBackgroundNonLightRendererCore(bool keepDefaultRendering_ = {}, UnityEngine::Rendering::CommandBuffer* commandBuffer_ = {}) noexcept : keepDefaultRendering{keepDefaultRendering_}, commandBuffer{commandBuffer_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF3E1C
    // Get static field: static private readonly System.Int32 _worldSpaceCameraPosID
    static int _get__worldSpaceCameraPosID();
    // Set static field: static private readonly System.Int32 _worldSpaceCameraPosID
    static void _set__worldSpaceCameraPosID(int value);
    // protected UnityEngine.Renderer get_renderer()
    // Offset: 0xFFFFFFFF
    UnityEngine::Renderer* get_renderer();
    // private System.Void InitIfNeeded()
    // Offset: 0x1D6B5C8
    void InitIfNeeded();
    // protected System.Void Awake()
    // Offset: 0x1D6B678
    void Awake();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1D6B67C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // protected System.Void .ctor()
    // Offset: 0x1D6B560
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundNonLightRendererCore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundNonLightRendererCore*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D6B860
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBackgroundNonLightRendererCore
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundNonLightRendererCore), 40 + sizeof(UnityEngine::Rendering::CommandBuffer*)> __GlobalNamespace_BloomPrePassBackgroundNonLightRendererCoreSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundNonLightRendererCore) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*, "", "BloomPrePassBackgroundNonLightRendererCore");
