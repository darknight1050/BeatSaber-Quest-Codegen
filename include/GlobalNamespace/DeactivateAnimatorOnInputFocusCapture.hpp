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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: DeactivateAnimatorOnInputFocusCapture
  // [] Offset: FFFFFFFF
  class DeactivateAnimatorOnInputFocusCapture : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0xCF49A4
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Boolean _wasEnabled
    // Size: 0x1
    // Offset: 0x28
    bool wasEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DeactivateAnimatorOnInputFocusCapture
    DeactivateAnimatorOnInputFocusCapture(UnityEngine::Animator* animator_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, bool wasEnabled_ = {}) noexcept : animator{animator_}, vrPlatformHelper{vrPlatformHelper_}, wasEnabled{wasEnabled_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x111AF24
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x111B180
    void OnDestroy();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x111B134
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x111B31C
    void HandleInputFocusReleased();
    // public System.Void .ctor()
    // Offset: 0x111B340
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeactivateAnimatorOnInputFocusCapture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeactivateAnimatorOnInputFocusCapture*, creationType>()));
    }
  }; // DeactivateAnimatorOnInputFocusCapture
  #pragma pack(pop)
  static check_size<sizeof(DeactivateAnimatorOnInputFocusCapture), 40 + sizeof(bool)> __GlobalNamespace_DeactivateAnimatorOnInputFocusCaptureSizeCheck;
  static_assert(sizeof(DeactivateAnimatorOnInputFocusCapture) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*, "", "DeactivateAnimatorOnInputFocusCapture");
