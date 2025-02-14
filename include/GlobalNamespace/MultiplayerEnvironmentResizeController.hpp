// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerCenterResizeController
  class MultiplayerCenterResizeController;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x43
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEnvironmentResizeController
  class MultiplayerEnvironmentResizeController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType
    struct ResizeType;
    // Nested type: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData
    class ResizeData;
    // private UnityEngine.Transform _platformEnd
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* platformEnd;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private MultiplayerEnvironmentResizeController/ResizeData[] _resizeData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*>* resizeData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE1DEA8
    // private readonly MultiplayerCenterResizeController _centerResizeController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerCenterResizeController* centerResizeController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerCenterResizeController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1DEB8
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DEC8
    // private System.Action resizingDidFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* resizingDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _isResizingFinished
    // Size: 0x1
    // Offset: 0x40
    bool isResizingFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _edgeDistanceFromCenterFound
    // Size: 0x1
    // Offset: 0x41
    bool edgeDistanceFromCenterFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _spawnCenterDistanceFound
    // Size: 0x1
    // Offset: 0x42
    bool spawnCenterDistanceFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerEnvironmentResizeController
    MultiplayerEnvironmentResizeController(UnityEngine::Transform* platformEnd_ = {}, ::Array<GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*>* resizeData_ = {}, GlobalNamespace::MultiplayerCenterResizeController* centerResizeController_ = {}, GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter_ = {}, System::Action* resizingDidFinishEvent_ = {}, bool isResizingFinished_ = {}, bool edgeDistanceFromCenterFound_ = {}, bool spawnCenterDistanceFound_ = {}) noexcept : platformEnd{platformEnd_}, resizeData{resizeData_}, centerResizeController{centerResizeController_}, beatmapObjectSpawnCenter{beatmapObjectSpawnCenter_}, resizingDidFinishEvent{resizingDidFinishEvent_}, isResizingFinished{isResizingFinished_}, edgeDistanceFromCenterFound{edgeDistanceFromCenterFound_}, spawnCenterDistanceFound{spawnCenterDistanceFound_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isResizingFinished()
    // Offset: 0x114E974
    bool get_isResizingFinished();
    // public System.Void add_resizingDidFinishEvent(System.Action value)
    // Offset: 0x114E97C
    void add_resizingDidFinishEvent(System::Action* value);
    // public System.Void remove_resizingDidFinishEvent(System.Action value)
    // Offset: 0x114EA20
    void remove_resizingDidFinishEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x114EAC4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x114EC30
    void OnDestroy();
    // private System.Void HandleEdgeDistanceFromCenterWasCalculated(System.Single edgeDistanceFromCenter)
    // Offset: 0x114EC00
    void HandleEdgeDistanceFromCenterWasCalculated(float edgeDistanceFromCenter);
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single distance)
    // Offset: 0x114EC18
    void HandleSpawnCenterDistanceWasFound(float distance);
    // private System.Void TryResize()
    // Offset: 0x114ED84
    void TryResize();
    // private System.Void Resize()
    // Offset: 0x114ED9C
    void Resize();
    // public System.Void .ctor()
    // Offset: 0x114F094
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEnvironmentResizeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerEnvironmentResizeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEnvironmentResizeController*, creationType>()));
    }
  }; // MultiplayerEnvironmentResizeController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEnvironmentResizeController), 66 + sizeof(bool)> __GlobalNamespace_MultiplayerEnvironmentResizeControllerSizeCheck;
  static_assert(sizeof(MultiplayerEnvironmentResizeController) == 0x43);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerEnvironmentResizeController*, "", "MultiplayerEnvironmentResizeController");
