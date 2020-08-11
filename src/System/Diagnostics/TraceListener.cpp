// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.TraceListener
#include "System/Diagnostics/TraceListener.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.TraceListener..ctor
System::Diagnostics::TraceListener* System::Diagnostics::TraceListener::New_ctor(::CsString* name) {
  return (TraceListener*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics", "TraceListener", name));
}
// Autogenerated method: System.Diagnostics.TraceListener.get_IsThreadSafe
bool System::Diagnostics::TraceListener::get_IsThreadSafe() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsThreadSafe"));
}
// Autogenerated method: System.Diagnostics.TraceListener.Dispose
void System::Diagnostics::TraceListener::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Diagnostics.TraceListener.Flush
void System::Diagnostics::TraceListener::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: System.Diagnostics.TraceListener.set_IndentLevel
void System::Diagnostics::TraceListener::set_IndentLevel(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IndentLevel", value));
}
// Autogenerated method: System.Diagnostics.TraceListener.set_IndentSize
void System::Diagnostics::TraceListener::set_IndentSize(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IndentSize", value));
}
// Autogenerated method: System.Diagnostics.TraceListener.get_NeedIndent
bool System::Diagnostics::TraceListener::get_NeedIndent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_NeedIndent"));
}
// Autogenerated method: System.Diagnostics.TraceListener.set_NeedIndent
void System::Diagnostics::TraceListener::set_NeedIndent(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_NeedIndent", value));
}
// Autogenerated method: System.Diagnostics.TraceListener.Fail
void System::Diagnostics::TraceListener::Fail(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Fail", message));
}
// Autogenerated method: System.Diagnostics.TraceListener.Fail
void System::Diagnostics::TraceListener::Fail(::CsString* message, ::CsString* detailMessage) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Fail", message, detailMessage));
}
// Autogenerated method: System.Diagnostics.TraceListener.Write
void System::Diagnostics::TraceListener::Write(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", message));
}
// Autogenerated method: System.Diagnostics.TraceListener.WriteIndent
void System::Diagnostics::TraceListener::WriteIndent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteIndent"));
}
// Autogenerated method: System.Diagnostics.TraceListener.WriteLine
void System::Diagnostics::TraceListener::WriteLine(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteLine", message));
}
// Autogenerated method: System.Diagnostics.TraceListener.Dispose
void System::Diagnostics::TraceListener::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Diagnostics::TraceListener::System_IDisposable_Dispose() {
  Dispose();
}
