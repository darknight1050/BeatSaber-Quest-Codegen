// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
#include "UnityEngine/ProBuilder/Poly2Tri/Triangulatable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
  // Forward declaring type: TriangulationMode
  struct TriangulationMode;
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.Polygon
  class Polygon : public UnityEngine::ProBuilder::Poly2Tri::Triangulatable, public ::Il2CppObject {
    public:
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _points
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points;
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _steinerPoints
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* steinerPoints;
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> _holes
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon*>* holes;
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> _triangles
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* triangles;
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> points)
    // Offset: 0x1885F3C
    static Polygon* New_ctor(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> points)
    // Offset: 0x18862E4
    static Polygon* New_ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);
    // public System.Void AddHole(UnityEngine.ProBuilder.Poly2Tri.Polygon poly)
    // Offset: 0x1886378
    void AddHole(UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x1886370
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Triangulatable::get_TriangulationMode()
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> get_Triangles()
    // Offset: 0x188641C
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Triangulatable::get_Triangles()
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();
    // public System.Void AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x1886424
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Void Triangulatable::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    // Offset: 0x188648C
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Void Triangulatable::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);
    // public System.Void Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    // Offset: 0x18864F4
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Void Triangulatable::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);
  }; // UnityEngine.ProBuilder.Poly2Tri.Polygon
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::Polygon*, "UnityEngine.ProBuilder.Poly2Tri", "Polygon");
#pragma pack(pop)
