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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  // Autogenerated type: HorizontalCameraFov
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D98808
  class HorizontalCameraFov : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single _horizontalFOV
    // Size: 0x4
    // Offset: 0x18
    float horizontalFOV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HorizontalCameraFov
    HorizontalCameraFov(float horizontalFOV_ = {}) noexcept : horizontalFOV{horizontalFOV_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1036700
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x10367EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HorizontalCameraFov* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HorizontalCameraFov::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HorizontalCameraFov*, creationType>()));
    }
  }; // HorizontalCameraFov
  static check_size<sizeof(HorizontalCameraFov), 24 + sizeof(float)> __GlobalNamespace_HorizontalCameraFovSizeCheck;
  static_assert(sizeof(HorizontalCameraFov) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HorizontalCameraFov*, "", "HorizontalCameraFov");
#pragma pack(pop)
