// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
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
  // Forward declaring type: ExtrudeMethod
  struct ExtrudeMethod;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
  class ExtrudeElements : public ::CsObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c
    class $$c;
    // static public UnityEngine.ProBuilder.Face[] Extrude(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, UnityEngine.ProBuilder.ExtrudeMethod method, System.Single distance)
    // Offset: 0xEFDFD4
    static ::Array<UnityEngine::ProBuilder::Face*>* Extrude(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, UnityEngine::ProBuilder::ExtrudeMethod method, float distance);
    // static public UnityEngine.ProBuilder.Edge[] Extrude(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Single distance, System.Boolean extrudeAsGroup, System.Boolean enableManifoldExtrude)
    // Offset: 0xF00158
    static ::Array<UnityEngine::ProBuilder::Edge>* Extrude(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, float distance, bool extrudeAsGroup, bool enableManifoldExtrude);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> DetachFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0xF010D8
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* DetachFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> DetachFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean deleteSourceFaces)
    // Offset: 0xF010E0
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* DetachFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool deleteSourceFaces);
    // static private UnityEngine.ProBuilder.Face[] ExtrudePerFace(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single distance)
    // Offset: 0xEFDFE8
    static ::Array<UnityEngine::ProBuilder::Face*>* ExtrudePerFace(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, float distance);
    // static private UnityEngine.ProBuilder.Face[] ExtrudeAsGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean compensateAngleVertexDistance, System.Single distance)
    // Offset: 0xEFEA8C
    static ::Array<UnityEngine::ProBuilder::Face*>* ExtrudeAsGroups(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool compensateAngleVertexDistance, float distance);
    // static private System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face>> GetFaceGroups(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings)
    // Offset: 0xF0199C
    static System::Collections::Generic::List_1<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>* GetFaceGroups(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings);
    // static private System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.EdgeLookup,UnityEngine.ProBuilder.Face> GetPerimeterEdges(System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0xF01D00
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup, UnityEngine::ProBuilder::Face*>* GetPerimeterEdges(System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::Dictionary_2<int, int>* lookup);
  }; // UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements");
#pragma pack(pop)
