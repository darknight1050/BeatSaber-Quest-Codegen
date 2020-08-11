// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL
  class IVRTrackedCamera::_GetVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C48E0
    static IVRTrackedCamera::_GetVideoStreamTextureGL* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.UInt32 pglTextureId, Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x16C48F4
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.UInt32 pglTextureId, Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C4BBC
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.UInt32 pglTextureId, Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0x16C4CC4
    Valve::VR::EVRTrackedCameraError EndInvoke(uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL*, "Valve.VR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
#pragma pack(pop)
