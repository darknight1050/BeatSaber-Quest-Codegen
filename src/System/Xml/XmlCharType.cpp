// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Object s_Lock
::CsObject* System::Xml::XmlCharType::_get_s_Lock() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsObject*>("System.Xml", "XmlCharType", "s_Lock"));
}
// Autogenerated static field setter
// Set static field: static private System.Object s_Lock
void System::Xml::XmlCharType::_set_s_Lock(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlCharType", "s_Lock", value));
}
// Autogenerated static field getter
// Get static field: static private System.Byte[] s_CharProperties
::Array<uint8_t>* System::Xml::XmlCharType::_get_s_CharProperties() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Xml", "XmlCharType", "s_CharProperties"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] s_CharProperties
void System::Xml::XmlCharType::_set_s_CharProperties(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlCharType", "s_CharProperties", value));
}
// Autogenerated method: System.Xml.XmlCharType.get_StaticLock
::CsObject* System::Xml::XmlCharType::get_StaticLock() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>("System.Xml", "XmlCharType", "get_StaticLock"));
}
// Autogenerated method: System.Xml.XmlCharType.InitInstance
void System::Xml::XmlCharType::InitInstance() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Xml", "XmlCharType", "InitInstance"));
}
// Autogenerated method: System.Xml.XmlCharType.SetProperties
void System::Xml::XmlCharType::SetProperties(::CsString* ranges, uint8_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Xml", "XmlCharType", "SetProperties", ranges, value));
}
// Autogenerated method: System.Xml.XmlCharType..ctor
System::Xml::XmlCharType* System::Xml::XmlCharType::New_ctor(::Array<uint8_t>* charProperties) {
  return (XmlCharType*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlCharType", charProperties));
}
// Autogenerated method: System.Xml.XmlCharType.get_Instance
System::Xml::XmlCharType System::Xml::XmlCharType::get_Instance() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Xml::XmlCharType>("System.Xml", "XmlCharType", "get_Instance"));
}
// Autogenerated method: System.Xml.XmlCharType.IsWhiteSpace
bool System::Xml::XmlCharType::IsWhiteSpace(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsWhiteSpace", ch));
}
// Autogenerated method: System.Xml.XmlCharType.IsCharData
bool System::Xml::XmlCharType::IsCharData(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsCharData", ch));
}
// Autogenerated method: System.Xml.XmlCharType.IsPubidChar
bool System::Xml::XmlCharType::IsPubidChar(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsPubidChar", ch));
}
// Autogenerated method: System.Xml.XmlCharType.IsTextChar
bool System::Xml::XmlCharType::IsTextChar(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsTextChar", ch));
}
// Autogenerated method: System.Xml.XmlCharType.IsHighSurrogate
bool System::Xml::XmlCharType::IsHighSurrogate(int ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Xml", "XmlCharType", "IsHighSurrogate", ch));
}
// Autogenerated method: System.Xml.XmlCharType.IsLowSurrogate
bool System::Xml::XmlCharType::IsLowSurrogate(int ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Xml", "XmlCharType", "IsLowSurrogate", ch));
}
// Autogenerated method: System.Xml.XmlCharType.IsSurrogate
bool System::Xml::XmlCharType::IsSurrogate(int ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Xml", "XmlCharType", "IsSurrogate", ch));
}
// Autogenerated method: System.Xml.XmlCharType.CombineSurrogateChar
int System::Xml::XmlCharType::CombineSurrogateChar(int lowChar, int highChar) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Xml", "XmlCharType", "CombineSurrogateChar", lowChar, highChar));
}
// Autogenerated method: System.Xml.XmlCharType.IsOnlyWhitespace
bool System::Xml::XmlCharType::IsOnlyWhitespace(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsOnlyWhitespace", str));
}
// Autogenerated method: System.Xml.XmlCharType.IsOnlyWhitespaceWithPos
int System::Xml::XmlCharType::IsOnlyWhitespaceWithPos(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "IsOnlyWhitespaceWithPos", str));
}
// Autogenerated method: System.Xml.XmlCharType.IsOnlyCharData
int System::Xml::XmlCharType::IsOnlyCharData(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "IsOnlyCharData", str));
}
// Autogenerated method: System.Xml.XmlCharType.IsPublicId
int System::Xml::XmlCharType::IsPublicId(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "IsPublicId", str));
}
// Autogenerated method: System.Xml.XmlCharType.InRange
bool System::Xml::XmlCharType::InRange(int value, int start, int end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Xml", "XmlCharType", "InRange", value, start, end));
}
