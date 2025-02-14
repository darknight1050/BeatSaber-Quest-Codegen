// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: Orientation
  struct Orientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
  class TriangulationUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TriangulationUtil
    TriangulationUtil() noexcept {}
    // Get static field: static public System.Double EPSILON
    static double _get_EPSILON();
    // Set static field: static public System.Double EPSILON
    static void _set_EPSILON(double value);
    // static public System.Boolean SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pa, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pb, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pc, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pd)
    // Offset: 0x23807B8
    static bool SmartIncircle(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd);
    // static public System.Boolean InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pa, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pb, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pc, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pd)
    // Offset: 0x237FBF0
    static bool InScanArea(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd);
    // static public UnityEngine.ProBuilder.Poly2Tri.Orientation Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pa, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pb, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pc)
    // Offset: 0x237DF94
    static UnityEngine::ProBuilder::Poly2Tri::Orientation Orient2d(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc);
    // static private System.Void .cctor()
    // Offset: 0x2382D78
    static void _cctor();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationUtil");
