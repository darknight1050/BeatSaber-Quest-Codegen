// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PostLateUpdate
  // [] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: CA9BAC
  // [RequiredByNativeCodeAttribute] Offset: CA9BAC
  struct PostLateUpdate/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PlayerSendFrameStarted
    struct PlayerSendFrameStarted;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateRectTransform
    struct UpdateRectTransform;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateCanvasRectTransform
    struct UpdateCanvasRectTransform;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PlayerUpdateCanvases
    struct PlayerUpdateCanvases;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateAudio
    struct UpdateAudio;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateVideo
    struct UpdateVideo;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::DirectorLateUpdate
    struct DirectorLateUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ScriptRunDelayedDynamicFrameRate
    struct ScriptRunDelayedDynamicFrameRate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::VFXUpdate
    struct VFXUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ParticleSystemEndUpdateAll
    struct ParticleSystemEndUpdateAll;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::EndGraphicsJobsAfterScriptLateUpdate
    struct EndGraphicsJobsAfterScriptLateUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateSubstance
    struct UpdateSubstance;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateCustomRenderTextures
    struct UpdateCustomRenderTextures;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateAllRenderers
    struct UpdateAllRenderers;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::EnlightenRuntimeUpdate
    struct EnlightenRuntimeUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateAllSkinnedMeshes
    struct UpdateAllSkinnedMeshes;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ProcessWebSendMessages
    struct ProcessWebSendMessages;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::SortingGroupsUpdate
    struct SortingGroupsUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateVideoTextures
    struct UpdateVideoTextures;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::DirectorRenderImage
    struct DirectorRenderImage;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PlayerEmitCanvasGeometry
    struct PlayerEmitCanvasGeometry;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::FinishFrameRendering
    struct FinishFrameRendering;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::BatchModeUpdate
    struct BatchModeUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PlayerSendFrameComplete
    struct PlayerSendFrameComplete;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateCaptureScreenshot
    struct UpdateCaptureScreenshot;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PresentAfterDraw
    struct PresentAfterDraw;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ClearImmediateRenderers
    struct ClearImmediateRenderers;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::XRPostPresent
    struct XRPostPresent;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::UpdateResolution
    struct UpdateResolution;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::InputEndFrame
    struct InputEndFrame;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::GUIClearEvents
    struct GUIClearEvents;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ShaderHandleErrors
    struct ShaderHandleErrors;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ResetInputAxis
    struct ResetInputAxis;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ThreadedLoadingDebug
    struct ThreadedLoadingDebug;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ProfilerSynchronizeStats
    struct ProfilerSynchronizeStats;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::MemoryFrameMaintenance
    struct MemoryFrameMaintenance;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ExecuteGameCenterCallbacks
    struct ExecuteGameCenterCallbacks;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::ProfilerEndFrame
    struct ProfilerEndFrame;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PlayerSendFramePostPresent
    struct PlayerSendFramePostPresent;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PhysicsSkinnedClothBeginUpdate
    struct PhysicsSkinnedClothBeginUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::PhysicsSkinnedClothFinishUpdate
    struct PhysicsSkinnedClothFinishUpdate;
    // Nested type: UnityEngine::PlayerLoop::PostLateUpdate::TriggerEndOfFrameCallbacks
    struct TriggerEndOfFrameCallbacks;
    // Creating value type constructor for type: PostLateUpdate
    constexpr PostLateUpdate() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PostLateUpdate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate");
