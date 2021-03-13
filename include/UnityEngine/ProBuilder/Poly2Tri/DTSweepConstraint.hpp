// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
  // [] Offset: FFFFFFFF
  class DTSweepConstraint : public UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint {
    public:
    // Creating value type constructor for type: DTSweepConstraint
    DTSweepConstraint() noexcept {}
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x2128074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepConstraint* New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepConstraint*, creationType>(p1, p2)));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint");
