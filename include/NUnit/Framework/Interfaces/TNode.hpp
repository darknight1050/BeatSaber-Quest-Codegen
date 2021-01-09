// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: AttributeDictionary
  class AttributeDictionary;
  // Forward declaring type: NodeList
  class NodeList;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
  // Forward declaring type: Match
  class Match;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x38
  // Autogenerated type: NUnit.Framework.Interfaces.TNode
  // [] Offset: FFFFFFFF
  class TNode : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB376C
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB377C
    // private System.String <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB378C
    // private System.Boolean <ValueIsCDATA>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool ValueIsCDATA;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ValueIsCDATA and: Attributes
    char __padding2[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDB379C
    // private NUnit.Framework.Interfaces.AttributeDictionary <Attributes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::AttributeDictionary* Attributes;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::AttributeDictionary*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB37AC
    // private NUnit.Framework.Interfaces.NodeList <ChildNodes>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::NodeList* ChildNodes;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::NodeList*) == 0x8);
    // Creating value type constructor for type: TNode
    TNode(::Il2CppString* Name_ = {}, ::Il2CppString* Value_ = {}, bool ValueIsCDATA_ = {}, NUnit::Framework::Interfaces::AttributeDictionary* Attributes_ = {}, NUnit::Framework::Interfaces::NodeList* ChildNodes_ = {}) noexcept : Name{Name_}, Value{Value_}, ValueIsCDATA{ValueIsCDATA_}, Attributes{Attributes_}, ChildNodes{ChildNodes_} {}
    // Get static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static System::Text::RegularExpressions::Regex* _get_InvalidXmlCharactersRegex();
    // Set static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static void _set_InvalidXmlCharactersRegex(System::Text::RegularExpressions::Regex* value);
    // [CompilerGeneratedAttribute] Offset: 0xDB37BC
    // Get static field: static private System.Text.RegularExpressions.MatchEvaluator CS$<>9__CachedAnonymousMethodDelegate1
    static System::Text::RegularExpressions::MatchEvaluator* _get_CS$$$9__CachedAnonymousMethodDelegate1();
    // Set static field: static private System.Text.RegularExpressions.MatchEvaluator CS$<>9__CachedAnonymousMethodDelegate1
    static void _set_CS$$$9__CachedAnonymousMethodDelegate1(System::Text::RegularExpressions::MatchEvaluator* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x13E7340
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x13E73F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::Il2CppString* name, ::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name, value)));
    }
    // public System.Void .ctor(System.String name, System.String value, System.Boolean valueIsCDATA)
    // Offset: 0x13E742C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::Il2CppString* name, ::Il2CppString* value, bool valueIsCDATA) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name, value, valueIsCDATA)));
    }
    // public System.String get_Name()
    // Offset: 0x13E7474
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x13E747C
    void set_Name(::Il2CppString* value);
    // public System.String get_Value()
    // Offset: 0x13E7484
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x13E748C
    void set_Value(::Il2CppString* value);
    // public System.Boolean get_ValueIsCDATA()
    // Offset: 0x13E7494
    bool get_ValueIsCDATA();
    // private System.Void set_ValueIsCDATA(System.Boolean value)
    // Offset: 0x13E749C
    void set_ValueIsCDATA(bool value);
    // public NUnit.Framework.Interfaces.AttributeDictionary get_Attributes()
    // Offset: 0x13E74A8
    NUnit::Framework::Interfaces::AttributeDictionary* get_Attributes();
    // private System.Void set_Attributes(NUnit.Framework.Interfaces.AttributeDictionary value)
    // Offset: 0x13E74B0
    void set_Attributes(NUnit::Framework::Interfaces::AttributeDictionary* value);
    // public NUnit.Framework.Interfaces.NodeList get_ChildNodes()
    // Offset: 0x13E74B8
    NUnit::Framework::Interfaces::NodeList* get_ChildNodes();
    // private System.Void set_ChildNodes(NUnit.Framework.Interfaces.NodeList value)
    // Offset: 0x13E74C0
    void set_ChildNodes(NUnit::Framework::Interfaces::NodeList* value);
    // public System.String get_OuterXml()
    // Offset: 0x13E74C8
    ::Il2CppString* get_OuterXml();
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name)
    // Offset: 0x13E7880
    NUnit::Framework::Interfaces::TNode* AddElement(::Il2CppString* name);
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name, System.String value)
    // Offset: 0x13E790C
    NUnit::Framework::Interfaces::TNode* AddElement(::Il2CppString* name, ::Il2CppString* value);
    // public NUnit.Framework.Interfaces.TNode AddElementWithCDATA(System.String name, System.String value)
    // Offset: 0x13E7AF8
    NUnit::Framework::Interfaces::TNode* AddElementWithCDATA(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void AddAttribute(System.String name, System.String value)
    // Offset: 0x13E7BC8
    void AddAttribute(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x13E7640
    void WriteTo(System::Xml::XmlWriter* writer);
    // static private System.String EscapeInvalidXmlCharacters(System.String str)
    // Offset: 0x13E79D8
    static ::Il2CppString* EscapeInvalidXmlCharacters(::Il2CppString* str);
    // static private System.String CharToUnicodeSequence(System.Char symbol)
    // Offset: 0x13E7D84
    static ::Il2CppString* CharToUnicodeSequence(::Il2CppChar symbol);
    // private System.Void WriteCDataTo(System.Xml.XmlWriter writer)
    // Offset: 0x13E7C64
    void WriteCDataTo(System::Xml::XmlWriter* writer);
    // static private System.String <EscapeInvalidXmlCharacters>b__0(System.Text.RegularExpressions.Match match)
    // Offset: 0x13E7E08
    static ::Il2CppString* $EscapeInvalidXmlCharacters$b__0(System::Text::RegularExpressions::Match* match);
    // static private System.Void .cctor()
    // Offset: 0x13E7E98
    static void _cctor();
  }; // NUnit.Framework.Interfaces.TNode
  static check_size<sizeof(TNode), 48 + sizeof(NUnit::Framework::Interfaces::NodeList*)> __NUnit_Framework_Interfaces_TNodeSizeCheck;
  static_assert(sizeof(TNode) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TNode*, "NUnit.Framework.Interfaces", "TNode");
#pragma pack(pop)
