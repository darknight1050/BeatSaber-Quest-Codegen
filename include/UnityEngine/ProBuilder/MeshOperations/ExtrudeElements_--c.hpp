// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
#include "UnityEngine/ProBuilder/MeshOperations/ExtrudeElements.hpp"
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c
  class ExtrudeElements::$$c : public ::CsObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__3_0
    static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__4_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__4_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__4_0
    static void _set_$$9__4_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xF01FDC
    static void _cctor();
    // UnityEngine.ProBuilder.Face <DetachFaces>b__3_0(UnityEngine.ProBuilder.FaceRebuildData x)
    // Offset: 0xF0204C
    UnityEngine::ProBuilder::Face* $DetachFaces$b__3_0(UnityEngine::ProBuilder::FaceRebuildData* x);
    // System.Int32 <ExtrudePerFace>b__4_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0xF02064
    int $ExtrudePerFace$b__4_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0xF02044
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ExtrudeElements::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements/<>c");
#pragma pack(pop)
