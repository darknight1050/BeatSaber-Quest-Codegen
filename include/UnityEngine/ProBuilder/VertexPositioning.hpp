// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.VertexPositioning
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VertexPositioning : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VertexPositioning
    VertexPositioning() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_CoincidentVertices
    static System::Collections::Generic::List_1<int>* _get_s_CoincidentVertices();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_CoincidentVertices
    static void _set_s_CoincidentVertices(System::Collections::Generic::List_1<int>* value);
    // static public UnityEngine.Vector3[] VerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x22AB2B4
    static ::Array<UnityEngine::Vector3>* VerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Void TranslateVerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.Vector3 offset)
    // Offset: 0x22AB434
    static void TranslateVerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes, UnityEngine::Vector3 offset);
    // static System.Void TranslateVerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.Vector3 offset, System.Single snapValue, System.Boolean snapAxisOnly)
    // Offset: 0x22AB548
    static void TranslateVerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes, UnityEngine::Vector3 offset, float snapValue, bool snapAxisOnly);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes, UnityEngine.Vector3 offset)
    // Offset: 0x22ABB30
    static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indexes, UnityEngine::Vector3 offset);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, UnityEngine.Vector3 offset)
    // Offset: 0x22ABE24
    static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::Vector3 offset);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, UnityEngine.Vector3 offset)
    // Offset: 0x22ABF50
    static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, UnityEngine::Vector3 offset);
    // static private System.Void TranslateVerticesInternal(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indices, UnityEngine.Vector3 offset)
    // Offset: 0x22ABC5C
    static void TranslateVerticesInternal(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indices, UnityEngine::Vector3 offset);
    // static public System.Void SetSharedVertexPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 sharedVertexHandle, UnityEngine.Vector3 position)
    // Offset: 0x22AC07C
    static void SetSharedVertexPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int sharedVertexHandle, UnityEngine::Vector3 position);
    // static System.Void SetSharedVertexValues(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 sharedVertexHandle, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x22AC378
    static void SetSharedVertexValues(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int sharedVertexHandle, UnityEngine::ProBuilder::Vertex* vertex);
    // static private System.Void .cctor()
    // Offset: 0x22AC618
    static void _cctor();
  }; // UnityEngine.ProBuilder.VertexPositioning
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VertexPositioning*, "UnityEngine.ProBuilder", "VertexPositioning");
