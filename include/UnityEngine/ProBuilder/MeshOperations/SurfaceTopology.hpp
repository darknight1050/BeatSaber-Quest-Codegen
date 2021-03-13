// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: WindingOrder
  struct WindingOrder;
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: Edge
  struct Edge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SurfaceTopology : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c
    class $$c;
    // Creating value type constructor for type: SurfaceTopology
    SurfaceTopology() noexcept {}
    // static public UnityEngine.ProBuilder.Face[] ToTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1572FCC
    static ::Array<UnityEngine::ProBuilder::Face*>* ToTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.FaceRebuildData> BreakFaceIntoTris(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x1573458
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* BreakFaceIntoTris(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static public UnityEngine.ProBuilder.WindingOrder GetWindingOrder(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1573800
    static UnityEngine::ProBuilder::WindingOrder GetWindingOrder(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static private UnityEngine.ProBuilder.WindingOrder GetWindingOrder(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1573ADC
    static UnityEngine::ProBuilder::WindingOrder GetWindingOrder(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.ProBuilder.WindingOrder GetWindingOrder(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x1573844
    static UnityEngine::ProBuilder::WindingOrder GetWindingOrder(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points);
    // static public System.Boolean FlipEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1573C54
    static bool FlipEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public UnityEngine.ProBuilder.ActionResult ConformNormals(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1573FDC
    static UnityEngine::ProBuilder::ActionResult* ConformNormals(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static private System.Void GetWindingFlags(UnityEngine.ProBuilder.WingedEdge edge, System.Boolean flag, System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Boolean> flags)
    // Offset: 0x1574444
    static void GetWindingFlags(UnityEngine::ProBuilder::WingedEdge* edge, bool flag, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, bool>* flags);
    // static UnityEngine.ProBuilder.ActionResult ConformOppositeNormal(UnityEngine.ProBuilder.WingedEdge source)
    // Offset: 0x15746A0
    static UnityEngine::ProBuilder::ActionResult* ConformOppositeNormal(UnityEngine::ProBuilder::WingedEdge* source);
    // static private UnityEngine.ProBuilder.Edge GetCommonEdgeInWindingOrder(UnityEngine.ProBuilder.WingedEdge wing)
    // Offset: 0x1574534
    static UnityEngine::ProBuilder::Edge GetCommonEdgeInWindingOrder(UnityEngine::ProBuilder::WingedEdge* wing);
    // static System.Void MatchNormal(UnityEngine.ProBuilder.Face source, UnityEngine.ProBuilder.Face target, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x15747A0
    static void MatchNormal(UnityEngine::ProBuilder::Face* source, UnityEngine::ProBuilder::Face* target, System::Collections::Generic::Dictionary_2<int, int>* lookup);
  }; // UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology");
