// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.RaycastHit
  class RaycastHit : public ::Il2CppObject {
    public:
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x10
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 point
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 normal
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Int32 face
    // Size: 0x4
    // Offset: 0x2C
    int face;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RaycastHit
    RaycastHit(float distance_ = {}, UnityEngine::Vector3 point_ = {}, UnityEngine::Vector3 normal_ = {}, int face_ = {}) noexcept : distance{distance_}, point{point_}, normal{normal_}, face{face_} {}
    // public System.Void .ctor(System.Single distance, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, System.Int32 face)
    // Offset: 0x14CAF70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RaycastHit* New_ctor(float distance, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, int face) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::RaycastHit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RaycastHit*, creationType>(distance, point, normal, face)));
    }
  }; // UnityEngine.ProBuilder.RaycastHit
  #pragma pack(pop)
  static check_size<sizeof(RaycastHit), 44 + sizeof(int)> __UnityEngine_ProBuilder_RaycastHitSizeCheck;
  static_assert(sizeof(RaycastHit) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::RaycastHit*, "UnityEngine.ProBuilder", "RaycastHit");
