// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONArray
#include "OVRSimpleJSON/JSONArray.hpp"
// Including type: OVRSimpleJSON.JSONArray/<get_Children>d__22
#include "OVRSimpleJSON/JSONArray_-get_Children-d__22.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: OVRSimpleJSON.JSONNodeType
#include "OVRSimpleJSON/JSONNodeType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: OVRSimpleJSON.JSONTextMode
#include "OVRSimpleJSON/JSONTextMode.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRSimpleJSON.JSONArray.get_Inline
bool OVRSimpleJSON::JSONArray::get_Inline() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Inline"));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.set_Inline
void OVRSimpleJSON::JSONArray::set_Inline(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Inline", value));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.get_Tag
OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONArray::get_Tag() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNodeType>(this, "get_Tag"));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.get_IsArray
bool OVRSimpleJSON::JSONArray::get_IsArray() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsArray"));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.GetEnumerator
OVRSimpleJSON::JSONNode::Enumerator OVRSimpleJSON::JSONArray::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNode::Enumerator>(this, "GetEnumerator"));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.get_Item
OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONArray::get_Item(int aIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNode*>(this, "get_Item", aIndex));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.set_Item
void OVRSimpleJSON::JSONArray::set_Item(int aIndex, OVRSimpleJSON::JSONNode* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", aIndex, value));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.get_Item
OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONArray::get_Item(::CsString* aKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNode*>(this, "get_Item", aKey));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.set_Item
void OVRSimpleJSON::JSONArray::set_Item(::CsString* aKey, OVRSimpleJSON::JSONNode* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", aKey, value));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.get_Count
int OVRSimpleJSON::JSONArray::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.Add
void OVRSimpleJSON::JSONArray::Add(::CsString* aKey, OVRSimpleJSON::JSONNode* aItem) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", aKey, aItem));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.Remove
OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONArray::Remove(int aIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNode*>(this, "Remove", aIndex));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.Remove
OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONArray::Remove(OVRSimpleJSON::JSONNode* aNode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNode*>(this, "Remove", aNode));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.get_Children
System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONArray::get_Children() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>*>(this, "get_Children"));
}
// Autogenerated method: OVRSimpleJSON.JSONArray.WriteToStringBuilder
void OVRSimpleJSON::JSONArray::WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteToStringBuilder", aSB, aIndent, aIndentInc, aMode));
}
// Autogenerated method: OVRSimpleJSON.JSONArray..ctor
OVRSimpleJSON::JSONArray* OVRSimpleJSON::JSONArray::New_ctor() {
  return (JSONArray*)THROW_UNLESS(il2cpp_utils::New("OVRSimpleJSON", "JSONArray"));
}
