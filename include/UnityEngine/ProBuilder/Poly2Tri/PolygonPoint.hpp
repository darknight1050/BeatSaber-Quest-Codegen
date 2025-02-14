// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
  class PolygonPoint : public UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint {
    public:
    // Creating value type constructor for type: PolygonPoint
    PolygonPoint() noexcept {}
    // public System.Void .ctor(System.Double x, System.Double y, System.Int32 index)
    // Offset: 0x2382B34
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
    // Base method: System.Void TriangulationPoint::.ctor(System.Double x, System.Double y, System.Int32 index)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PolygonPoint* New_ctor(double x, double y, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PolygonPoint*, creationType>(x, y, index)));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonPoint");
