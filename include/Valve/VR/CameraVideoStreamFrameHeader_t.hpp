// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.EVRTrackedCameraFrameType
#include "Valve/VR/EVRTrackedCameraFrameType.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x62
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CameraVideoStreamFrameHeader_t
  // [] Offset: FFFFFFFF
  struct CameraVideoStreamFrameHeader_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.EVRTrackedCameraFrameType eFrameType
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::EVRTrackedCameraFrameType eFrameType;
    // Field size check
    static_assert(sizeof(Valve::VR::EVRTrackedCameraFrameType) == 0x4);
    // public System.UInt32 nWidth
    // Size: 0x4
    // Offset: 0x4
    uint nWidth;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 nHeight
    // Size: 0x4
    // Offset: 0x8
    uint nHeight;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 nBytesPerPixel
    // Size: 0x4
    // Offset: 0xC
    uint nBytesPerPixel;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 nFrameSequence
    // Size: 0x4
    // Offset: 0x10
    uint nFrameSequence;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public Valve.VR.TrackedDevicePose_t standingTrackedDevicePose
    // Size: 0x4E
    // Offset: 0x14
    Valve::VR::TrackedDevicePose_t standingTrackedDevicePose;
    // Field size check
    static_assert(sizeof(Valve::VR::TrackedDevicePose_t) == 0x4E);
    // Creating value type constructor for type: CameraVideoStreamFrameHeader_t
    constexpr CameraVideoStreamFrameHeader_t(Valve::VR::EVRTrackedCameraFrameType eFrameType_ = {}, uint nWidth_ = {}, uint nHeight_ = {}, uint nBytesPerPixel_ = {}, uint nFrameSequence_ = {}, Valve::VR::TrackedDevicePose_t standingTrackedDevicePose_ = {}) noexcept : eFrameType{eFrameType_}, nWidth{nWidth_}, nHeight{nHeight_}, nBytesPerPixel{nBytesPerPixel_}, nFrameSequence{nFrameSequence_}, standingTrackedDevicePose{standingTrackedDevicePose_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.CameraVideoStreamFrameHeader_t
  #pragma pack(pop)
  static check_size<sizeof(CameraVideoStreamFrameHeader_t), 20 + sizeof(Valve::VR::TrackedDevicePose_t)> __Valve_VR_CameraVideoStreamFrameHeader_tSizeCheck;
  static_assert(sizeof(CameraVideoStreamFrameHeader_t) == 0x62);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CameraVideoStreamFrameHeader_t, "Valve.VR", "CameraVideoStreamFrameHeader_t");
