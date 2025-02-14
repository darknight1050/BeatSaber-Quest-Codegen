// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedCamera
  class SteamVR_TrackedCamera : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture
    class VideoStreamTexture;
    // Nested type: GlobalNamespace::SteamVR_TrackedCamera::VideoStream
    class VideoStream;
    // Creating value type constructor for type: SteamVR_TrackedCamera
    SteamVR_TrackedCamera() noexcept {}
    // Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
    static ::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* _get_distorted();
    // Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
    static void _set_distorted(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* value);
    // Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
    static ::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* _get_undistorted();
    // Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
    static void _set_undistorted(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* value);
    // Get static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
    static ::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>* _get_videostreams();
    // Set static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
    static void _set_videostreams(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>* value);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Distorted(System.Int32 deviceIndex)
    // Offset: 0x16AEA40
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Distorted(int deviceIndex);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Undistorted(System.Int32 deviceIndex)
    // Offset: 0x16AEBE0
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Undistorted(int deviceIndex);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Source(System.Boolean undistorted, System.Int32 deviceIndex)
    // Offset: 0x16AED30
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Source(bool undistorted, int deviceIndex);
    // static private SteamVR_TrackedCamera/VideoStream Stream(System.UInt32 deviceIndex)
    // Offset: 0x16AED44
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStream* Stream(uint deviceIndex);
    // public System.Void .ctor()
    // Offset: 0x16AEF18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_TrackedCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera*, creationType>()));
    }
  }; // SteamVR_TrackedCamera
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedCamera*, "", "SteamVR_TrackedCamera");
