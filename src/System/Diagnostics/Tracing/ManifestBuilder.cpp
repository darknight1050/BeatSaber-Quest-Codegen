// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ManifestBuilder
#include "System/Diagnostics/Tracing/ManifestBuilder.hpp"
// Including type: System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_0
#include "System/Diagnostics/Tracing/ManifestBuilder_--c__DisplayClass22_0.hpp"
// Including type: System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_1
#include "System/Diagnostics/Tracing/ManifestBuilder_--c__DisplayClass22_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Diagnostics.Tracing.EventAttribute
#include "System/Diagnostics/Tracing/EventAttribute.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Diagnostics.Tracing.EventLevel
#include "System/Diagnostics/Tracing/EventLevel.hpp"
// Including type: System.Diagnostics.Tracing.EventTask
#include "System/Diagnostics/Tracing/EventTask.hpp"
// Including type: System.Diagnostics.Tracing.EventOpcode
#include "System/Diagnostics/Tracing/EventOpcode.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder..ctor
System::Diagnostics::Tracing::ManifestBuilder* System::Diagnostics::Tracing::ManifestBuilder::New_ctor(::CsString* providerName, System::Guid providerGuid, ::CsString* dllName, System::Resources::ResourceManager* resources, System::Diagnostics::Tracing::EventManifestOptions flags) {
  return (ManifestBuilder*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "ManifestBuilder", providerName, providerGuid, dllName, resources, flags));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.AddOpcode
void System::Diagnostics::Tracing::ManifestBuilder::AddOpcode(::CsString* name, int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOpcode", name, value));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.AddTask
void System::Diagnostics::Tracing::ManifestBuilder::AddTask(::CsString* name, int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddTask", name, value));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.AddKeyword
void System::Diagnostics::Tracing::ManifestBuilder::AddKeyword(::CsString* name, uint64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddKeyword", name, value));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.StartEvent
void System::Diagnostics::Tracing::ManifestBuilder::StartEvent(::CsString* eventName, System::Diagnostics::Tracing::EventAttribute* eventAttribute) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartEvent", eventName, eventAttribute));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.AddEventParameter
void System::Diagnostics::Tracing::ManifestBuilder::AddEventParameter(System::Type* type, ::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddEventParameter", type, name));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.EndEvent
void System::Diagnostics::Tracing::ManifestBuilder::EndEvent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndEvent"));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.CreateManifest
::Array<uint8_t>* System::Diagnostics::Tracing::ManifestBuilder::CreateManifest() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "CreateManifest"));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.get_Errors
System::Collections::Generic::IList_1<::CsString*>* System::Diagnostics::Tracing::ManifestBuilder::get_Errors() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<::CsString*>*>(this, "get_Errors"));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.ManifestError
void System::Diagnostics::Tracing::ManifestBuilder::ManifestError(::CsString* msg, bool runtimeCritical) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ManifestError", msg, runtimeCritical));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.CreateManifestString
::CsString* System::Diagnostics::Tracing::ManifestBuilder::CreateManifestString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "CreateManifestString"));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.WriteNameAndMessageAttribs
void System::Diagnostics::Tracing::ManifestBuilder::WriteNameAndMessageAttribs(System::Text::StringBuilder* stringBuilder, ::CsString* elementName, ::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteNameAndMessageAttribs", stringBuilder, elementName, name));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.WriteMessageAttrib
void System::Diagnostics::Tracing::ManifestBuilder::WriteMessageAttrib(System::Text::StringBuilder* stringBuilder, ::CsString* elementName, ::CsString* name, ::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMessageAttrib", stringBuilder, elementName, name, value));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetLocalizedMessage
::CsString* System::Diagnostics::Tracing::ManifestBuilder::GetLocalizedMessage(::CsString* key, System::Globalization::CultureInfo* ci, bool etwFormat) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetLocalizedMessage", key, ci, etwFormat));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetSupportedCultures
System::Collections::Generic::List_1<System::Globalization::CultureInfo*>* System::Diagnostics::Tracing::ManifestBuilder::GetSupportedCultures(System::Resources::ResourceManager* resources) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<System::Globalization::CultureInfo*>*>("System.Diagnostics.Tracing", "ManifestBuilder", "GetSupportedCultures", resources));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetLevelName
::CsString* System::Diagnostics::Tracing::ManifestBuilder::GetLevelName(System::Diagnostics::Tracing::EventLevel level) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Diagnostics.Tracing", "ManifestBuilder", "GetLevelName", level));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetTaskName
::CsString* System::Diagnostics::Tracing::ManifestBuilder::GetTaskName(System::Diagnostics::Tracing::EventTask task, ::CsString* eventName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetTaskName", task, eventName));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetOpcodeName
::CsString* System::Diagnostics::Tracing::ManifestBuilder::GetOpcodeName(System::Diagnostics::Tracing::EventOpcode opcode, ::CsString* eventName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetOpcodeName", opcode, eventName));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetKeywords
::CsString* System::Diagnostics::Tracing::ManifestBuilder::GetKeywords(uint64_t keywords, ::CsString* eventName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetKeywords", keywords, eventName));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.GetTypeName
::CsString* System::Diagnostics::Tracing::ManifestBuilder::GetTypeName(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetTypeName", type));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.UpdateStringBuilder
void System::Diagnostics::Tracing::ManifestBuilder::UpdateStringBuilder(System::Text::StringBuilder*& stringBuilder, ::CsString* eventMessage, int startIndex, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ManifestBuilder", "UpdateStringBuilder", stringBuilder, eventMessage, startIndex, count));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.TranslateToManifestConvention
::CsString* System::Diagnostics::Tracing::ManifestBuilder::TranslateToManifestConvention(::CsString* eventMessage, ::CsString* evtName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "TranslateToManifestConvention", eventMessage, evtName));
}
// Autogenerated method: System.Diagnostics.Tracing.ManifestBuilder.TranslateIndexToManifestConvention
int System::Diagnostics::Tracing::ManifestBuilder::TranslateIndexToManifestConvention(int idx, ::CsString* evtName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "TranslateIndexToManifestConvention", idx, evtName));
}
