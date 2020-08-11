// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.TraceInternal
#include "System/Diagnostics/TraceInternal.hpp"
// Including type: System.Diagnostics.TraceListenerCollection
#include "System/Diagnostics/TraceListenerCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String appName
::CsString* System::Diagnostics::TraceInternal::_get_appName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Diagnostics", "TraceInternal", "appName"));
}
// Autogenerated static field setter
// Set static field: static private System.String appName
void System::Diagnostics::TraceInternal::_set_appName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "appName", value));
}
// Autogenerated static field getter
// Get static field: static private System.Diagnostics.TraceListenerCollection listeners
System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceInternal::_get_listeners() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Diagnostics::TraceListenerCollection*>("System.Diagnostics", "TraceInternal", "listeners"));
}
// Autogenerated static field setter
// Set static field: static private System.Diagnostics.TraceListenerCollection listeners
void System::Diagnostics::TraceInternal::_set_listeners(System::Diagnostics::TraceListenerCollection* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "listeners", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean autoFlush
bool System::Diagnostics::TraceInternal::_get_autoFlush() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.Diagnostics", "TraceInternal", "autoFlush"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean autoFlush
void System::Diagnostics::TraceInternal::_set_autoFlush(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "autoFlush", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean useGlobalLock
bool System::Diagnostics::TraceInternal::_get_useGlobalLock() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.Diagnostics", "TraceInternal", "useGlobalLock"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean useGlobalLock
void System::Diagnostics::TraceInternal::_set_useGlobalLock(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "useGlobalLock", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 indentLevel
int System::Diagnostics::TraceInternal::_get_indentLevel() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Diagnostics", "TraceInternal", "indentLevel"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 indentLevel
void System::Diagnostics::TraceInternal::_set_indentLevel(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "indentLevel", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 indentSize
int System::Diagnostics::TraceInternal::_get_indentSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Diagnostics", "TraceInternal", "indentSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 indentSize
void System::Diagnostics::TraceInternal::_set_indentSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "indentSize", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Object critSec
::CsObject* System::Diagnostics::TraceInternal::_get_critSec() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsObject*>("System.Diagnostics", "TraceInternal", "critSec"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Object critSec
void System::Diagnostics::TraceInternal::_set_critSec(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics", "TraceInternal", "critSec", value));
}
// Autogenerated method: System.Diagnostics.TraceInternal.get_Listeners
System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceInternal::get_Listeners() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::TraceListenerCollection*>("System.Diagnostics", "TraceInternal", "get_Listeners"));
}
// Autogenerated method: System.Diagnostics.TraceInternal.get_AutoFlush
bool System::Diagnostics::TraceInternal::get_AutoFlush() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics", "TraceInternal", "get_AutoFlush"));
}
// Autogenerated method: System.Diagnostics.TraceInternal.get_UseGlobalLock
bool System::Diagnostics::TraceInternal::get_UseGlobalLock() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics", "TraceInternal", "get_UseGlobalLock"));
}
// Autogenerated method: System.Diagnostics.TraceInternal.get_IndentLevel
int System::Diagnostics::TraceInternal::get_IndentLevel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Diagnostics", "TraceInternal", "get_IndentLevel"));
}
// Autogenerated method: System.Diagnostics.TraceInternal.get_IndentSize
int System::Diagnostics::TraceInternal::get_IndentSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Diagnostics", "TraceInternal", "get_IndentSize"));
}
// Autogenerated method: System.Diagnostics.TraceInternal.Assert
void System::Diagnostics::TraceInternal::Assert_(bool condition) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics", "TraceInternal", "Assert", condition));
}
// Autogenerated method: System.Diagnostics.TraceInternal.Fail
void System::Diagnostics::TraceInternal::Fail(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics", "TraceInternal", "Fail", message));
}
// Autogenerated method: System.Diagnostics.TraceInternal.InitializeSettings
void System::Diagnostics::TraceInternal::InitializeSettings() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics", "TraceInternal", "InitializeSettings"));
}
// Autogenerated method: System.Diagnostics.TraceInternal..cctor
void System::Diagnostics::TraceInternal::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics", "TraceInternal", ".cctor"));
}
