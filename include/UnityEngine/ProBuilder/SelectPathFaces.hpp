// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectPathFaces
  class SelectPathFaces : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SelectPathFaces
    SelectPathFaces() noexcept {}
    // Get static field: static private System.Int32[] s_cachedPredecessors
    static ::Array<int>* _get_s_cachedPredecessors();
    // Set static field: static private System.Int32[] s_cachedPredecessors
    static void _set_s_cachedPredecessors(::Array<int>* value);
    // Get static field: static private System.Int32 s_cachedStart
    static int _get_s_cachedStart();
    // Set static field: static private System.Int32 s_cachedStart
    static void _set_s_cachedStart(int value);
    // Get static field: static private UnityEngine.ProBuilder.ProBuilderMesh s_cachedMesh
    static UnityEngine::ProBuilder::ProBuilderMesh* _get_s_cachedMesh();
    // Set static field: static private UnityEngine.ProBuilder.ProBuilderMesh s_cachedMesh
    static void _set_s_cachedMesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // Get static field: static private System.Int32 s_cachedFacesCount
    static int _get_s_cachedFacesCount();
    // Set static field: static private System.Int32 s_cachedFacesCount
    static void _set_s_cachedFacesCount(int value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> s_cachedWings
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* _get_s_cachedWings();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> s_cachedWings
    static void _set_s_cachedWings(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Int32> s_cachedFacesIndex
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, int>* _get_s_cachedFacesIndex();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Int32> s_cachedFacesIndex
    static void _set_s_cachedFacesIndex(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, int>* value);
    // static public System.Collections.Generic.List`1<System.Int32> GetPath(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 start, System.Int32 end)
    // Offset: 0x14CC074
    static System::Collections::Generic::List_1<int>* GetPath(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int start, int end);
    // static private System.Int32[] Dijkstra(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 start)
    // Offset: 0x14CC444
    static ::Array<int>* Dijkstra(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int start);
    // static private System.Single GetWeight(System.Int32 face1, System.Int32 face2, UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x14CCAEC
    static float GetWeight(int face1, int face2, UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static private System.Collections.Generic.List`1<System.Int32> GetMinimalPath(System.Int32[] predecessors, System.Int32 start, System.Int32 end)
    // Offset: 0x14CC330
    static System::Collections::Generic::List_1<int>* GetMinimalPath(::Array<int>* predecessors, int start, int end);
    // static private System.Void .cctor()
    // Offset: 0x14CCF54
    static void _cctor();
  }; // UnityEngine.ProBuilder.SelectPathFaces
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectPathFaces*, "UnityEngine.ProBuilder", "SelectPathFaces");
