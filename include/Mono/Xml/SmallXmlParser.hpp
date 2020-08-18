// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
    // Offset: 0x10
    Mono::Xml::SmallXmlParser::IContentHandler* handler;
    // private System.IO.TextReader reader
    // Offset: 0x18
    System::IO::TextReader* reader;
    // private System.Collections.Stack elementNames
    // Offset: 0x20
    System::Collections::Stack* elementNames;
    // private System.Collections.Stack xmlSpaces
    // Offset: 0x28
    System::Collections::Stack* xmlSpaces;
    // private System.String xmlSpace
    // Offset: 0x30
    ::Il2CppString* xmlSpace;
    // private System.Text.StringBuilder buffer
    // Offset: 0x38
    System::Text::StringBuilder* buffer;
    // private System.Char[] nameBuffer
    // Offset: 0x40
    ::Array<::Il2CppChar>* nameBuffer;
    // private System.Boolean isWhitespace
    // Offset: 0x48
    bool isWhitespace;
    // private Mono.Xml.SmallXmlParser/AttrListImpl attributes
    // Offset: 0x50
    Mono::Xml::SmallXmlParser::AttrListImpl* attributes;
    // private System.Int32 line
    // Offset: 0x58
    int line;
    // private System.Int32 column
    // Offset: 0x5C
    int column;
    // private System.Boolean resetColumn
    // Offset: 0x60
    bool resetColumn;
    // private System.Exception Error(System.String msg)
    // Offset: 0x1016BCC
    System::Exception* Error(::Il2CppString* msg);
    // private System.Exception UnexpectedEndError()
    // Offset: 0x1016D0C
    System::Exception* UnexpectedEndError();
    // private System.Boolean IsNameChar(System.Char c, System.Boolean start)
    // Offset: 0x1016DDC
    bool IsNameChar(::Il2CppChar c, bool start);
    // private System.Boolean IsWhitespace(System.Int32 c)
    // Offset: 0x1016EF0
    bool IsWhitespace(int c);
    // public System.Void SkipWhitespaces()
    // Offset: 0x1016F20
    void SkipWhitespaces();
    // private System.Void HandleWhitespaces()
    // Offset: 0x1016FEC
    void HandleWhitespaces();
    // public System.Void SkipWhitespaces(System.Boolean expected)
    // Offset: 0x1016F28
    void SkipWhitespaces(bool expected);
    // private System.Int32 Peek()
    // Offset: 0x1017124
    int Peek();
    // private System.Int32 Read()
    // Offset: 0x10170B0
    int Read();
    // public System.Void Expect(System.Int32 c)
    // Offset: 0x1017144
    void Expect(int c);
    // private System.String ReadUntil(System.Char until, System.Boolean handleReferences)
    // Offset: 0x1017228
    ::Il2CppString* ReadUntil(::Il2CppChar until, bool handleReferences);
    // public System.String ReadName()
    // Offset: 0x10174B4
    ::Il2CppString* ReadName();
    // public System.Void Parse(System.IO.TextReader input, Mono.Xml.SmallXmlParser/IContentHandler handler)
    // Offset: 0x101652C
    void Parse(System::IO::TextReader* input, Mono::Xml::SmallXmlParser::IContentHandler* handler);
    // private System.Void Cleanup()
    // Offset: 0x1017EB4
    void Cleanup();
    // public System.Void ReadContent()
    // Offset: 0x1017674
    void ReadContent();
    // private System.Void HandleBufferedContent()
    // Offset: 0x1017D64
    void HandleBufferedContent();
    // private System.Void ReadCharacters()
    // Offset: 0x10182F4
    void ReadCharacters();
    // private System.Void ReadReference()
    // Offset: 0x1017324
    void ReadReference();
    // private System.Int32 ReadCharacterReference()
    // Offset: 0x1018380
    int ReadCharacterReference();
    // private System.Void ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl a)
    // Offset: 0x101818C
    void ReadAttribute(Mono::Xml::SmallXmlParser::AttrListImpl* a);
    // private System.Void ReadCDATASection()
    // Offset: 0x1017FC4
    void ReadCDATASection();
    // private System.Void ReadComment()
    // Offset: 0x10180E0
    void ReadComment();
    // public System.Void .ctor()
    // Offset: 0x1016364
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SmallXmlParser* New_ctor();
  }; // Mono.Xml.SmallXmlParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser*, "Mono.Xml", "SmallXmlParser");
#pragma pack(pop)
