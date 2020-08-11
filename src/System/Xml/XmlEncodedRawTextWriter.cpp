// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Including type: System.Xml.CharEntityEncoderFallback
#include "System/Xml/CharEntityEncoderFallback.hpp"
// Including type: System.Xml.XmlWriterSettings
#include "System/Xml/XmlWriterSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter..ctor
System::Xml::XmlEncodedRawTextWriter* System::Xml::XmlEncodedRawTextWriter::New_ctor(System::Xml::XmlWriterSettings* settings) {
  return (XmlEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlEncodedRawTextWriter", settings));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter..ctor
System::Xml::XmlEncodedRawTextWriter* System::Xml::XmlEncodedRawTextWriter::New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings) {
  return (XmlEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlEncodedRawTextWriter", writer, settings));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter..ctor
System::Xml::XmlEncodedRawTextWriter* System::Xml::XmlEncodedRawTextWriter::New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
  return (XmlEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlEncodedRawTextWriter", stream, settings));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.FlushBuffer
void System::Xml::XmlEncodedRawTextWriter::FlushBuffer() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FlushBuffer"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.EncodeChars
void System::Xml::XmlEncodedRawTextWriter::EncodeChars(int startOffset, int endOffset, bool writeAllToStream) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EncodeChars", startOffset, endOffset, writeAllToStream));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.FlushEncoder
void System::Xml::XmlEncodedRawTextWriter::FlushEncoder() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FlushEncoder"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteAttributeTextBlock
void System::Xml::XmlEncodedRawTextWriter::WriteAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteAttributeTextBlock", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteElementTextBlock
void System::Xml::XmlEncodedRawTextWriter::WriteElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteElementTextBlock", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.RawText
void System::Xml::XmlEncodedRawTextWriter::RawText(::CsString* s) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RawText", s));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.RawText
void System::Xml::XmlEncodedRawTextWriter::RawText(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RawText", pSrcBegin, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteRawWithCharChecking
void System::Xml::XmlEncodedRawTextWriter::WriteRawWithCharChecking(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRawWithCharChecking", pSrcBegin, pSrcEnd));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteCommentOrPi
void System::Xml::XmlEncodedRawTextWriter::WriteCommentOrPi(::CsString* text, int stopChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCommentOrPi", text, stopChar));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteCDataSection
void System::Xml::XmlEncodedRawTextWriter::WriteCDataSection(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCDataSection", text));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.EncodeSurrogate
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::EncodeSurrogate(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd, ::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "EncodeSurrogate", pSrc, pSrcEnd, pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.InvalidXmlChar
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::InvalidXmlChar(int ch, ::Il2CppChar* pDst, bool entitize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>(this, "InvalidXmlChar", ch, pDst, entitize));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.EncodeChar
void System::Xml::XmlEncodedRawTextWriter::EncodeChar(::Il2CppChar*& pSrc, ::Il2CppChar* pSrcEnd, ::Il2CppChar*& pDst) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EncodeChar", pSrc, pSrcEnd, pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.ChangeTextContentMark
void System::Xml::XmlEncodedRawTextWriter::ChangeTextContentMark(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeTextContentMark", value));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.GrowTextContentMarks
void System::Xml::XmlEncodedRawTextWriter::GrowTextContentMarks() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrowTextContentMarks"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteNewLine
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::WriteNewLine(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>(this, "WriteNewLine", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.LtEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::LtEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "LtEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.GtEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::GtEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "GtEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.AmpEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::AmpEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "AmpEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.QuoteEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::QuoteEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "QuoteEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.TabEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::TabEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "TabEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.LineFeedEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::LineFeedEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "LineFeedEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.CarriageReturnEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::CarriageReturnEntity(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "CarriageReturnEntity", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.CharEntity
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::CharEntity(::Il2CppChar* pDst, ::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "CharEntity", pDst, ch));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.RawStartCData
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::RawStartCData(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "RawStartCData", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.RawEndCData
::Il2CppChar* System::Xml::XmlEncodedRawTextWriter::RawEndCData(::Il2CppChar* pDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar*>("System.Xml", "XmlEncodedRawTextWriter", "RawEndCData", pDst));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.ValidateContentChars
void System::Xml::XmlEncodedRawTextWriter::ValidateContentChars(::CsString* chars, ::CsString* propertyName, bool allowOnlyWhitespace) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ValidateContentChars", chars, propertyName, allowOnlyWhitespace));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteXmlDeclaration
void System::Xml::XmlEncodedRawTextWriter::WriteXmlDeclaration(System::Xml::XmlStandalone standalone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", standalone));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteXmlDeclaration
void System::Xml::XmlEncodedRawTextWriter::WriteXmlDeclaration(::CsString* xmldecl) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", xmldecl));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteDocType
void System::Xml::XmlEncodedRawTextWriter::WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteDocType", name, pubid, sysid, subset));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteStartElement
void System::Xml::XmlEncodedRawTextWriter::WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.StartElementContent
void System::Xml::XmlEncodedRawTextWriter::StartElementContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartElementContent"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteEndElement
void System::Xml::XmlEncodedRawTextWriter::WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteFullEndElement
void System::Xml::XmlEncodedRawTextWriter::WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteFullEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteStartAttribute
void System::Xml::XmlEncodedRawTextWriter::WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartAttribute", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteEndAttribute
void System::Xml::XmlEncodedRawTextWriter::WriteEndAttribute() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndAttribute"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteNamespaceDeclaration
void System::Xml::XmlEncodedRawTextWriter::WriteNamespaceDeclaration(::CsString* prefix, ::CsString* namespaceName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteNamespaceDeclaration", prefix, namespaceName));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.get_SupportsNamespaceDeclarationInChunks
bool System::Xml::XmlEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsNamespaceDeclarationInChunks"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteStartNamespaceDeclaration
void System::Xml::XmlEncodedRawTextWriter::WriteStartNamespaceDeclaration(::CsString* prefix) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartNamespaceDeclaration", prefix));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteEndNamespaceDeclaration
void System::Xml::XmlEncodedRawTextWriter::WriteEndNamespaceDeclaration() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndNamespaceDeclaration"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteCData
void System::Xml::XmlEncodedRawTextWriter::WriteCData(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCData", text));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteComment
void System::Xml::XmlEncodedRawTextWriter::WriteComment(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteComment", text));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteProcessingInstruction
void System::Xml::XmlEncodedRawTextWriter::WriteProcessingInstruction(::CsString* name, ::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteProcessingInstruction", name, text));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteEntityRef
void System::Xml::XmlEncodedRawTextWriter::WriteEntityRef(::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEntityRef", name));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteCharEntity
void System::Xml::XmlEncodedRawTextWriter::WriteCharEntity(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCharEntity", ch));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteWhitespace
void System::Xml::XmlEncodedRawTextWriter::WriteWhitespace(::CsString* ws) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteWhitespace", ws));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteString
void System::Xml::XmlEncodedRawTextWriter::WriteString(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", text));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteSurrogateCharEntity
void System::Xml::XmlEncodedRawTextWriter::WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSurrogateCharEntity", lowChar, highChar));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteChars
void System::Xml::XmlEncodedRawTextWriter::WriteChars(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteChars", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteRaw
void System::Xml::XmlEncodedRawTextWriter::WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.WriteRaw
void System::Xml::XmlEncodedRawTextWriter::WriteRaw(::CsString* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", data));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.Close
void System::Xml::XmlEncodedRawTextWriter::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Xml.XmlEncodedRawTextWriter.Flush
void System::Xml::XmlEncodedRawTextWriter::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
