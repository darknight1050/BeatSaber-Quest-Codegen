// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.Res
  class Res : public ::CsObject {
    public:
    // static public System.String GetString(System.String name)
    // Offset: 0x11847AC
    static ::CsString* GetString(::CsString* name);
    // static public System.String GetString(System.String name, System.Object[] args)
    // Offset: 0x1189E64
    static ::CsString* GetString(::CsString* name, ::Array<::CsObject*>* args);
  }; // System.Xml.Res
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Res*, "System.Xml", "Res");
#pragma pack(pop)
