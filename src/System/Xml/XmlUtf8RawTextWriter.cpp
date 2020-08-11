// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlUtf8RawTextWriter
#include "System/Xml/XmlUtf8RawTextWriter.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Xml.XmlWriterSettings
#include "System/Xml/XmlWriterSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter..ctor
System::Xml::XmlUtf8RawTextWriter* System::Xml::XmlUtf8RawTextWriter::New_ctor(System::Xml::XmlWriterSettings* settings) {
  return (XmlUtf8RawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlUtf8RawTextWriter", settings));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter..ctor
System::Xml::XmlUtf8RawTextWriter* System::Xml::XmlUtf8RawTextWriter::New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
  return (XmlUtf8RawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlUtf8RawTextWriter", stream, settings));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.FlushBuffer
void System::Xml::XmlUtf8RawTextWriter::FlushBuffer() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FlushBuffer"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.FlushEncoder
void System::Xml::XmlUtf8RawTextWriter::FlushEncoder() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FlushEncoder"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteAttributeTextBlock
void System::Xml::XmlUtf8RawTextWriter::WriteAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteAttributeTextBlock", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteElementTextBlock
void System::Xml::XmlUtf8RawTextWriter::WriteElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteElementTextBlock", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.RawText
void System::Xml::XmlUtf8RawTextWriter::RawText(::CsString* s) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RawText", s));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.RawText
void System::Xml::XmlUtf8RawTextWriter::RawText(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RawText", pSrcBegin, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteRawWithCharChecking
void System::Xml::XmlUtf8RawTextWriter::WriteRawWithCharChecking(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRawWithCharChecking", pSrcBegin, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteCommentOrPi
void System::Xml::XmlUtf8RawTextWriter::WriteCommentOrPi(::CsString* text, int stopChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCommentOrPi", text, stopChar));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteCDataSection
void System::Xml::XmlUtf8RawTextWriter::WriteCDataSection(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCDataSection", text));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.IsSurrogateByte
bool System::Xml::XmlUtf8RawTextWriter::IsSurrogateByte(uint8_t b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Xml", "XmlUtf8RawTextWriter", "IsSurrogateByte", b));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.EncodeSurrogate
uint8_t* System::Xml::XmlUtf8RawTextWriter::EncodeSurrogate(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd, uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "EncodeSurrogate", pSrc, pSrcEnd, pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.InvalidXmlChar
uint8_t* System::Xml::XmlUtf8RawTextWriter::InvalidXmlChar(int ch, uint8_t* pDst, bool entitize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>(this, "InvalidXmlChar", ch, pDst, entitize));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.EncodeChar
void System::Xml::XmlUtf8RawTextWriter::EncodeChar(::Il2CppChar*& pSrc, ::Il2CppChar* pSrcEnd, uint8_t*& pDst) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EncodeChar", pSrc, pSrcEnd, pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.EncodeMultibyteUTF8
uint8_t* System::Xml::XmlUtf8RawTextWriter::EncodeMultibyteUTF8(int ch, uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "EncodeMultibyteUTF8", ch, pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.CharToUTF8
void System::Xml::XmlUtf8RawTextWriter::CharToUTF8(::Il2CppChar*& pSrc, ::Il2CppChar* pSrcEnd, uint8_t*& pDst) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Xml", "XmlUtf8RawTextWriter", "CharToUTF8", pSrc, pSrcEnd, pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteNewLine
uint8_t* System::Xml::XmlUtf8RawTextWriter::WriteNewLine(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>(this, "WriteNewLine", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.LtEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::LtEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "LtEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.GtEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::GtEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "GtEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.AmpEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::AmpEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "AmpEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.QuoteEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::QuoteEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "QuoteEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.TabEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::TabEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "TabEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.LineFeedEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::LineFeedEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "LineFeedEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.CarriageReturnEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::CarriageReturnEntity(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "CarriageReturnEntity", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.CharEntity
uint8_t* System::Xml::XmlUtf8RawTextWriter::CharEntity(uint8_t* pDst, ::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "CharEntity", pDst, ch));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.RawStartCData
uint8_t* System::Xml::XmlUtf8RawTextWriter::RawStartCData(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "RawStartCData", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.RawEndCData
uint8_t* System::Xml::XmlUtf8RawTextWriter::RawEndCData(uint8_t* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t*>("System.Xml", "XmlUtf8RawTextWriter", "RawEndCData", pDst));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.ValidateContentChars
void System::Xml::XmlUtf8RawTextWriter::ValidateContentChars(::CsString* chars, ::CsString* propertyName, bool allowOnlyWhitespace) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ValidateContentChars", chars, propertyName, allowOnlyWhitespace));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteXmlDeclaration
void System::Xml::XmlUtf8RawTextWriter::WriteXmlDeclaration(System::Xml::XmlStandalone standalone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", standalone));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteXmlDeclaration
void System::Xml::XmlUtf8RawTextWriter::WriteXmlDeclaration(::CsString* xmldecl) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", xmldecl));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteDocType
void System::Xml::XmlUtf8RawTextWriter::WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteDocType", name, pubid, sysid, subset));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteStartElement
void System::Xml::XmlUtf8RawTextWriter::WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.StartElementContent
void System::Xml::XmlUtf8RawTextWriter::StartElementContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartElementContent"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteEndElement
void System::Xml::XmlUtf8RawTextWriter::WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteFullEndElement
void System::Xml::XmlUtf8RawTextWriter::WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteFullEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteStartAttribute
void System::Xml::XmlUtf8RawTextWriter::WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartAttribute", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteEndAttribute
void System::Xml::XmlUtf8RawTextWriter::WriteEndAttribute() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndAttribute"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteNamespaceDeclaration
void System::Xml::XmlUtf8RawTextWriter::WriteNamespaceDeclaration(::CsString* prefix, ::CsString* namespaceName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteNamespaceDeclaration", prefix, namespaceName));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.get_SupportsNamespaceDeclarationInChunks
bool System::Xml::XmlUtf8RawTextWriter::get_SupportsNamespaceDeclarationInChunks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsNamespaceDeclarationInChunks"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteStartNamespaceDeclaration
void System::Xml::XmlUtf8RawTextWriter::WriteStartNamespaceDeclaration(::CsString* prefix) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartNamespaceDeclaration", prefix));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteEndNamespaceDeclaration
void System::Xml::XmlUtf8RawTextWriter::WriteEndNamespaceDeclaration() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndNamespaceDeclaration"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteCData
void System::Xml::XmlUtf8RawTextWriter::WriteCData(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCData", text));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteComment
void System::Xml::XmlUtf8RawTextWriter::WriteComment(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteComment", text));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteProcessingInstruction
void System::Xml::XmlUtf8RawTextWriter::WriteProcessingInstruction(::CsString* name, ::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteProcessingInstruction", name, text));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteEntityRef
void System::Xml::XmlUtf8RawTextWriter::WriteEntityRef(::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEntityRef", name));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteCharEntity
void System::Xml::XmlUtf8RawTextWriter::WriteCharEntity(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCharEntity", ch));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteWhitespace
void System::Xml::XmlUtf8RawTextWriter::WriteWhitespace(::CsString* ws) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteWhitespace", ws));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteString
void System::Xml::XmlUtf8RawTextWriter::WriteString(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", text));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteSurrogateCharEntity
void System::Xml::XmlUtf8RawTextWriter::WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSurrogateCharEntity", lowChar, highChar));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteChars
void System::Xml::XmlUtf8RawTextWriter::WriteChars(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteChars", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteRaw
void System::Xml::XmlUtf8RawTextWriter::WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.WriteRaw
void System::Xml::XmlUtf8RawTextWriter::WriteRaw(::CsString* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", data));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.Close
void System::Xml::XmlUtf8RawTextWriter::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Xml.XmlUtf8RawTextWriter.Flush
void System::Xml::XmlUtf8RawTextWriter::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
