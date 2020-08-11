// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StringWriter
#include "System/IO/StringWriter.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.Text.UnicodeEncoding
#include "System/Text/UnicodeEncoding.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Text.UnicodeEncoding m_encoding
System::Text::UnicodeEncoding* System::IO::StringWriter::_get_m_encoding() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Text::UnicodeEncoding*>("System.IO", "StringWriter", "m_encoding"));
}
// Autogenerated static field setter
// Set static field: static private System.Text.UnicodeEncoding m_encoding
void System::IO::StringWriter::_set_m_encoding(System::Text::UnicodeEncoding* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "StringWriter", "m_encoding", value));
}
// Autogenerated method: System.IO.StringWriter..ctor
System::IO::StringWriter* System::IO::StringWriter::New_ctor(System::Text::StringBuilder* sb) {
  return (StringWriter*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StringWriter", sb));
}
// Autogenerated method: System.IO.StringWriter..ctor
System::IO::StringWriter* System::IO::StringWriter::New_ctor(System::Text::StringBuilder* sb, System::IFormatProvider* formatProvider) {
  return (StringWriter*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StringWriter", sb, formatProvider));
}
// Autogenerated method: System.IO.StringWriter..ctor
System::IO::StringWriter* System::IO::StringWriter::New_ctor() {
  return (StringWriter*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StringWriter"));
}
// Autogenerated method: System.IO.StringWriter..ctor
System::IO::StringWriter* System::IO::StringWriter::New_ctor(System::IFormatProvider* formatProvider) {
  return (StringWriter*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StringWriter", formatProvider));
}
// Autogenerated method: System.IO.StringWriter.Close
void System::IO::StringWriter::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.IO.StringWriter.Dispose
void System::IO::StringWriter::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.IO.StringWriter.get_Encoding
System::Text::Encoding* System::IO::StringWriter::get_Encoding() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Encoding*>(this, "get_Encoding"));
}
// Autogenerated method: System.IO.StringWriter.Write
void System::IO::StringWriter::Write(::Il2CppChar value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", value));
}
// Autogenerated method: System.IO.StringWriter.Write
void System::IO::StringWriter::Write(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", buffer, index, count));
}
// Autogenerated method: System.IO.StringWriter.Write
void System::IO::StringWriter::Write(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", value));
}
// Autogenerated method: System.IO.StringWriter.ToString
::CsString* System::IO::StringWriter::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
