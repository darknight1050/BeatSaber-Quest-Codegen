// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
  class DTSweepPointComparator : public ::CsObject, public System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> {
    public:
    // public System.Int32 Compare(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x19173FC
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer`1::Compare(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    int Compare(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
    // public System.Void .ctor()
    // Offset: 0x1916C5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DTSweepPointComparator* New_ctor();
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepPointComparator");
#pragma pack(pop)
