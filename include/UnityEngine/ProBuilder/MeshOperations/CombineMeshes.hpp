// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.CombineMeshes
  class CombineMeshes : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c
    class $$c;
    // Creating value type constructor for type: CombineMeshes
    CombineMeshes() noexcept {}
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> Combine(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes)
    // Offset: 0x152AC44
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* Combine(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> Combine(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes, UnityEngine.ProBuilder.ProBuilderMesh meshTarget)
    // Offset: 0x152AFF4
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* Combine(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, UnityEngine::ProBuilder::ProBuilderMesh* meshTarget);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> CombineToNewMeshes(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes)
    // Offset: 0x152AC48
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* CombineToNewMeshes(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes);
    // static private System.Void AccumulateMeshesInfo(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> meshes, System.Int32 offset, ref System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, ref System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces, ref System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> autoUvFaces, ref System.Collections.Generic.List`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, ref System.Collections.Generic.List`1<UnityEngine.ProBuilder.SharedVertex> sharedTextures, ref System.Collections.Generic.List`1<UnityEngine.Material> materialMap, UnityEngine.Transform targetTransform)
    // Offset: 0x152B8B8
    static void AccumulateMeshesInfo(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, int offset, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>*& vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*& faces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*& autoUvFaces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SharedVertex*>*& sharedVertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SharedVertex*>*& sharedTextures, System::Collections::Generic::List_1<UnityEngine::Material*>*& materialMap, UnityEngine::Transform* targetTransform);
    // static private UnityEngine.ProBuilder.ProBuilderMesh CreateMeshFromSplit(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedVertexLookup, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedTextureLookup, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> remap, UnityEngine.Material[] materials)
    // Offset: 0x152D208
    static UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshFromSplit(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::Dictionary_2<int, int>* sharedVertexLookup, System::Collections::Generic::Dictionary_2<int, int>* sharedTextureLookup, System::Collections::Generic::Dictionary_2<int, int>* remap, ::Array<UnityEngine::Material*>* materials);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.ProBuilderMesh> SplitByMaxVertexCount(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedTextures, System.UInt32 maxVertexCount)
    // Offset: 0x152C34C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh*>* SplitByMaxVertexCount(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, uint maxVertexCount);
  }; // UnityEngine.ProBuilder.MeshOperations.CombineMeshes
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::CombineMeshes*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes");
