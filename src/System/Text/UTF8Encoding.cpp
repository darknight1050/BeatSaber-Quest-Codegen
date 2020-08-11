// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF8Encoding
#include "System/Text/UTF8Encoding.hpp"
// Including type: System.Text.UTF8Encoding/UTF8Encoder
#include "System/Text/UTF8Encoding_UTF8Encoder.hpp"
// Including type: System.Text.UTF8Encoding/UTF8Decoder
#include "System/Text/UTF8Encoding_UTF8Decoder.hpp"
// Including type: System.Text.DecoderFallbackBuffer
#include "System/Text/DecoderFallbackBuffer.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.UTF8Encoding..ctor
System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor(bool encoderShouldEmitUTF8Identifier) {
  return (UTF8Encoding*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF8Encoding", encoderShouldEmitUTF8Identifier));
}
// Autogenerated method: System.Text.UTF8Encoding..ctor
System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
  return (UTF8Encoding*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF8Encoding", encoderShouldEmitUTF8Identifier, throwOnInvalidBytes));
}
// Autogenerated method: System.Text.UTF8Encoding.PtrDiff
int System::Text::UTF8Encoding::PtrDiff(::Il2CppChar* a, ::Il2CppChar* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Text", "UTF8Encoding", "PtrDiff", a, b));
}
// Autogenerated method: System.Text.UTF8Encoding.PtrDiff
int System::Text::UTF8Encoding::PtrDiff(uint8_t* a, uint8_t* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Text", "UTF8Encoding", "PtrDiff", a, b));
}
// Autogenerated method: System.Text.UTF8Encoding.InRange
bool System::Text::UTF8Encoding::InRange(int ch, int start, int end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Text", "UTF8Encoding", "InRange", ch, start, end));
}
// Autogenerated method: System.Text.UTF8Encoding.FallbackInvalidByteSequence
bool System::Text::UTF8Encoding::FallbackInvalidByteSequence(uint8_t*& pSrc, int ch, System::Text::DecoderFallbackBuffer* fallback, ::Il2CppChar*& pTarget) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "FallbackInvalidByteSequence", pSrc, ch, fallback, pTarget));
}
// Autogenerated method: System.Text.UTF8Encoding.FallbackInvalidByteSequence
int System::Text::UTF8Encoding::FallbackInvalidByteSequence(uint8_t* pSrc, int ch, System::Text::DecoderFallbackBuffer* fallback) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FallbackInvalidByteSequence", pSrc, ch, fallback));
}
// Autogenerated method: System.Text.UTF8Encoding.GetBytesUnknown
::Array<uint8_t>* System::Text::UTF8Encoding::GetBytesUnknown(uint8_t*& pSrc, int ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetBytesUnknown", pSrc, ch));
}
// Autogenerated method: System.Text.UTF8Encoding..ctor
System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor() {
  return (UTF8Encoding*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF8Encoding"));
}
// Autogenerated method: System.Text.UTF8Encoding.SetDefaultFallbacks
void System::Text::UTF8Encoding::SetDefaultFallbacks() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultFallbacks"));
}
// Autogenerated method: System.Text.UTF8Encoding.GetByteCount
int System::Text::UTF8Encoding::GetByteCount(::Array<::Il2CppChar>* chars, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, index, count));
}
// Autogenerated method: System.Text.UTF8Encoding.GetByteCount
int System::Text::UTF8Encoding::GetByteCount(::CsString* chars) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars));
}
// Autogenerated method: System.Text.UTF8Encoding.GetByteCount
int System::Text::UTF8Encoding::GetByteCount(::Il2CppChar* chars, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count));
}
// Autogenerated method: System.Text.UTF8Encoding.GetBytes
int System::Text::UTF8Encoding::GetBytes(::CsString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", s, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.UTF8Encoding.GetBytes
int System::Text::UTF8Encoding::GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.UTF8Encoding.GetBytes
int System::Text::UTF8Encoding::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount));
}
// Autogenerated method: System.Text.UTF8Encoding.GetCharCount
int System::Text::UTF8Encoding::GetCharCount(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, index, count));
}
// Autogenerated method: System.Text.UTF8Encoding.GetCharCount
int System::Text::UTF8Encoding::GetCharCount(uint8_t* bytes, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count));
}
// Autogenerated method: System.Text.UTF8Encoding.GetChars
int System::Text::UTF8Encoding::GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteIndex, byteCount, chars, charIndex));
}
// Autogenerated method: System.Text.UTF8Encoding.GetChars
int System::Text::UTF8Encoding::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount));
}
// Autogenerated method: System.Text.UTF8Encoding.GetString
::CsString* System::Text::UTF8Encoding::GetString(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetString", bytes, index, count));
}
// Autogenerated method: System.Text.UTF8Encoding.GetByteCount
int System::Text::UTF8Encoding::GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* baseEncoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count, baseEncoder));
}
// Autogenerated method: System.Text.UTF8Encoding.GetBytes
int System::Text::UTF8Encoding::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* baseEncoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount, baseEncoder));
}
// Autogenerated method: System.Text.UTF8Encoding.GetCharCount
int System::Text::UTF8Encoding::GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count, baseDecoder));
}
// Autogenerated method: System.Text.UTF8Encoding.GetChars
int System::Text::UTF8Encoding::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount, baseDecoder));
}
// Autogenerated method: System.Text.UTF8Encoding.GetDecoder
System::Text::Decoder* System::Text::UTF8Encoding::GetDecoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Decoder*>(this, "GetDecoder"));
}
// Autogenerated method: System.Text.UTF8Encoding.GetEncoder
System::Text::Encoder* System::Text::UTF8Encoding::GetEncoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Encoder*>(this, "GetEncoder"));
}
// Autogenerated method: System.Text.UTF8Encoding.GetMaxByteCount
int System::Text::UTF8Encoding::GetMaxByteCount(int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMaxByteCount", charCount));
}
// Autogenerated method: System.Text.UTF8Encoding.GetMaxCharCount
int System::Text::UTF8Encoding::GetMaxCharCount(int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMaxCharCount", byteCount));
}
// Autogenerated method: System.Text.UTF8Encoding.GetPreamble
::Array<uint8_t>* System::Text::UTF8Encoding::GetPreamble() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetPreamble"));
}
// Autogenerated method: System.Text.UTF8Encoding.Equals
bool System::Text::UTF8Encoding::Equals(::CsObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", value));
}
// Autogenerated method: System.Text.UTF8Encoding.GetHashCode
int System::Text::UTF8Encoding::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
