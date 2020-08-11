// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
// Including type: System.Xml.NewLineHandling
#include "System/Xml/NewLineHandling.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
// Including type: System.Xml.XmlOutputMethod
#include "System/Xml/XmlOutputMethod.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlUtf8RawTextWriter
  class XmlUtf8RawTextWriter : public System::Xml::XmlRawWriter {
    public:
    // private readonly System.Boolean useAsync
    // Offset: 0x20
    bool useAsync;
    // protected System.Byte[] bufBytes
    // Offset: 0x28
    ::Array<uint8_t>* bufBytes;
    // protected System.IO.Stream stream
    // Offset: 0x30
    System::IO::Stream* stream;
    // protected System.Text.Encoding encoding
    // Offset: 0x38
    System::Text::Encoding* encoding;
    // protected System.Xml.XmlCharType xmlCharType
    // Offset: 0x40
    System::Xml::XmlCharType xmlCharType;
    // protected System.Int32 bufPos
    // Offset: 0x48
    int bufPos;
    // protected System.Int32 textPos
    // Offset: 0x4C
    int textPos;
    // protected System.Int32 contentPos
    // Offset: 0x50
    int contentPos;
    // protected System.Int32 cdataPos
    // Offset: 0x54
    int cdataPos;
    // protected System.Int32 attrEndPos
    // Offset: 0x58
    int attrEndPos;
    // protected System.Int32 bufLen
    // Offset: 0x5C
    int bufLen;
    // protected System.Boolean writeToNull
    // Offset: 0x60
    bool writeToNull;
    // protected System.Boolean hadDoubleBracket
    // Offset: 0x61
    bool hadDoubleBracket;
    // protected System.Boolean inAttributeValue
    // Offset: 0x62
    bool inAttributeValue;
    // protected System.Xml.NewLineHandling newLineHandling
    // Offset: 0x64
    System::Xml::NewLineHandling newLineHandling;
    // protected System.Boolean closeOutput
    // Offset: 0x68
    bool closeOutput;
    // protected System.Boolean omitXmlDeclaration
    // Offset: 0x69
    bool omitXmlDeclaration;
    // protected System.String newLineChars
    // Offset: 0x70
    ::CsString* newLineChars;
    // protected System.Boolean checkCharacters
    // Offset: 0x78
    bool checkCharacters;
    // protected System.Xml.XmlStandalone standalone
    // Offset: 0x7C
    System::Xml::XmlStandalone standalone;
    // protected System.Xml.XmlOutputMethod outputMethod
    // Offset: 0x80
    System::Xml::XmlOutputMethod outputMethod;
    // protected System.Boolean autoXmlDeclaration
    // Offset: 0x84
    bool autoXmlDeclaration;
    // protected System.Boolean mergeCDataSections
    // Offset: 0x85
    bool mergeCDataSections;
    // protected System.Void .ctor(System.Xml.XmlWriterSettings settings)
    // Offset: 0x11931B8
    static XmlUtf8RawTextWriter* New_ctor(System::Xml::XmlWriterSettings* settings);
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x11860D4
    static XmlUtf8RawTextWriter* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // protected System.Void FlushBuffer()
    // Offset: 0x1188AE0
    void FlushBuffer();
    // private System.Void FlushEncoder()
    // Offset: 0x1194D4C
    void FlushEncoder();
    // protected System.Void WriteAttributeTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x1187800
    void WriteAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteElementTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x1187AF4
    void WriteElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void RawText(System.String s)
    // Offset: 0x11865EC
    void RawText(::CsString* s);
    // protected System.Void RawText(System.Char* pSrcBegin, System.Char* pSrcEnd)
    // Offset: 0x1187DB4
    void RawText(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteRawWithCharChecking(System.Char* pSrcBegin, System.Char* pSrcEnd)
    // Offset: 0x1194964
    void WriteRawWithCharChecking(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteCommentOrPi(System.String text, System.Int32 stopChar)
    // Offset: 0x118728C
    void WriteCommentOrPi(::CsString* text, int stopChar);
    // protected System.Void WriteCDataSection(System.String text)
    // Offset: 0x1193EB8
    void WriteCDataSection(::CsString* text);
    // static private System.Boolean IsSurrogateByte(System.Byte b)
    // Offset: 0x1194D9C
    static bool IsSurrogateByte(uint8_t b);
    // static private System.Byte* EncodeSurrogate(System.Char* pSrc, System.Char* pSrcEnd, System.Byte* pDst)
    // Offset: 0x1194DEC
    static uint8_t* EncodeSurrogate(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd, uint8_t* pDst);
    // private System.Byte* InvalidXmlChar(System.Int32 ch, System.Byte* pDst, System.Boolean entitize)
    // Offset: 0x1194F80
    uint8_t* InvalidXmlChar(int ch, uint8_t* pDst, bool entitize);
    // System.Void EncodeChar(System.Char* pSrc, System.Char* pSrcEnd, System.Byte* pDst)
    // Offset: 0x11885A8
    void EncodeChar(::Il2CppChar*& pSrc, ::Il2CppChar* pSrcEnd, uint8_t*& pDst);
    // static System.Byte* EncodeMultibyteUTF8(System.Int32 ch, System.Byte* pDst)
    // Offset: 0x1195090
    static uint8_t* EncodeMultibyteUTF8(int ch, uint8_t* pDst);
    // static System.Void CharToUTF8(System.Char* pSrc, System.Char* pSrcEnd, System.Byte* pDst)
    // Offset: 0x1185824
    static void CharToUTF8(::Il2CppChar*& pSrc, ::Il2CppChar* pSrcEnd, uint8_t*& pDst);
    // protected System.Byte* WriteNewLine(System.Byte* pDst)
    // Offset: 0x11950D0
    uint8_t* WriteNewLine(uint8_t* pDst);
    // static protected System.Byte* LtEntity(System.Byte* pDst)
    // Offset: 0x1194DAC
    static uint8_t* LtEntity(uint8_t* pDst);
    // static protected System.Byte* GtEntity(System.Byte* pDst)
    // Offset: 0x1194DBC
    static uint8_t* GtEntity(uint8_t* pDst);
    // static protected System.Byte* AmpEntity(System.Byte* pDst)
    // Offset: 0x1188528
    static uint8_t* AmpEntity(uint8_t* pDst);
    // static protected System.Byte* QuoteEntity(System.Byte* pDst)
    // Offset: 0x1188548
    static uint8_t* QuoteEntity(uint8_t* pDst);
    // static protected System.Byte* TabEntity(System.Byte* pDst)
    // Offset: 0x1194DCC
    static uint8_t* TabEntity(uint8_t* pDst);
    // static protected System.Byte* LineFeedEntity(System.Byte* pDst)
    // Offset: 0x1188588
    static uint8_t* LineFeedEntity(uint8_t* pDst);
    // static protected System.Byte* CarriageReturnEntity(System.Byte* pDst)
    // Offset: 0x1188568
    static uint8_t* CarriageReturnEntity(uint8_t* pDst);
    // static private System.Byte* CharEntity(System.Byte* pDst, System.Char ch)
    // Offset: 0x119516C
    static uint8_t* CharEntity(uint8_t* pDst, ::Il2CppChar ch);
    // static protected System.Byte* RawStartCData(System.Byte* pDst)
    // Offset: 0x1195144
    static uint8_t* RawStartCData(uint8_t* pDst);
    // static protected System.Byte* RawEndCData(System.Byte* pDst)
    // Offset: 0x1195128
    static uint8_t* RawEndCData(uint8_t* pDst);
    // protected System.Void ValidateContentChars(System.String chars, System.String propertyName, System.Boolean allowOnlyWhitespace)
    // Offset: 0x11932C4
    void ValidateContentChars(::CsString* chars, ::CsString* propertyName, bool allowOnlyWhitespace);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x1193648
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x1193768
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::CsString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x11937F4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1186744
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x11939D0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1186A24
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1186C78
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1186EF4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x1193A24
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String namespaceName)
    // Offset: 0x1193A7C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String namespaceName)
    void WriteNamespaceDeclaration(::CsString* prefix, ::CsString* namespaceName);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x1193AD4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Boolean XmlRawWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // override System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x1193ADC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteStartNamespaceDeclaration(System.String prefix)
    void WriteStartNamespaceDeclaration(::CsString* prefix);
    // override System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x1193BDC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndNamespaceDeclaration()
    void WriteEndNamespaceDeclaration();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x1193C34
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::CsString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x11941D8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::CsString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1194344
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::CsString* name, ::CsString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x1194478
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::CsString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x119452C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x1194704
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::CsString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x1194758
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::CsString* text);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x11947AC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1194918
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x118A8DC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x118A84C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::CsString* data);
    // public override System.Void Close()
    // Offset: 0x1194BB0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x1194D50
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
  }; // System.Xml.XmlUtf8RawTextWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUtf8RawTextWriter*, "System.Xml", "XmlUtf8RawTextWriter");
#pragma pack(pop)
