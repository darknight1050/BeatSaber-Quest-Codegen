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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: CameraRenderCallbacksManager
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA4228
  class CameraRenderCallbacksManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    class ICameraRenderCallbacks;
    // protected System.Collections.Generic.HashSet`1<CameraRenderCallbacksManager/ICameraRenderCallbacks> _observers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>* observers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: CameraRenderCallbacksManager
    CameraRenderCallbacksManager(System::Collections::Generic::HashSet_1<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>* observers_ = {}, UnityEngine::Camera* camera_ = {}) noexcept : observers{observers_}, camera{camera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CameraRenderCallbacksManager> _callbackManagers
    static System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CameraRenderCallbacksManager*>* _get__callbackManagers();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CameraRenderCallbacksManager> _callbackManagers
    static void _set__callbackManagers(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CameraRenderCallbacksManager*>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x18782C4
    static void NoDomainReloadInit();
    // static public System.Void RegisterForCameraCallbacks(UnityEngine.Camera camera, CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x1878354
    static void RegisterForCameraCallbacks(UnityEngine::Camera* camera, GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // static public System.Void UnregisterFromCameraCallbacks(CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x187854C
    static void UnregisterFromCameraCallbacks(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // private System.Void RegisterForCameraCallbacks(CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x18784E4
    void RegisterForCameraCallbacks(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // private System.Void UnregisterFromCameraCallbacksInternal(CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x187880C
    void UnregisterFromCameraCallbacksInternal(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // protected System.Void Awake()
    // Offset: 0x18788C0
    void Awake();
    // private System.Void OnPreRender()
    // Offset: 0x1878940
    void OnPreRender();
    // private System.Void OnPostRender()
    // Offset: 0x1878AB4
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0x1878C24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CameraRenderCallbacksManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CameraRenderCallbacksManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CameraRenderCallbacksManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1878CA0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // CameraRenderCallbacksManager
  static check_size<sizeof(CameraRenderCallbacksManager), 32 + sizeof(UnityEngine::Camera*)> __GlobalNamespace_CameraRenderCallbacksManagerSizeCheck;
  static_assert(sizeof(CameraRenderCallbacksManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CameraRenderCallbacksManager*, "", "CameraRenderCallbacksManager");
#pragma pack(pop)
