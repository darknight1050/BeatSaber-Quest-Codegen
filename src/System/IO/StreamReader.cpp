// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
// Including type: System.IO.StreamReader/NullStreamReader
#include "System/IO/StreamReader_NullStreamReader.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.IO.StreamReader Null
System::IO::StreamReader* System::IO::StreamReader::_get_Null() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::IO::StreamReader*>("System.IO", "StreamReader", "Null"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.IO.StreamReader Null
void System::IO::StreamReader::_set_Null(System::IO::StreamReader* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "StreamReader", "Null", value));
}
// Autogenerated method: System.IO.StreamReader.get_DefaultBufferSize
int System::IO::StreamReader::get_DefaultBufferSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.IO", "StreamReader", "get_DefaultBufferSize"));
}
// Autogenerated method: System.IO.StreamReader.CheckAsyncTaskInProgress
void System::IO::StreamReader::CheckAsyncTaskInProgress() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckAsyncTaskInProgress"));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(System::IO::Stream* stream) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", stream));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", stream, detectEncodingFromByteOrderMarks));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", stream, encoding));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(::CsString* path) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", path));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(::CsString* path, bool detectEncodingFromByteOrderMarks) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", path, detectEncodingFromByteOrderMarks));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(::CsString* path, System::Text::Encoding* encoding) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", path, encoding));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(::CsString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", path, encoding, detectEncodingFromByteOrderMarks, bufferSize));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor(::CsString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost) {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader", path, encoding, detectEncodingFromByteOrderMarks, bufferSize, checkHost));
}
// Autogenerated method: System.IO.StreamReader.Init
void System::IO::StreamReader::Init(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen));
}
// Autogenerated method: System.IO.StreamReader.Init
void System::IO::StreamReader::Init(System::IO::Stream* stream) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", stream));
}
// Autogenerated method: System.IO.StreamReader.get_LeaveOpen
bool System::IO::StreamReader::get_LeaveOpen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_LeaveOpen"));
}
// Autogenerated method: System.IO.StreamReader.get_EndOfStream
bool System::IO::StreamReader::get_EndOfStream() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_EndOfStream"));
}
// Autogenerated method: System.IO.StreamReader.DataAvailable
bool System::IO::StreamReader::DataAvailable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DataAvailable"));
}
// Autogenerated method: System.IO.StreamReader.CompressBuffer
void System::IO::StreamReader::CompressBuffer(int n) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CompressBuffer", n));
}
// Autogenerated method: System.IO.StreamReader.DetectEncoding
void System::IO::StreamReader::DetectEncoding() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DetectEncoding"));
}
// Autogenerated method: System.IO.StreamReader.IsPreamble
bool System::IO::StreamReader::IsPreamble() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsPreamble"));
}
// Autogenerated method: System.IO.StreamReader.ReadBuffer
int System::IO::StreamReader::ReadBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ReadBuffer"));
}
// Autogenerated method: System.IO.StreamReader.ReadBuffer
int System::IO::StreamReader::ReadBuffer(::Array<::Il2CppChar>* userBuffer, int userOffset, int desiredChars, bool& readToUserBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ReadBuffer", userBuffer, userOffset, desiredChars, readToUserBuffer));
}
// Autogenerated method: System.IO.StreamReader..ctor
System::IO::StreamReader* System::IO::StreamReader::New_ctor() {
  return (StreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "StreamReader"));
}
// Autogenerated method: System.IO.StreamReader.Close
void System::IO::StreamReader::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.IO.StreamReader.Dispose
void System::IO::StreamReader::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.IO.StreamReader.Peek
int System::IO::StreamReader::Peek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Peek"));
}
// Autogenerated method: System.IO.StreamReader.Read
int System::IO::StreamReader::Read() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read"));
}
// Autogenerated method: System.IO.StreamReader.Read
int System::IO::StreamReader::Read(::Array<::Il2CppChar>*& buffer, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, index, count));
}
// Autogenerated method: System.IO.StreamReader.ReadToEnd
::CsString* System::IO::StreamReader::ReadToEnd() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadToEnd"));
}
// Autogenerated method: System.IO.StreamReader.ReadLine
::CsString* System::IO::StreamReader::ReadLine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadLine"));
}
// Autogenerated method: System.IO.StreamReader..cctor
void System::IO::StreamReader::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "StreamReader", ".cctor"));
}
