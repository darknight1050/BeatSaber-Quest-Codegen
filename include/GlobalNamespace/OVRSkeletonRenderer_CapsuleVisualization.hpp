// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: OVRSkeletonRenderer/CapsuleVisualization
  // [] Offset: FFFFFFFF
  class OVRSkeletonRenderer::CapsuleVisualization : public ::Il2CppObject {
    public:
    // private UnityEngine.GameObject CapsuleGO
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* CapsuleGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private OVRBoneCapsule BoneCapsule
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRBoneCapsule* BoneCapsule;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRBoneCapsule*) == 0x8);
    // private UnityEngine.Vector3 capsuleScale
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 capsuleScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: capsuleScale and: Renderer
    char __padding2[0x4] = {};
    // private UnityEngine.MeshRenderer Renderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::MeshRenderer* Renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Material RenderMaterial
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* RenderMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material SystemGestureMaterial
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Material* SystemGestureMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: CapsuleVisualization
    CapsuleVisualization(UnityEngine::GameObject* CapsuleGO_ = {}, GlobalNamespace::OVRBoneCapsule* BoneCapsule_ = {}, UnityEngine::Vector3 capsuleScale_ = {}, UnityEngine::MeshRenderer* Renderer_ = {}, UnityEngine::Material* RenderMaterial_ = {}, UnityEngine::Material* SystemGestureMaterial_ = {}) noexcept : CapsuleGO{CapsuleGO_}, BoneCapsule{BoneCapsule_}, capsuleScale{capsuleScale_}, Renderer{Renderer_}, RenderMaterial{RenderMaterial_}, SystemGestureMaterial{SystemGestureMaterial_} {}
    // public System.Void .ctor(UnityEngine.GameObject rootGO, UnityEngine.Material renderMat, UnityEngine.Material systemGestureMat, System.Single scale, OVRBoneCapsule boneCapsule)
    // Offset: 0x1978CA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeletonRenderer::CapsuleVisualization* New_ctor(UnityEngine::GameObject* rootGO, UnityEngine::Material* renderMat, UnityEngine::Material* systemGestureMat, float scale, GlobalNamespace::OVRBoneCapsule* boneCapsule) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeletonRenderer::CapsuleVisualization*, creationType>(rootGO, renderMat, systemGestureMat, scale, boneCapsule)));
    }
    // public System.Void Update(System.Single scale, System.Boolean shouldRender, System.Boolean shouldUseSystemGestureMaterial, OVRSkeletonRenderer/ConfidenceBehavior confidenceBehavior, OVRSkeletonRenderer/SystemGestureBehavior systemGestureBehavior)
    // Offset: 0x197925C
    void Update(float scale, bool shouldRender, bool shouldUseSystemGestureMaterial, GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior confidenceBehavior, GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior systemGestureBehavior);
  }; // OVRSkeletonRenderer/CapsuleVisualization
  static check_size<sizeof(OVRSkeletonRenderer::CapsuleVisualization), 64 + sizeof(UnityEngine::Material*)> __GlobalNamespace_OVRSkeletonRenderer_CapsuleVisualizationSizeCheck;
  static_assert(sizeof(OVRSkeletonRenderer::CapsuleVisualization) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*, "", "OVRSkeletonRenderer/CapsuleVisualization");
#pragma pack(pop)
