// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRScreenshots
  class CVRScreenshots : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRScreenshots FnTable
    // Size: 0x38
    // Offset: 0x10
    Valve::VR::IVRScreenshots FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots) == 0x38);
    // Creating value type constructor for type: CVRScreenshots
    CVRScreenshots(Valve::VR::IVRScreenshots FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRScreenshots
    constexpr operator Valve::VR::IVRScreenshots() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x16BF074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRScreenshots* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRScreenshots::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRScreenshots*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRScreenshotError RequestScreenshot(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x16BF184
    Valve::VR::EVRScreenshotError RequestScreenshot(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public Valve.VR.EVRScreenshotError HookScreenshot(Valve.VR.EVRScreenshotType[] pSupportedTypes)
    // Offset: 0x16BF1A4
    Valve::VR::EVRScreenshotError HookScreenshot(::Array<Valve::VR::EVRScreenshotType>* pSupportedTypes);
    // public Valve.VR.EVRScreenshotType GetScreenshotPropertyType(System.UInt32 screenshotHandle, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x16BF1CC
    Valve::VR::EVRScreenshotType GetScreenshotPropertyType(uint screenshotHandle, Valve::VR::EVRScreenshotError& pError);
    // public System.UInt32 GetScreenshotPropertyFilename(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x16BF1E8
    uint GetScreenshotPropertyFilename(uint screenshotHandle, Valve::VR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, Valve::VR::EVRScreenshotError& pError);
    // public Valve.VR.EVRScreenshotError UpdateScreenshotProgress(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0x16B1E3C
    Valve::VR::EVRScreenshotError UpdateScreenshotProgress(uint screenshotHandle, float flProgress);
    // public Valve.VR.EVRScreenshotError TakeStereoScreenshot(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x16BF204
    Valve::VR::EVRScreenshotError TakeStereoScreenshot(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public Valve.VR.EVRScreenshotError SubmitScreenshot(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0x16BF224
    Valve::VR::EVRScreenshotError SubmitScreenshot(uint screenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename);
  }; // Valve.VR.CVRScreenshots
  #pragma pack(pop)
  static check_size<sizeof(CVRScreenshots), 16 + sizeof(Valve::VR::IVRScreenshots)> __Valve_VR_CVRScreenshotsSizeCheck;
  static_assert(sizeof(CVRScreenshots) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRScreenshots*, "Valve.VR", "CVRScreenshots");
