// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup/<>c__DisplayClass16_0
#include "UnityEngine/ProBuilder/EdgeLookup_--c__DisplayClass16_0.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.get_local
UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeLookup::get_local() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Edge>(*this, "get_local"));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.set_local
void UnityEngine::ProBuilder::EdgeLookup::set_local(UnityEngine::ProBuilder::Edge value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_local", value));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.get_common
UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeLookup::get_common() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Edge>(*this, "get_common"));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.set_common
void UnityEngine::ProBuilder::EdgeLookup::set_common(UnityEngine::ProBuilder::Edge value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_common", value));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup..ctor
UnityEngine::ProBuilder::EdgeLookup* UnityEngine::ProBuilder::EdgeLookup::New_ctor(UnityEngine::ProBuilder::Edge common, UnityEngine::ProBuilder::Edge local) {
  return (EdgeLookup*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "EdgeLookup", common, local));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup..ctor
UnityEngine::ProBuilder::EdgeLookup* UnityEngine::ProBuilder::EdgeLookup::New_ctor(int cx, int cy, int x, int y) {
  return (EdgeLookup*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "EdgeLookup", cx, cy, x, y));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.GetEdgeLookup
System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::EdgeLookup>* UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookup(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::Dictionary_2<int, int>* lookup) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::EdgeLookup>*>("UnityEngine.ProBuilder", "EdgeLookup", "GetEdgeLookup", edges, lookup));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.GetEdgeLookupHashSet
System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>* UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookupHashSet(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::Dictionary_2<int, int>* lookup) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>*>("UnityEngine.ProBuilder", "EdgeLookup", "GetEdgeLookupHashSet", edges, lookup));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.Equals
bool UnityEngine::ProBuilder::EdgeLookup::Equals(UnityEngine::ProBuilder::EdgeLookup other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.Equals
bool UnityEngine::ProBuilder::EdgeLookup::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.GetHashCode
int UnityEngine::ProBuilder::EdgeLookup::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.ToString
::CsString* UnityEngine::ProBuilder::EdgeLookup::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString"));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.op_Equality
bool UnityEngine::ProBuilder::operator ==(const UnityEngine::ProBuilder::EdgeLookup& a, const UnityEngine::ProBuilder::EdgeLookup& b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "EdgeLookup", "op_Equality", a, b));
}
// Autogenerated method: UnityEngine.ProBuilder.EdgeLookup.op_Inequality
bool UnityEngine::ProBuilder::operator !=(const UnityEngine::ProBuilder::EdgeLookup& a, const UnityEngine::ProBuilder::EdgeLookup& b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "EdgeLookup", "op_Inequality", a, b));
}
