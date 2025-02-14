// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Xml
namespace Mono::Xml {
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextReader
  class TextReader;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParser
  class SmallXmlParser : public ::Il2CppObject {
    public:
    // Nested type: Mono::Xml::SmallXmlParser::IContentHandler
    class IContentHandler;
    // Nested type: Mono::Xml::SmallXmlParser::IAttrList
    class IAttrList;
    // Nested type: Mono::Xml::SmallXmlParser::AttrListImpl
    class AttrListImpl;
    // private Mono.Xml.SmallXmlParser/IContentHandler handler
    // Size: 0x8
    // Offset: 0x10
    Mono::Xml::SmallXmlParser::IContentHandler* handler;
    // Field size check
    static_assert(sizeof(Mono::Xml::SmallXmlParser::IContentHandler*) == 0x8);
    // private System.IO.TextReader reader
    // Size: 0x8
    // Offset: 0x18
    System::IO::TextReader* reader;
    // Field size check
    static_assert(sizeof(System::IO::TextReader*) == 0x8);
    // private System.Collections.Stack elementNames
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Stack* elementNames;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // private System.Collections.Stack xmlSpaces
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Stack* xmlSpaces;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // private System.String xmlSpace
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* xmlSpace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Text.StringBuilder buffer
    // Size: 0x8
    // Offset: 0x38
    System::Text::StringBuilder* buffer;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Char[] nameBuffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppChar>* nameBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Boolean isWhitespace
    // Size: 0x1
    // Offset: 0x48
    bool isWhitespace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isWhitespace and: attributes
    char __padding7[0x7] = {};
    // private Mono.Xml.SmallXmlParser/AttrListImpl attributes
    // Size: 0x8
    // Offset: 0x50
    Mono::Xml::SmallXmlParser::AttrListImpl* attributes;
    // Field size check
    static_assert(sizeof(Mono::Xml::SmallXmlParser::AttrListImpl*) == 0x8);
    // private System.Int32 line
    // Size: 0x4
    // Offset: 0x58
    int line;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 column
    // Size: 0x4
    // Offset: 0x5C
    int column;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean resetColumn
    // Size: 0x1
    // Offset: 0x60
    bool resetColumn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SmallXmlParser
    SmallXmlParser(Mono::Xml::SmallXmlParser::IContentHandler* handler_ = {}, System::IO::TextReader* reader_ = {}, System::Collections::Stack* elementNames_ = {}, System::Collections::Stack* xmlSpaces_ = {}, ::Il2CppString* xmlSpace_ = {}, System::Text::StringBuilder* buffer_ = {}, ::Array<::Il2CppChar>* nameBuffer_ = {}, bool isWhitespace_ = {}, Mono::Xml::SmallXmlParser::AttrListImpl* attributes_ = {}, int line_ = {}, int column_ = {}, bool resetColumn_ = {}) noexcept : handler{handler_}, reader{reader_}, elementNames{elementNames_}, xmlSpaces{xmlSpaces_}, xmlSpace{xmlSpace_}, buffer{buffer_}, nameBuffer{nameBuffer_}, isWhitespace{isWhitespace_}, attributes{attributes_}, line{line_}, column{column_}, resetColumn{resetColumn_} {}
    // private System.Exception Error(System.String msg)
    // Offset: 0x1A62D18
    System::Exception* Error(::Il2CppString* msg);
    // private System.Exception UnexpectedEndError()
    // Offset: 0x1A62E58
    System::Exception* UnexpectedEndError();
    // private System.Boolean IsNameChar(System.Char c, System.Boolean start)
    // Offset: 0x1A62F28
    bool IsNameChar(::Il2CppChar c, bool start);
    // private System.Boolean IsWhitespace(System.Int32 c)
    // Offset: 0x1A6303C
    bool IsWhitespace(int c);
    // public System.Void SkipWhitespaces()
    // Offset: 0x1A6306C
    void SkipWhitespaces();
    // private System.Void HandleWhitespaces()
    // Offset: 0x1A63138
    void HandleWhitespaces();
    // public System.Void SkipWhitespaces(System.Boolean expected)
    // Offset: 0x1A63074
    void SkipWhitespaces(bool expected);
    // private System.Int32 Peek()
    // Offset: 0x1A63270
    int Peek();
    // private System.Int32 Read()
    // Offset: 0x1A631FC
    int Read();
    // public System.Void Expect(System.Int32 c)
    // Offset: 0x1A63290
    void Expect(int c);
    // private System.String ReadUntil(System.Char until, System.Boolean handleReferences)
    // Offset: 0x1A63374
    ::Il2CppString* ReadUntil(::Il2CppChar until, bool handleReferences);
    // public System.String ReadName()
    // Offset: 0x1A63600
    ::Il2CppString* ReadName();
    // public System.Void Parse(System.IO.TextReader input, Mono.Xml.SmallXmlParser/IContentHandler handler)
    // Offset: 0x1A626E8
    void Parse(System::IO::TextReader* input, Mono::Xml::SmallXmlParser::IContentHandler* handler);
    // private System.Void Cleanup()
    // Offset: 0x1A63FC4
    void Cleanup();
    // public System.Void ReadContent()
    // Offset: 0x1A637A4
    void ReadContent();
    // private System.Void HandleBufferedContent()
    // Offset: 0x1A63E74
    void HandleBufferedContent();
    // private System.Void ReadCharacters()
    // Offset: 0x1A643D0
    void ReadCharacters();
    // private System.Void ReadReference()
    // Offset: 0x1A63470
    void ReadReference();
    // private System.Int32 ReadCharacterReference()
    // Offset: 0x1A6445C
    int ReadCharacterReference();
    // private System.Void ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl a)
    // Offset: 0x1A64274
    void ReadAttribute(Mono::Xml::SmallXmlParser::AttrListImpl* a);
    // private System.Void ReadCDATASection()
    // Offset: 0x1A640AC
    void ReadCDATASection();
    // private System.Void ReadComment()
    // Offset: 0x1A641C8
    void ReadComment();
    // public System.Void .ctor()
    // Offset: 0x1A62600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallXmlParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Xml::SmallXmlParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallXmlParser*, creationType>()));
    }
  }; // Mono.Xml.SmallXmlParser
  #pragma pack(pop)
  static check_size<sizeof(SmallXmlParser), 96 + sizeof(bool)> __Mono_Xml_SmallXmlParserSizeCheck;
  static_assert(sizeof(SmallXmlParser) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser*, "Mono.Xml", "SmallXmlParser");
