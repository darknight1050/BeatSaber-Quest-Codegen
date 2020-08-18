// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Including type: Mono.Xml.SmallXmlParser/IAttrList
#include "Mono/Xml/SmallXmlParser_IAttrList.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Autogenerated type: Mono.Xml.SmallXmlParser/AttrListImpl
  class SmallXmlParser::AttrListImpl : public Mono::Xml::SmallXmlParser::IAttrList, public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.String> attrNames
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* attrNames;
    // private System.Collections.Generic.List`1<System.String> attrValues
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* attrValues;
    // System.Void Clear()
    // Offset: 0x1017F5C
    void Clear();
    // System.Void Add(System.String name, System.String value)
    // Offset: 0x10184BC
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public System.Int32 get_Length()
    // Offset: 0x101853C
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.Int32 IAttrList::get_Length()
    int get_Length();
    // public System.String GetName(System.Int32 i)
    // Offset: 0x101858C
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String IAttrList::GetName(System.Int32 i)
    ::Il2CppString* GetName(int i);
    // public System.String GetValue(System.Int32 i)
    // Offset: 0x1018604
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String IAttrList::GetValue(System.Int32 i)
    ::Il2CppString* GetValue(int i);
    // public System.String GetValue(System.String name)
    // Offset: 0x101867C
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String IAttrList::GetValue(System.String name)
    ::Il2CppString* GetValue(::Il2CppString* name);
    // public System.String[] get_Names()
    // Offset: 0x1018750
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String[] IAttrList::get_Names()
    ::Array<::Il2CppString*>* get_Names();
    // public System.String[] get_Values()
    // Offset: 0x10187A8
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String[] IAttrList::get_Values()
    ::Array<::Il2CppString*>* get_Values();
    // public System.Void .ctor()
    // Offset: 0x1016B24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SmallXmlParser::AttrListImpl* New_ctor();
  }; // Mono.Xml.SmallXmlParser/AttrListImpl
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser::AttrListImpl*, "Mono.Xml", "SmallXmlParser/AttrListImpl");
#pragma pack(pop)
