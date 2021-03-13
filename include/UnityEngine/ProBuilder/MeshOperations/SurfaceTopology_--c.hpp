// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
#include "UnityEngine/ProBuilder/MeshOperations/SurfaceTopology.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
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
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D41910
  class SurfaceTopology::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__0_0
    static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__0_0
    static void _set_$$9__0_0(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__3_0
    static System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* value);
    // static private System.Void .cctor()
    // Offset: 0x1574918
    static void _cctor();
    // UnityEngine.ProBuilder.Face <ToTriangles>b__0_0(UnityEngine.ProBuilder.FaceRebuildData x)
    // Offset: 0x1574984
    UnityEngine::ProBuilder::Face* $ToTriangles$b__0_0(UnityEngine::ProBuilder::FaceRebuildData* x);
    // UnityEngine.Vector3 <GetWindingOrder>b__3_0(UnityEngine.ProBuilder.Vertex x)
    // Offset: 0x157499C
    UnityEngine::Vector3 $GetWindingOrder$b__3_0(UnityEngine::ProBuilder::Vertex* x);
    // public System.Void .ctor()
    // Offset: 0x157497C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SurfaceTopology::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SurfaceTopology::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c*, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology/<>c");
