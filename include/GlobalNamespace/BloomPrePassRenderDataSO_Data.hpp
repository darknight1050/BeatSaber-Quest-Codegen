// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BloomPrePassRenderDataSO
#include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassRenderDataSO/Data
  class BloomPrePassRenderDataSO::Data : public ::CsObject {
    public:
    // public UnityEngine.RenderTexture bloomPrePassRenderTexture
    // Offset: 0x10
    UnityEngine::RenderTexture* bloomPrePassRenderTexture;
    // public UnityEngine.Vector2 textureToScreenRatio
    // Offset: 0x18
    UnityEngine::Vector2 textureToScreenRatio;
    // public UnityEngine.Matrix4x4 viewMatrix
    // Offset: 0x20
    UnityEngine::Matrix4x4 viewMatrix;
    // public UnityEngine.Matrix4x4 projectionMatrix
    // Offset: 0x60
    UnityEngine::Matrix4x4 projectionMatrix;
    // public System.Single stereoCameraEyeOffset
    // Offset: 0xA0
    float stereoCameraEyeOffset;
    // public System.Void .ctor()
    // Offset: 0x180C2CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BloomPrePassRenderDataSO::Data* New_ctor();
  }; // BloomPrePassRenderDataSO/Data
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRenderDataSO::Data*, "", "BloomPrePassRenderDataSO/Data");
#pragma pack(pop)
