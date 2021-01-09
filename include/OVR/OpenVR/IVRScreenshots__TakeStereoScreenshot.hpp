// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D85564
  class IVRScreenshots::_TakeStereoScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _TakeStereoScreenshot
    _TakeStereoScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x190A070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_TakeStereoScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_TakeStereoScreenshot*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRScreenshotError Invoke(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x190A084
    OVR::OpenVR::EVRScreenshotError Invoke(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x190A310
    System::IAsyncResult* BeginInvoke(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotError EndInvoke(ref System.UInt32 pOutScreenshotHandle, System.IAsyncResult result)
    // Offset: 0x190A3B8
    OVR::OpenVR::EVRScreenshotError EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*, "OVR.OpenVR", "IVRScreenshots/_TakeStereoScreenshot");
#pragma pack(pop)
