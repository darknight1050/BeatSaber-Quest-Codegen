// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: OculusMRCManager
  // [] Offset: FFFFFFFF
  class OculusMRCManager : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xD994B8
    // private IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // Creating value type constructor for type: OculusMRCManager
    OculusMRCManager(GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}) noexcept : vrPlatformHelper{vrPlatformHelper_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0x1037D1C
    void Init(System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // public System.Void .ctor()
    // Offset: 0x1037FC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusMRCManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusMRCManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusMRCManager*, creationType>()));
    }
  }; // OculusMRCManager
  static check_size<sizeof(OculusMRCManager), 24 + sizeof(GlobalNamespace::IVRPlatformHelper*)> __GlobalNamespace_OculusMRCManagerSizeCheck;
  static_assert(sizeof(OculusMRCManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusMRCManager*, "", "OculusMRCManager");
#pragma pack(pop)
