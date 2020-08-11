// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
// Including type: System.Xml.Xsl.Runtime.StringConcat
#include "System/Xml/Xsl/Runtime/StringConcat.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Skipping declaration: XmlWriter because it is already included!
  // Forward declaring type: XmlStandalone
  struct XmlStandalone;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlEventCache
  class XmlEventCache : public System::Xml::XmlRawWriter {
    public:
    // Nested type: System::Xml::XmlEventCache::XmlEventType
    struct XmlEventType;
    // Nested type: System::Xml::XmlEventCache::XmlEvent
    struct XmlEvent;
    // private System.Collections.Generic.List`1<System.Xml.XmlEventCache/XmlEvent[]> pages
    // Offset: 0x20
    System::Collections::Generic::List_1<::Array<System::Xml::XmlEventCache::XmlEvent>*>* pages;
    // private System.Xml.XmlEventCache/XmlEvent[] pageCurr
    // Offset: 0x28
    ::Array<System::Xml::XmlEventCache::XmlEvent>* pageCurr;
    // private System.Int32 pageSize
    // Offset: 0x30
    int pageSize;
    // private System.Boolean hasRootNode
    // Offset: 0x34
    bool hasRootNode;
    // private System.Xml.Xsl.Runtime.StringConcat singleText
    // Offset: 0x38
    System::Xml::Xsl::Runtime::StringConcat singleText;
    // private System.String baseUri
    // Offset: 0x70
    ::CsString* baseUri;
    // public System.Void .ctor(System.String baseUri, System.Boolean hasRootNode)
    // Offset: 0x118B580
    static XmlEventCache* New_ctor(::CsString* baseUri, bool hasRootNode);
    // public System.Void EndEvents()
    // Offset: 0x118C1BC
    void EndEvents();
    // public System.Void EventsToWriter(System.Xml.XmlWriter writer)
    // Offset: 0x118C1D0
    void EventsToWriter(System::Xml::XmlWriter* writer);
    // private System.Void AddEvent(System.Xml.XmlEventCache/XmlEventType eventType)
    // Offset: 0x1190A6C
    void AddEvent(System::Xml::XmlEventCache::XmlEventType eventType);
    // private System.Void AddEvent(System.Xml.XmlEventCache/XmlEventType eventType, System.String s1)
    // Offset: 0x1190C1C
    void AddEvent(System::Xml::XmlEventCache::XmlEventType eventType, ::CsString* s1);
    // private System.Void AddEvent(System.Xml.XmlEventCache/XmlEventType eventType, System.String s1, System.String s2)
    // Offset: 0x1190CA0
    void AddEvent(System::Xml::XmlEventCache::XmlEventType eventType, ::CsString* s1, ::CsString* s2);
    // private System.Void AddEvent(System.Xml.XmlEventCache/XmlEventType eventType, System.String s1, System.String s2, System.String s3)
    // Offset: 0x1190B74
    void AddEvent(System::Xml::XmlEventCache::XmlEventType eventType, ::CsString* s1, ::CsString* s2, ::CsString* s3);
    // private System.Void AddEvent(System.Xml.XmlEventCache/XmlEventType eventType, System.String s1, System.String s2, System.String s3, System.Object o)
    // Offset: 0x1190AD8
    void AddEvent(System::Xml::XmlEventCache::XmlEventType eventType, ::CsString* s1, ::CsString* s2, ::CsString* s3, ::CsObject* o);
    // private System.Void AddEvent(System.Xml.XmlEventCache/XmlEventType eventType, System.Object o)
    // Offset: 0x1190E54
    void AddEvent(System::Xml::XmlEventCache::XmlEventType eventType, ::CsObject* o);
    // private System.Int32 NewEvent()
    // Offset: 0x11911EC
    int NewEvent();
    // static private System.Byte[] ToBytes(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1190F90
    static ::Array<uint8_t>* ToBytes(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x1190AC0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1190B60
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1190BF4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x1190C08
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x1190C10
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::CsString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x1190C84
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::CsString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1190C90
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::CsString* name, ::CsString* text);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x1190D20
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::CsString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x1190D2C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::CsString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1190D50
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1190D8C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x1190DC8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::CsString* data);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x1190DD4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::CsString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x1190DE0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x1190EBC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1190F58
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Void WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x119104C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBinHex(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Void Close()
    // Offset: 0x1191084
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x119108C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x1191094
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteValue(System.String value)
    void WriteValue(::CsString* value);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x11910A4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x1191124
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x1191198
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::CsString* xmldecl);
    // override System.Void StartElementContent()
    // Offset: 0x11911A4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11911AC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11911C0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns);
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x11911D4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::CsString* prefix, ::CsString* ns);
    // override System.Void WriteEndBase64()
    // Offset: 0x11911E4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndBase64()
    void WriteEndBase64();
  }; // System.Xml.XmlEventCache
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEventCache*, "System.Xml", "XmlEventCache");
#pragma pack(pop)
