// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
#include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c__DisplayClass2_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE311C
  class DeleteElements::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(UnityEngine::ProBuilder::ProBuilderMesh* mesh_ = {}) noexcept : mesh{mesh_} {}
    // Creating conversion operator: operator UnityEngine::ProBuilder::ProBuilderMesh*
    constexpr operator UnityEngine::ProBuilder::ProBuilderMesh*() const noexcept {
      return mesh;
    }
    // System.Int32 <DeleteFaces>b__0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1253BBC
    int $DeleteFaces$b__0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x125326C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeleteElements::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeleteElements::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c__DisplayClass2_0
  static check_size<sizeof(DeleteElements::$$c__DisplayClass2_0), 16 + sizeof(UnityEngine::ProBuilder::ProBuilderMesh*)> __UnityEngine_ProBuilder_MeshOperations_DeleteElements_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(DeleteElements::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass2_0*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c__DisplayClass2_0");
#pragma pack(pop)
