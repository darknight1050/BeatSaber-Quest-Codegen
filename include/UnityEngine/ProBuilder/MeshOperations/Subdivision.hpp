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
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Subdivision
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Subdivision : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Subdivision
    Subdivision() noexcept {}
    // static public UnityEngine.ProBuilder.ActionResult Subdivide(UnityEngine.ProBuilder.ProBuilderMesh pb)
    // Offset: 0x1572F18
    static UnityEngine::ProBuilder::ActionResult* Subdivide(UnityEngine::ProBuilder::ProBuilderMesh* pb);
    // static public UnityEngine.ProBuilder.Face[] Subdivide(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1572FC4
    static ::Array<UnityEngine::ProBuilder::Face*>* Subdivide(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces);
  }; // UnityEngine.ProBuilder.MeshOperations.Subdivision
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Subdivision*, "UnityEngine.ProBuilder.MeshOperations", "Subdivision");
