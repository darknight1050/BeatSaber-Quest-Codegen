// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.CSG_Vertex
#include "UnityEngine/ProBuilder/CSG_Vertex.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Color because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: MeshArrays because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Experimental.CSG
namespace UnityEngine::ProBuilder::Experimental::CSG {
  // Autogenerated type: UnityEngine.ProBuilder.Experimental.CSG.CSG_VertexUtility
  class CSG_VertexUtility : public ::CsObject {
    public:
    // static public System.Void GetArrays(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.CSG_Vertex> vertices, UnityEngine.Vector3[] position, UnityEngine.Color[] color, UnityEngine.Vector2[] uv0, UnityEngine.Vector3[] normal, UnityEngine.Vector4[] tangent, UnityEngine.Vector2[] uv2, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3, System.Collections.Generic.List`1<UnityEngine.Vector4> uv4)
    // Offset: 0xF7F960
    static void GetArrays(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::CSG_Vertex>* vertices, ::Array<UnityEngine::Vector3>*& position, ::Array<UnityEngine::Color>*& color, ::Array<UnityEngine::Vector2>*& uv0, ::Array<UnityEngine::Vector3>*& normal, ::Array<UnityEngine::Vector4>*& tangent, ::Array<UnityEngine::Vector2>*& uv2, System::Collections::Generic::List_1<UnityEngine::Vector4>*& uv3, System::Collections::Generic::List_1<UnityEngine::Vector4>*& uv4);
    // static public System.Void GetArrays(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.CSG_Vertex> vertices, UnityEngine.Vector3[] position, UnityEngine.Color[] color, UnityEngine.Vector2[] uv0, UnityEngine.Vector3[] normal, UnityEngine.Vector4[] tangent, UnityEngine.Vector2[] uv2, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3, System.Collections.Generic.List`1<UnityEngine.Vector4> uv4, UnityEngine.ProBuilder.MeshArrays attributes)
    // Offset: 0xF7F98C
    static void GetArrays(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::CSG_Vertex>* vertices, ::Array<UnityEngine::Vector3>*& position, ::Array<UnityEngine::Color>*& color, ::Array<UnityEngine::Vector2>*& uv0, ::Array<UnityEngine::Vector3>*& normal, ::Array<UnityEngine::Vector4>*& tangent, ::Array<UnityEngine::Vector2>*& uv2, System::Collections::Generic::List_1<UnityEngine::Vector4>*& uv3, System::Collections::Generic::List_1<UnityEngine::Vector4>*& uv4, UnityEngine::ProBuilder::MeshArrays attributes);
    // static public UnityEngine.ProBuilder.CSG_Vertex[] GetVertices(UnityEngine.Mesh mesh)
    // Offset: 0xF7D468
    static ::Array<UnityEngine::ProBuilder::CSG_Vertex>* GetVertices(UnityEngine::Mesh* mesh);
    // static public System.Void SetMesh(UnityEngine.Mesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.CSG_Vertex> vertices)
    // Offset: 0xF7DAA8
    static void SetMesh(UnityEngine::Mesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::CSG_Vertex>* vertices);
    // static public UnityEngine.ProBuilder.CSG_Vertex Mix(UnityEngine.ProBuilder.CSG_Vertex x, UnityEngine.ProBuilder.CSG_Vertex y, System.Single weight)
    // Offset: 0xF7F180
    static UnityEngine::ProBuilder::CSG_Vertex Mix(UnityEngine::ProBuilder::CSG_Vertex x, UnityEngine::ProBuilder::CSG_Vertex y, float weight);
    // static public UnityEngine.ProBuilder.CSG_Vertex TransformVertex(UnityEngine.Transform transform, UnityEngine.ProBuilder.CSG_Vertex vertex)
    // Offset: 0xF7DDD8
    static UnityEngine::ProBuilder::CSG_Vertex TransformVertex(UnityEngine::Transform* transform, UnityEngine::ProBuilder::CSG_Vertex vertex);
  }; // UnityEngine.ProBuilder.Experimental.CSG.CSG_VertexUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Experimental::CSG::CSG_VertexUtility*, "UnityEngine.ProBuilder.Experimental.CSG", "CSG_VertexUtility");
#pragma pack(pop)
