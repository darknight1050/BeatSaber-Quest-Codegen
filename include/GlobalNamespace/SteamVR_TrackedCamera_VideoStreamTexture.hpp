// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
// Including type: Valve.VR.CameraVideoStreamFrameHeader_t
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: EVRTrackedCameraFrameType because it is already included!
  // Skipping declaration: TrackedDevicePose_t because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA2
  // Autogenerated type: SteamVR_TrackedCamera/VideoStreamTexture
  // [] Offset: FFFFFFFF
  class SteamVR_TrackedCamera::VideoStreamTexture : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD8A7C0
    // private System.Boolean <undistorted>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool undistorted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: undistorted and: frameBounds
    char __padding0[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD8A7D0
    // private Valve.VR.VRTextureBounds_t <frameBounds>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    Valve::VR::VRTextureBounds_t frameBounds;
    // Field size check
    static_assert(sizeof(Valve::VR::VRTextureBounds_t) == 0x10);
    // Padding between fields: frameBounds and: texture
    char __padding1[0x4] = {};
    // private UnityEngine.Texture2D _texture
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private System.Int32 prevFrameCount
    // Size: 0x4
    // Offset: 0x30
    int prevFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 glTextureId
    // Size: 0x4
    // Offset: 0x34
    uint glTextureId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private SteamVR_TrackedCamera/VideoStream videostream
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SteamVR_TrackedCamera::VideoStream* videostream;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*) == 0x8);
    // private Valve.VR.CameraVideoStreamFrameHeader_t header
    // Size: 0x62
    // Offset: 0x40
    Valve::VR::CameraVideoStreamFrameHeader_t header;
    // Field size check
    static_assert(sizeof(Valve::VR::CameraVideoStreamFrameHeader_t) == 0x62);
    // Creating value type constructor for type: VideoStreamTexture
    VideoStreamTexture(bool undistorted_ = {}, Valve::VR::VRTextureBounds_t frameBounds_ = {}, UnityEngine::Texture2D* texture_ = {}, int prevFrameCount_ = {}, uint glTextureId_ = {}, GlobalNamespace::SteamVR_TrackedCamera::VideoStream* videostream_ = {}, Valve::VR::CameraVideoStreamFrameHeader_t header_ = {}) noexcept : undistorted{undistorted_}, frameBounds{frameBounds_}, texture{texture_}, prevFrameCount{prevFrameCount_}, glTextureId{glTextureId_}, videostream{videostream_}, header{header_} {}
    // public System.Void .ctor(System.UInt32 deviceIndex, System.Boolean undistorted)
    // Offset: 0x135B24C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera::VideoStreamTexture* New_ctor(uint deviceIndex, bool undistorted) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera::VideoStreamTexture*, creationType>(deviceIndex, undistorted)));
    }
    // public System.Boolean get_undistorted()
    // Offset: 0x135B7CC
    bool get_undistorted();
    // private System.Void set_undistorted(System.Boolean value)
    // Offset: 0x135B7D4
    void set_undistorted(bool value);
    // public System.UInt32 get_deviceIndex()
    // Offset: 0x135B7E0
    uint get_deviceIndex();
    // public System.Boolean get_hasCamera()
    // Offset: 0x135B7FC
    bool get_hasCamera();
    // public System.Boolean get_hasTracking()
    // Offset: 0x135B818
    bool get_hasTracking();
    // public System.UInt32 get_frameId()
    // Offset: 0x135BBB8
    uint get_frameId();
    // public Valve.VR.VRTextureBounds_t get_frameBounds()
    // Offset: 0x135BBDC
    Valve::VR::VRTextureBounds_t get_frameBounds();
    // private System.Void set_frameBounds(Valve.VR.VRTextureBounds_t value)
    // Offset: 0x135BBE8
    void set_frameBounds(Valve::VR::VRTextureBounds_t value);
    // public Valve.VR.EVRTrackedCameraFrameType get_frameType()
    // Offset: 0x135BBF4
    Valve::VR::EVRTrackedCameraFrameType get_frameType();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x135BBFC
    UnityEngine::Texture2D* get_texture();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0x135BC20
    GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x135BE94
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x135BEE4
    UnityEngine::Vector3 get_angularVelocity();
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0x135BF38
    Valve::VR::TrackedDevicePose_t GetPose();
    // public System.UInt64 Acquire()
    // Offset: 0x135BF68
    uint64_t Acquire();
    // public System.UInt64 Release()
    // Offset: 0x135BF80
    uint64_t Release();
    // private System.Void Update()
    // Offset: 0x135B83C
    void Update();
  }; // SteamVR_TrackedCamera/VideoStreamTexture
  static check_size<sizeof(SteamVR_TrackedCamera::VideoStreamTexture), 64 + sizeof(Valve::VR::CameraVideoStreamFrameHeader_t)> __GlobalNamespace_SteamVR_TrackedCamera_VideoStreamTextureSizeCheck;
  static_assert(sizeof(SteamVR_TrackedCamera::VideoStreamTexture) == 0xA2);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, "", "SteamVR_TrackedCamera/VideoStreamTexture");
#pragma pack(pop)
