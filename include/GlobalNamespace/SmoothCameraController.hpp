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
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: SmoothCamera
  class SmoothCamera;
}
// Forward declaring namespace: LIV::SDK::Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: LIV
  class LIV;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: SmoothCameraController
  // [] Offset: FFFFFFFF
  class SmoothCameraController : public UnityEngine::MonoBehaviour {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private SmoothCamera _smoothCamera
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SmoothCamera* smoothCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SmoothCamera*) == 0x8);
    // private LIV.SDK.Unity.LIV _liv
    // Size: 0x8
    // Offset: 0x28
    LIV::SDK::Unity::LIV* liv;
    // Field size check
    static_assert(sizeof(LIV::SDK::Unity::LIV*) == 0x8);
    // Creating value type constructor for type: SmoothCameraController
    SmoothCameraController(GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::SmoothCamera* smoothCamera_ = {}, LIV::SDK::Unity::LIV* liv_ = {}) noexcept : mainSettingsModel{mainSettingsModel_}, smoothCamera{smoothCamera_}, liv{liv_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF38F20
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF390B0
    void OnDestroy();
    // private System.Void HandleLIVDidActivate()
    // Offset: 0xF390B4
    void HandleLIVDidActivate();
    // private System.Void HandleLIVDidDeactivate()
    // Offset: 0xF39104
    void HandleLIVDidDeactivate();
    // private System.Void ActivateSmoothCameraIfNeeded()
    // Offset: 0xF38F24
    void ActivateSmoothCameraIfNeeded();
    // public System.Void .ctor()
    // Offset: 0xF39108
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothCameraController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SmoothCameraController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothCameraController*, creationType>()));
    }
  }; // SmoothCameraController
  static check_size<sizeof(SmoothCameraController), 40 + sizeof(LIV::SDK::Unity::LIV*)> __GlobalNamespace_SmoothCameraControllerSizeCheck;
  static_assert(sizeof(SmoothCameraController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
#pragma pack(pop)
