// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Skipping declaration: XmlStandalone because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xB6
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.TextEncodedRawTextWriter
  class TextEncodedRawTextWriter : public System::Xml::XmlEncodedRawTextWriter {
    public:
    // Creating value type constructor for type: TextEncodedRawTextWriter
    TextEncodedRawTextWriter() noexcept {}
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x191A6D0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextEncodedRawTextWriter* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::TextEncodedRawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextEncodedRawTextWriter*, creationType>(writer, settings)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x191A6D4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextEncodedRawTextWriter* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::TextEncodedRawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextEncodedRawTextWriter*, creationType>(stream, settings)));
    }
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x191A6D8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x191A6DC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x191A6E0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x191A6E4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x191A6E8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x191A6EC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x191A6F0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x191A6F4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x191A700
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x191A708
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* ns);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x191A70C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Boolean XmlEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x191A714
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x191A780
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x191A784
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x191A788
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x191A78C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x191A790
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x191A794
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String textBlock)
    // Offset: 0x191A7A4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteString(System.String textBlock)
    void WriteString(::Il2CppString* textBlock);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x191A7B4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x191A84C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x191A85C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
  }; // System.Xml.TextEncodedRawTextWriter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::TextEncodedRawTextWriter*, "System.Xml", "TextEncodedRawTextWriter");
