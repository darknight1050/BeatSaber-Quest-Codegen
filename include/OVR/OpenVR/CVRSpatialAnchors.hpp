// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSpatialAnchors
  class CVRSpatialAnchors : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRSpatialAnchors FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRSpatialAnchors FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xE2D610
    static CVRSpatialAnchors* New_ctor(System::IntPtr pInterface);
    // public OVR.OpenVR.EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(System.String pchDescriptor, System.UInt32 pHandleOut)
    // Offset: 0xE2D718
    OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(::Il2CppString* pchDescriptor, uint& pHandleOut);
    // public OVR.OpenVR.EVRSpatialAnchorError CreateSpatialAnchorFromPose(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.SpatialAnchorPose_t pPose, System.UInt32 pHandleOut)
    // Offset: 0xE2D738
    OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromPose(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut);
    // public OVR.OpenVR.EVRSpatialAnchorError GetSpatialAnchorPose(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.SpatialAnchorPose_t pPoseOut)
    // Offset: 0xE2D758
    OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorPose(uint unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPoseOut);
    // public OVR.OpenVR.EVRSpatialAnchorError GetSpatialAnchorDescriptor(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, System.UInt32 punDescriptorBufferLenInOut)
    // Offset: 0xE2D774
    OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorDescriptor(uint unHandle, System::Text::StringBuilder* pchDescriptorOut, uint& punDescriptorBufferLenInOut);
  }; // OVR.OpenVR.CVRSpatialAnchors
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSpatialAnchors*, "OVR.OpenVR", "CVRSpatialAnchors");
#pragma pack(pop)
