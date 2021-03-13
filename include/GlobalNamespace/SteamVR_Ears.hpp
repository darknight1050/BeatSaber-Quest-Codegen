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
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Ears
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: CE516C
  class SteamVR_Ears : public UnityEngine::MonoBehaviour {
    public:
    // public SteamVR_Camera vrcam
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SteamVR_Camera* vrcam;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Camera*) == 0x8);
    // private System.Boolean usingSpeakers
    // Size: 0x1
    // Offset: 0x20
    bool usingSpeakers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingSpeakers and: offset
    char __padding1[0x3] = {};
    // private UnityEngine.Quaternion offset
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: SteamVR_Ears
    SteamVR_Ears(GlobalNamespace::SteamVR_Camera* vrcam_ = {}, bool usingSpeakers_ = {}, UnityEngine::Quaternion offset_ = {}) noexcept : vrcam{vrcam_}, usingSpeakers{usingSpeakers_}, offset{offset_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OnNewPosesApplied()
    // Offset: 0x12CAC18
    void OnNewPosesApplied();
    // private System.Void OnEnable()
    // Offset: 0x12CAD8C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x12CAF30
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x12CB004
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Ears* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Ears::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Ears*, creationType>()));
    }
  }; // SteamVR_Ears
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Ears), 36 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_SteamVR_EarsSizeCheck;
  static_assert(sizeof(SteamVR_Ears) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Ears*, "", "SteamVR_Ears");
