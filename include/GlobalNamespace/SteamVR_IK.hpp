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
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_IK
  class SteamVR_IK : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform start
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* start;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform joint
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* joint;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform end
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* end;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform poleVector
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* poleVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform upVector
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* upVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single blendPct
    // Size: 0x4
    // Offset: 0x48
    float blendPct;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: blendPct and: startXform
    char __padding6[0x4] = {};
    // [HideInInspector] Offset: 0xDD4B3C
    // public UnityEngine.Transform startXform
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* startXform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [HideInInspector] Offset: 0xDD4B4C
    // public UnityEngine.Transform jointXform
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* jointXform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [HideInInspector] Offset: 0xDD4B5C
    // public UnityEngine.Transform endXform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* endXform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: SteamVR_IK
    SteamVR_IK(UnityEngine::Transform* target_ = {}, UnityEngine::Transform* start_ = {}, UnityEngine::Transform* joint_ = {}, UnityEngine::Transform* end_ = {}, UnityEngine::Transform* poleVector_ = {}, UnityEngine::Transform* upVector_ = {}, float blendPct_ = {}, UnityEngine::Transform* startXform_ = {}, UnityEngine::Transform* jointXform_ = {}, UnityEngine::Transform* endXform_ = {}) noexcept : target{target_}, start{start_}, joint{joint_}, end{end_}, poleVector{poleVector_}, upVector{upVector_}, blendPct{blendPct_}, startXform{startXform_}, jointXform{jointXform_}, endXform{endXform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void LateUpdate()
    // Offset: 0x13B7004
    void LateUpdate();
    // static public System.Boolean Solve(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Vector3 poleVector, System.Single jointDist, System.Single targetDist, ref UnityEngine.Vector3 result, out UnityEngine.Vector3 forward, out UnityEngine.Vector3 up)
    // Offset: 0x13B79AC
    static bool Solve(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Vector3 poleVector, float jointDist, float targetDist, UnityEngine::Vector3& result, UnityEngine::Vector3& forward, UnityEngine::Vector3& up);
    // public System.Void .ctor()
    // Offset: 0x13B7EC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_IK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_IK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_IK*, creationType>()));
    }
  }; // SteamVR_IK
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_IK), 96 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_SteamVR_IKSizeCheck;
  static_assert(sizeof(SteamVR_IK) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_IK*, "", "SteamVR_IK");
