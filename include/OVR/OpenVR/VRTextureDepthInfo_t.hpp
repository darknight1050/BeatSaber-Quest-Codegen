// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.HmdMatrix44_t
#include "OVR/OpenVR/HmdMatrix44_t.hpp"
// Including type: OVR.OpenVR.HmdVector2_t
#include "OVR/OpenVR/HmdVector2_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VRTextureDepthInfo_t
  struct VRTextureDepthInfo_t : public System::ValueType {
    public:
    // public System.IntPtr handle
    // Offset: 0x0
    System::IntPtr handle;
    // public OVR.OpenVR.HmdMatrix44_t mProjection
    // Offset: 0x8
    OVR::OpenVR::HmdMatrix44_t mProjection;
    // public OVR.OpenVR.HmdVector2_t vRange
    // Offset: 0x48
    OVR::OpenVR::HmdVector2_t vRange;
    // Creating value type constructor for type: VRTextureDepthInfo_t
    VRTextureDepthInfo_t(System::IntPtr handle_ = {}, OVR::OpenVR::HmdMatrix44_t mProjection_ = {}, OVR::OpenVR::HmdVector2_t vRange_ = {}) : handle{handle_}, mProjection{mProjection_}, vRange{vRange_} {}
  }; // OVR.OpenVR.VRTextureDepthInfo_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureDepthInfo_t, "OVR.OpenVR", "VRTextureDepthInfo_t");
#pragma pack(pop)
