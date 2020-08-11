// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: SFB
namespace SFB {
  // Autogenerated type: SFB.ExtensionFilter
  struct ExtensionFilter : public System::ValueType {
    public:
    // public readonly System.String _name
    // Offset: 0x0
    ::CsString* name;
    // public readonly System.String[] _extensions
    // Offset: 0x8
    ::Array<::CsString*>* extensions;
    // Creating value type constructor for type: ExtensionFilter
    ExtensionFilter(::CsString* name_ = {}, ::Array<::CsString*>* extensions_ = {}) : name{name_}, extensions{extensions_} {}
    // public System.Void .ctor(System.String filterName, System.String[] filterExtensions)
    // Offset: 0xA27C5C
    static ExtensionFilter* New_ctor(::CsString* filterName, ::Array<::CsString*>* filterExtensions);
  }; // SFB.ExtensionFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(SFB::ExtensionFilter, "SFB", "ExtensionFilter");
#pragma pack(pop)
