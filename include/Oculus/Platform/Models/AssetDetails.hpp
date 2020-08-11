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
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LanguagePackInfo
  class LanguagePackInfo;
}
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
  // Autogenerated type: Oculus.Platform.Models.AssetDetails
  class AssetDetails : public ::CsObject {
    public:
    // public readonly System.UInt64 AssetId
    // Offset: 0x10
    uint64_t AssetId;
    // public readonly System.String AssetType
    // Offset: 0x18
    ::CsString* AssetType;
    // public readonly System.String DownloadStatus
    // Offset: 0x20
    ::CsString* DownloadStatus;
    // public readonly System.String Filepath
    // Offset: 0x28
    ::CsString* Filepath;
    // public readonly System.String IapStatus
    // Offset: 0x30
    ::CsString* IapStatus;
    // public readonly Oculus.Platform.Models.LanguagePackInfo LanguageOptional
    // Offset: 0x38
    Oculus::Platform::Models::LanguagePackInfo* LanguageOptional;
    // public readonly Oculus.Platform.Models.LanguagePackInfo Language
    // Offset: 0x40
    Oculus::Platform::Models::LanguagePackInfo* Language;
    // public readonly System.String Metadata
    // Offset: 0x48
    ::CsString* Metadata;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8AAEC
    static AssetDetails* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.AssetDetails
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetDetails*, "Oculus.Platform.Models", "AssetDetails");
#pragma pack(pop)
