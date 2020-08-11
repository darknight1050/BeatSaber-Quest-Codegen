// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Submesh
#include "UnityEngine/ProBuilder/Submesh.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Mesh
#include "UnityEngine/Mesh.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
// Including type: UnityEngine.ProBuilder.Face
#include "UnityEngine/ProBuilder/Face.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Submesh.get_indexes
System::Collections::Generic::IEnumerable_1<int>* UnityEngine::ProBuilder::Submesh::get_indexes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<int>*>(this, "get_indexes"));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.set_indexes
void UnityEngine::ProBuilder::Submesh::set_indexes(System::Collections::Generic::IEnumerable_1<int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_indexes", value));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.get_topology
UnityEngine::MeshTopology UnityEngine::ProBuilder::Submesh::get_topology() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::MeshTopology>(this, "get_topology"));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.set_topology
void UnityEngine::ProBuilder::Submesh::set_topology(UnityEngine::MeshTopology value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_topology", value));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.get_submeshIndex
int UnityEngine::ProBuilder::Submesh::get_submeshIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_submeshIndex"));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.set_submeshIndex
void UnityEngine::ProBuilder::Submesh::set_submeshIndex(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_submeshIndex", value));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh..ctor
UnityEngine::ProBuilder::Submesh* UnityEngine::ProBuilder::Submesh::New_ctor(int submeshIndex, UnityEngine::MeshTopology topology, System::Collections::Generic::IEnumerable_1<int>* indexes) {
  return (Submesh*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Submesh", submeshIndex, topology, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh..ctor
UnityEngine::ProBuilder::Submesh* UnityEngine::ProBuilder::Submesh::New_ctor(UnityEngine::Mesh* mesh, int subMeshIndex) {
  return (Submesh*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Submesh", mesh, subMeshIndex));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.GetSubmeshCount
int UnityEngine::ProBuilder::Submesh::GetSubmeshCount(UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine.ProBuilder", "Submesh", "GetSubmeshCount", mesh));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.GetSubmeshes
::Array<UnityEngine::ProBuilder::Submesh*>* UnityEngine::ProBuilder::Submesh::GetSubmeshes(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, int submeshCount, UnityEngine::MeshTopology preferredTopology) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::ProBuilder::Submesh*>*>("UnityEngine.ProBuilder", "Submesh", "GetSubmeshes", faces, submeshCount, preferredTopology));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.MapFaceMaterialsToSubmeshIndex
void UnityEngine::ProBuilder::Submesh::MapFaceMaterialsToSubmeshIndex(UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder", "Submesh", "MapFaceMaterialsToSubmeshIndex", mesh));
}
// Autogenerated method: UnityEngine.ProBuilder.Submesh.ToString
::CsString* UnityEngine::ProBuilder::Submesh::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
