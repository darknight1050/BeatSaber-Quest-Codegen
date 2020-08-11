// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.HtmlTernaryTree
  class HtmlTernaryTree : public ::CsObject {
    public:
    // Get static field: static System.Byte[] htmlElements
    static ::Array<uint8_t>* _get_htmlElements();
    // Set static field: static System.Byte[] htmlElements
    static void _set_htmlElements(::Array<uint8_t>* value);
    // Get static field: static System.Byte[] htmlAttributes
    static ::Array<uint8_t>* _get_htmlAttributes();
    // Set static field: static System.Byte[] htmlAttributes
    static void _set_htmlAttributes(::Array<uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x1185FE8
    static void _cctor();
  }; // System.Xml.HtmlTernaryTree
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlTernaryTree*, "System.Xml", "HtmlTernaryTree");
#pragma pack(pop)
