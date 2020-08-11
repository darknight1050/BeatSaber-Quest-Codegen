// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ConsoleDriver
#include "System/ConsoleDriver.hpp"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.ConsoleKeyInfo
#include "System/ConsoleKeyInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.IConsoleDriver driver
System::IConsoleDriver* System::ConsoleDriver::_get_driver() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::IConsoleDriver*>("System", "ConsoleDriver", "driver"));
}
// Autogenerated static field setter
// Set static field: static System.IConsoleDriver driver
void System::ConsoleDriver::_set_driver(System::IConsoleDriver* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "ConsoleDriver", "driver", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean is_console
bool System::ConsoleDriver::_get_is_console() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "ConsoleDriver", "is_console"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean is_console
void System::ConsoleDriver::_set_is_console(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "ConsoleDriver", "is_console", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean called_isatty
bool System::ConsoleDriver::_get_called_isatty() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "ConsoleDriver", "called_isatty"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean called_isatty
void System::ConsoleDriver::_set_called_isatty(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "ConsoleDriver", "called_isatty", value));
}
// Autogenerated method: System.ConsoleDriver..cctor
void System::ConsoleDriver::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "ConsoleDriver", ".cctor"));
}
// Autogenerated method: System.ConsoleDriver.CreateNullConsoleDriver
System::IConsoleDriver* System::ConsoleDriver::CreateNullConsoleDriver() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IConsoleDriver*>("System", "ConsoleDriver", "CreateNullConsoleDriver"));
}
// Autogenerated method: System.ConsoleDriver.CreateWindowsConsoleDriver
System::IConsoleDriver* System::ConsoleDriver::CreateWindowsConsoleDriver() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IConsoleDriver*>("System", "ConsoleDriver", "CreateWindowsConsoleDriver"));
}
// Autogenerated method: System.ConsoleDriver.CreateTermInfoDriver
System::IConsoleDriver* System::ConsoleDriver::CreateTermInfoDriver(::CsString* term) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IConsoleDriver*>("System", "ConsoleDriver", "CreateTermInfoDriver", term));
}
// Autogenerated method: System.ConsoleDriver.ReadKey
System::ConsoleKeyInfo System::ConsoleDriver::ReadKey(bool intercept) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::ConsoleKeyInfo>("System", "ConsoleDriver", "ReadKey", intercept));
}
// Autogenerated method: System.ConsoleDriver.get_IsConsole
bool System::ConsoleDriver::get_IsConsole() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "ConsoleDriver", "get_IsConsole"));
}
// Autogenerated method: System.ConsoleDriver.Isatty
bool System::ConsoleDriver::Isatty(System::IntPtr handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "ConsoleDriver", "Isatty", handle));
}
// Autogenerated method: System.ConsoleDriver.InternalKeyAvailable
int System::ConsoleDriver::InternalKeyAvailable(int ms_timeout) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "ConsoleDriver", "InternalKeyAvailable", ms_timeout));
}
// Autogenerated method: System.ConsoleDriver.TtySetup
bool System::ConsoleDriver::TtySetup(::CsString* keypadXmit, ::CsString* teardown, ::Array<uint8_t>*& control_characters, int*& address) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "ConsoleDriver", "TtySetup", keypadXmit, teardown, control_characters, address));
}
// Autogenerated method: System.ConsoleDriver.SetEcho
bool System::ConsoleDriver::SetEcho(bool wantEcho) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "ConsoleDriver", "SetEcho", wantEcho));
}
