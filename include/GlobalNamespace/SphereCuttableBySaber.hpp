// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CuttableBySaber
#include "GlobalNamespace/CuttableBySaber.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SphereCollider
  class SphereCollider;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: SphereCuttableBySaber
  class SphereCuttableBySaber : public GlobalNamespace::CuttableBySaber {
    public:
    // private UnityEngine.SphereCollider _collider
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::SphereCollider* collider;
    // Field size check
    static_assert(sizeof(UnityEngine::SphereCollider*) == 0x8);
    // private System.Boolean _canBeCut
    // Size: 0x1
    // Offset: 0x28
    bool canBeCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SphereCuttableBySaber
    SphereCuttableBySaber(UnityEngine::SphereCollider* collider_ = {}, bool canBeCut_ = {}) noexcept : collider{collider_}, canBeCut{canBeCut_} {}
    // protected System.Void Awake()
    // Offset: 0x11766E8
    void Awake();
    // public override System.Single get_radius()
    // Offset: 0x1176688
    // Implemented from: CuttableBySaber
    // Base method: System.Single CuttableBySaber::get_radius()
    float get_radius();
    // public override System.Void set_canBeCut(System.Boolean value)
    // Offset: 0x11766A4
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::set_canBeCut(System.Boolean value)
    void set_canBeCut(bool value);
    // public override System.Boolean get_canBeCut()
    // Offset: 0x11766E0
    // Implemented from: CuttableBySaber
    // Base method: System.Boolean CuttableBySaber::get_canBeCut()
    bool get_canBeCut();
    // public override System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1176720
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    void Cut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public System.Void .ctor()
    // Offset: 0x1176744
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SphereCuttableBySaber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SphereCuttableBySaber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SphereCuttableBySaber*, creationType>()));
    }
  }; // SphereCuttableBySaber
  #pragma pack(pop)
  static check_size<sizeof(SphereCuttableBySaber), 40 + sizeof(bool)> __GlobalNamespace_SphereCuttableBySaberSizeCheck;
  static_assert(sizeof(SphereCuttableBySaber) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SphereCuttableBySaber*, "", "SphereCuttableBySaber");
