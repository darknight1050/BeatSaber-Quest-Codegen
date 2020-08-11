// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlAutoDetectWriter
#include "System/Xml/XmlAutoDetectWriter.hpp"
// Including type: System.Xml.OnRemoveWriter
#include "System/Xml/OnRemoveWriter.hpp"
// Including type: System.Xml.XmlWriterSettings
#include "System/Xml/XmlWriterSettings.hpp"
// Including type: System.Xml.XmlEventCache
#include "System/Xml/XmlEventCache.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Xml.XmlOutputMethod
#include "System/Xml/XmlOutputMethod.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Xml.XmlAutoDetectWriter..ctor
System::Xml::XmlAutoDetectWriter* System::Xml::XmlAutoDetectWriter::New_ctor(System::Xml::XmlWriterSettings* writerSettings) {
  return (XmlAutoDetectWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlAutoDetectWriter", writerSettings));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter..ctor
System::Xml::XmlAutoDetectWriter* System::Xml::XmlAutoDetectWriter::New_ctor(System::IO::TextWriter* textWriter, System::Xml::XmlWriterSettings* writerSettings) {
  return (XmlAutoDetectWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlAutoDetectWriter", textWriter, writerSettings));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter..ctor
System::Xml::XmlAutoDetectWriter* System::Xml::XmlAutoDetectWriter::New_ctor(System::IO::Stream* strm, System::Xml::XmlWriterSettings* writerSettings) {
  return (XmlAutoDetectWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlAutoDetectWriter", strm, writerSettings));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.IsHtmlTag
bool System::Xml::XmlAutoDetectWriter::IsHtmlTag(::CsString* tagName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Xml", "XmlAutoDetectWriter", "IsHtmlTag", tagName));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.EnsureWrappedWriter
void System::Xml::XmlAutoDetectWriter::EnsureWrappedWriter(System::Xml::XmlOutputMethod outMethod) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureWrappedWriter", outMethod));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.TextBlockCreatesWriter
bool System::Xml::XmlAutoDetectWriter::TextBlockCreatesWriter(::CsString* textBlock) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TextBlockCreatesWriter", textBlock));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.CreateWrappedWriter
void System::Xml::XmlAutoDetectWriter::CreateWrappedWriter(System::Xml::XmlOutputMethod outMethod) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CreateWrappedWriter", outMethod));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteDocType
void System::Xml::XmlAutoDetectWriter::WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteDocType", name, pubid, sysid, subset));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteStartElement
void System::Xml::XmlAutoDetectWriter::WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteStartAttribute
void System::Xml::XmlAutoDetectWriter::WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartAttribute", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteEndAttribute
void System::Xml::XmlAutoDetectWriter::WriteEndAttribute() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndAttribute"));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteCData
void System::Xml::XmlAutoDetectWriter::WriteCData(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCData", text));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteComment
void System::Xml::XmlAutoDetectWriter::WriteComment(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteComment", text));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteProcessingInstruction
void System::Xml::XmlAutoDetectWriter::WriteProcessingInstruction(::CsString* name, ::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteProcessingInstruction", name, text));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteWhitespace
void System::Xml::XmlAutoDetectWriter::WriteWhitespace(::CsString* ws) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteWhitespace", ws));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteString
void System::Xml::XmlAutoDetectWriter::WriteString(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", text));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteChars
void System::Xml::XmlAutoDetectWriter::WriteChars(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteChars", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteRaw
void System::Xml::XmlAutoDetectWriter::WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteRaw
void System::Xml::XmlAutoDetectWriter::WriteRaw(::CsString* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", data));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteEntityRef
void System::Xml::XmlAutoDetectWriter::WriteEntityRef(::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEntityRef", name));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteCharEntity
void System::Xml::XmlAutoDetectWriter::WriteCharEntity(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCharEntity", ch));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteSurrogateCharEntity
void System::Xml::XmlAutoDetectWriter::WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSurrogateCharEntity", lowChar, highChar));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteBase64
void System::Xml::XmlAutoDetectWriter::WriteBase64(::Array<uint8_t>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteBase64", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteBinHex
void System::Xml::XmlAutoDetectWriter::WriteBinHex(::Array<uint8_t>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteBinHex", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.Close
void System::Xml::XmlAutoDetectWriter::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.Flush
void System::Xml::XmlAutoDetectWriter::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteValue
void System::Xml::XmlAutoDetectWriter::WriteValue(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteValue", value));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.set_NamespaceResolver
void System::Xml::XmlAutoDetectWriter::set_NamespaceResolver(System::Xml::IXmlNamespaceResolver* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_NamespaceResolver", value));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteXmlDeclaration
void System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration(System::Xml::XmlStandalone standalone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", standalone));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteXmlDeclaration
void System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration(::CsString* xmldecl) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", xmldecl));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.StartElementContent
void System::Xml::XmlAutoDetectWriter::StartElementContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartElementContent"));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteEndElement
void System::Xml::XmlAutoDetectWriter::WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteFullEndElement
void System::Xml::XmlAutoDetectWriter::WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteFullEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteNamespaceDeclaration
void System::Xml::XmlAutoDetectWriter::WriteNamespaceDeclaration(::CsString* prefix, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteNamespaceDeclaration", prefix, ns));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.get_SupportsNamespaceDeclarationInChunks
bool System::Xml::XmlAutoDetectWriter::get_SupportsNamespaceDeclarationInChunks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsNamespaceDeclarationInChunks"));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteStartNamespaceDeclaration
void System::Xml::XmlAutoDetectWriter::WriteStartNamespaceDeclaration(::CsString* prefix) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartNamespaceDeclaration", prefix));
}
// Autogenerated method: System.Xml.XmlAutoDetectWriter.WriteEndNamespaceDeclaration
void System::Xml::XmlAutoDetectWriter::WriteEndNamespaceDeclaration() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndNamespaceDeclaration"));
}
