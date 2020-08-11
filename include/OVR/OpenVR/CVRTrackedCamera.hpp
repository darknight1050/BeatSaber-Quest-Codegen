// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRTrackedCamera
  class CVRTrackedCamera : public ::CsObject {
    public:
    // private OVR.OpenVR.IVRTrackedCamera FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRTrackedCamera FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xEBC330
    static CVRTrackedCamera* New_ctor(System::IntPtr pInterface);
    // public System.String GetCameraErrorNameFromEnum(OVR.OpenVR.EVRTrackedCameraError eCameraError)
    // Offset: 0xEBC444
    ::CsString* GetCameraErrorNameFromEnum(OVR::OpenVR::EVRTrackedCameraError eCameraError);
    // public OVR.OpenVR.EVRTrackedCameraError HasCamera(System.UInt32 nDeviceIndex, System.Boolean pHasCamera)
    // Offset: 0xEBC4D8
    OVR::OpenVR::EVRTrackedCameraError HasCamera(uint nDeviceIndex, bool& pHasCamera);
    // public OVR.OpenVR.EVRTrackedCameraError GetCameraFrameSize(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.UInt32 pnWidth, System.UInt32 pnHeight, System.UInt32 pnFrameBufferSize)
    // Offset: 0xEBC4F8
    OVR::OpenVR::EVRTrackedCameraError GetCameraFrameSize(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize);
    // public OVR.OpenVR.EVRTrackedCameraError GetCameraIntrinsics(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, OVR.OpenVR.HmdVector2_t pFocalLength, OVR.OpenVR.HmdVector2_t pCenter)
    // Offset: 0xEBC520
    OVR::OpenVR::EVRTrackedCameraError GetCameraIntrinsics(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::HmdVector2_t& pFocalLength, OVR::OpenVR::HmdVector2_t& pCenter);
    // public OVR.OpenVR.EVRTrackedCameraError GetCameraProjection(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, OVR.OpenVR.HmdMatrix44_t pProjection)
    // Offset: 0xEBC53C
    OVR::OpenVR::EVRTrackedCameraError GetCameraProjection(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, OVR::OpenVR::HmdMatrix44_t& pProjection);
    // public OVR.OpenVR.EVRTrackedCameraError AcquireVideoStreamingService(System.UInt32 nDeviceIndex, System.UInt64 pHandle)
    // Offset: 0xEBC558
    OVR::OpenVR::EVRTrackedCameraError AcquireVideoStreamingService(uint nDeviceIndex, uint64_t& pHandle);
    // public OVR.OpenVR.EVRTrackedCameraError ReleaseVideoStreamingService(System.UInt64 hTrackedCamera)
    // Offset: 0xEBC578
    OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamFrameBuffer(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xEBC594
    OVR::OpenVR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamTextureSize(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.UInt32 pnWidth, System.UInt32 pnHeight)
    // Offset: 0xEBC5B0
    OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureSize(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamTextureD3D11(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, System.IntPtr ppD3D11ShaderResourceView, OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xEBC5D4
    OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamTextureGL(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.UInt32 pglTextureId, OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xEBC5F0
    OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public OVR.OpenVR.EVRTrackedCameraError ReleaseVideoStreamTextureGL(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0xEBC610
    OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint glTextureId);
  }; // OVR.OpenVR.CVRTrackedCamera
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRTrackedCamera*, "OVR.OpenVR", "CVRTrackedCamera");
#pragma pack(pop)
