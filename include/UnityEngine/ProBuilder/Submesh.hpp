// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Submesh
  class Submesh : public ::Il2CppObject {
    public:
    // System.Int32[] m_Indexes
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* m_Indexes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // UnityEngine.MeshTopology m_Topology
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::MeshTopology m_Topology;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshTopology) == 0x4);
    // System.Int32 m_SubmeshIndex
    // Size: 0x4
    // Offset: 0x1C
    int m_SubmeshIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Submesh
    Submesh(::Array<int>* m_Indexes_ = {}, UnityEngine::MeshTopology m_Topology_ = {}, int m_SubmeshIndex_ = {}) noexcept : m_Indexes{m_Indexes_}, m_Topology{m_Topology_}, m_SubmeshIndex{m_SubmeshIndex_} {}
    // public System.Collections.Generic.IEnumerable`1<System.Int32> get_indexes()
    // Offset: 0x22A33C8
    System::Collections::Generic::IEnumerable_1<int>* get_indexes();
    // public System.Void set_indexes(System.Collections.Generic.IEnumerable`1<System.Int32> value)
    // Offset: 0x22A3438
    void set_indexes(System::Collections::Generic::IEnumerable_1<int>* value);
    // public UnityEngine.MeshTopology get_topology()
    // Offset: 0x22A349C
    UnityEngine::MeshTopology get_topology();
    // public System.Void set_topology(UnityEngine.MeshTopology value)
    // Offset: 0x22A34A4
    void set_topology(UnityEngine::MeshTopology value);
    // public System.Int32 get_submeshIndex()
    // Offset: 0x22A34AC
    int get_submeshIndex();
    // public System.Void set_submeshIndex(System.Int32 value)
    // Offset: 0x22A34B4
    void set_submeshIndex(int value);
    // public System.Void .ctor(System.Int32 submeshIndex, UnityEngine.MeshTopology topology, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x22A34BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Submesh* New_ctor(int submeshIndex, UnityEngine::MeshTopology topology, System::Collections::Generic::IEnumerable_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Submesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Submesh*, creationType>(submeshIndex, topology, indexes)));
    }
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 subMeshIndex)
    // Offset: 0x22A3580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Submesh* New_ctor(UnityEngine::Mesh* mesh, int subMeshIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Submesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Submesh*, creationType>(mesh, subMeshIndex)));
    }
    // static System.Int32 GetSubmeshCount(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x22A3780
    static int GetSubmeshCount(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public UnityEngine.ProBuilder.Submesh[] GetSubmeshes(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Int32 submeshCount, UnityEngine.MeshTopology preferredTopology)
    // Offset: 0x22A3804
    static ::Array<UnityEngine::ProBuilder::Submesh*>* GetSubmeshes(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, int submeshCount, UnityEngine::MeshTopology preferredTopology);
    // static System.Void MapFaceMaterialsToSubmeshIndex(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x22A410C
    static void MapFaceMaterialsToSubmeshIndex(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // public override System.String ToString()
    // Offset: 0x22A367C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Submesh
  #pragma pack(pop)
  static check_size<sizeof(Submesh), 28 + sizeof(int)> __UnityEngine_ProBuilder_SubmeshSizeCheck;
  static_assert(sizeof(Submesh) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Submesh*, "UnityEngine.ProBuilder", "Submesh");
