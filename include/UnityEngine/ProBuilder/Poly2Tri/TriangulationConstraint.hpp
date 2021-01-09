// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x20
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
  // [] Offset: FFFFFFFF
  class TriangulationConstraint : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint P
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* P;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint Q
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Q;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // Creating value type constructor for type: TriangulationConstraint
    TriangulationConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* P_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Q_ = {}) noexcept : P{P_}, Q{Q_} {}
    // public System.Void .ctor()
    // Offset: 0x19AFC98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationConstraint*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
  static check_size<sizeof(TriangulationConstraint), 24 + sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)> __UnityEngine_ProBuilder_Poly2Tri_TriangulationConstraintSizeCheck;
  static_assert(sizeof(TriangulationConstraint) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationConstraint");
#pragma pack(pop)
