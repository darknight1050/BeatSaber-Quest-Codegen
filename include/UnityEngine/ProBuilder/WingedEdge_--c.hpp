// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge/<>c
  class WingedEdge::$$c : public ::CsObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.WingedEdge/<>c <>9
    static UnityEngine::ProBuilder::WingedEdge::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.WingedEdge/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::WingedEdge::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__32_1
    static System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* _get_$$9__32_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__32_1
    static void _set_$$9__32_1(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Edge,System.Int32> <>9__32_2
    static System::Func_2<UnityEngine::ProBuilder::Edge, int>* _get_$$9__32_2();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Edge,System.Int32> <>9__32_2
    static void _set_$$9__32_2(System::Func_2<UnityEngine::ProBuilder::Edge, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x18C209C
    static void _cctor();
    // UnityEngine.ProBuilder.Edge <SortCommonIndexesByAdjacency>b__32_1(UnityEngine.ProBuilder.WingedEdge y)
    // Offset: 0x18C210C
    UnityEngine::ProBuilder::Edge $SortCommonIndexesByAdjacency$b__32_1(UnityEngine::ProBuilder::WingedEdge* y);
    // System.Int32 <SortCommonIndexesByAdjacency>b__32_2(UnityEngine.ProBuilder.Edge x)
    // Offset: 0x18C2124
    int $SortCommonIndexesByAdjacency$b__32_2(UnityEngine::ProBuilder::Edge x);
    // public System.Void .ctor()
    // Offset: 0x18C2104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WingedEdge::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.WingedEdge/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge::$$c*, "UnityEngine.ProBuilder", "WingedEdge/<>c");
#pragma pack(pop)
