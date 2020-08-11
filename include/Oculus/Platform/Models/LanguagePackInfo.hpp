// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LanguagePackInfo
  class LanguagePackInfo : public ::CsObject {
    public:
    // public readonly System.String EnglishName
    // Offset: 0x10
    ::CsString* EnglishName;
    // public readonly System.String NativeName
    // Offset: 0x18
    ::CsString* NativeName;
    // public readonly System.String Tag
    // Offset: 0x20
    ::CsString* Tag;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE932D4
    static LanguagePackInfo* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LanguagePackInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LanguagePackInfo*, "Oculus.Platform.Models", "LanguagePackInfo");
#pragma pack(pop)
