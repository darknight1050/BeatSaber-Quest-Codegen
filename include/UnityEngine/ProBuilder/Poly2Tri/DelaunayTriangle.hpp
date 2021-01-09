// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
#include "UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
#include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  // [] Offset: FFFFFFFF
  class DelaunayTriangle : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Neighbors
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    // Size: 0x3
    // Offset: 0x40
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    // Size: 0x3
    // Offset: 0x43
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // [CompilerGeneratedAttribute] Offset: 0xDB1CF0
    // private System.Boolean <IsInterior>k__BackingField
    // Size: 0x1
    // Offset: 0x46
    bool IsInterior;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DelaunayTriangle
    DelaunayTriangle(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay_ = {}, bool IsInterior_ = {}) noexcept : Points{Points_}, Neighbors{Neighbors_}, EdgeIsConstrained{EdgeIsConstrained_}, EdgeIsDelaunay{EdgeIsDelaunay_}, IsInterior{IsInterior_} {}
    // public System.Boolean get_IsInterior()
    // Offset: 0x19B0644
    bool get_IsInterior();
    // public System.Void set_IsInterior(System.Boolean value)
    // Offset: 0x19B064C
    void set_IsInterior(bool value);
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p3)
    // Offset: 0x19AD4D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelaunayTriangle* New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelaunayTriangle*, creationType>(p1, p2, p3)));
    }
    // public System.Int32 IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AF7A8
    int IndexOf(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Int32 IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19B0658
    int IndexCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AC4CC
    bool Contains(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // private System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x19B0690
    void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x19AD584
    void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AC5A8
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19ACDA8
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19ACC7C
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19AC52C
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19ACBEC
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19ACD18
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // private System.Void RotateCW()
    // Offset: 0x19B0758
    void RotateCW();
    // public System.Void Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint oPoint, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint nPoint)
    // Offset: 0x19AF9F0
    void Legalize(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);
    // public System.Void MarkConstrainedEdge(System.Int32 index)
    // Offset: 0x19AE7A0
    void MarkConstrainedEdge(int index);
    // public System.Void MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint q)
    // Offset: 0x19AE7AC
    void MarkConstrainedEdge(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);
    // public System.Int32 EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x19AE6B0
    int EdgeIndex(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
    // public System.Boolean GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AF918
    bool GetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AD1C4
    bool GetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x19AFB30
    void SetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x19AFB80
    void SetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Boolean GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AF960
    bool GetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AF9A8
    bool GetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x19AFA90
    void SetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x19AFAE0
    void SetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public override System.String ToString()
    // Offset: 0x19B0820
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, "UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle");
