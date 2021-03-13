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
  // Forward declaring type: DTSweepContext
  class DTSweepContext;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: Orientation
  struct Orientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweep
  // [] Offset: FFFFFFFF
  class DTSweep : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DTSweep
    DTSweep() noexcept {}
    // static public System.Void Triangulate(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x2123D64
    static void Triangulate(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private System.Void Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x2123F94
    static void Sweep(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private System.Void FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x2124220
    static void FinalizationConvexHull(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private System.Void TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode b, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode c)
    // Offset: 0x212489C
    static void TurnAdvancingFrontConvex(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c);
    // static private System.Void FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x212416C
    static void FinalizationPolygon(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x21244BC
    static UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // static private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x212576C
    static UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x21246D0
    static void EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2125FD4
    static void FillEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2126438
    static void FillRightConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x212655C
    static void FillRightConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x21266A8
    static void FillRightBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x21261F4
    static void FillRightAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x21267F8
    static void FillLeftConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x212693C
    static void FillLeftConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2126A58
    static void FillLeftBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2126318
    static void FillLeftAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Boolean IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq)
    // Offset: 0x2125F0C
    static bool IsEdgeSideOfTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq);
    // static private System.Void EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2126004
    static void EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // static private System.Void FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2126D20
    static void FlipEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // static private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle ot, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint op)
    // Offset: 0x2127258
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);
    // static private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.Orientation o, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle ot, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint op)
    // Offset: 0x21271A4
    static UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NextFlipTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::Orientation o, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);
    // static private System.Void FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle flipTriangle, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x21273A8
    static void FlipScanEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // static private System.Void FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode n)
    // Offset: 0x21258D0
    static void FillAdvancingFront(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n);
    // static private System.Void FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2127794
    static void FillBasin(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2127998
    static void FillBasinReq(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Boolean IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2127B24
    static bool IsShallow(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Double HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2127614
    static double HoleAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Double BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x21276E8
    static double BasinAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x21255C8
    static void Fill(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Boolean Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x2125C54
    static bool Legalize(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // static private System.Void RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle ot, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint op)
    // Offset: 0x2124B34
    static void RotateTrianglePair(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweep
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweep*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep");
