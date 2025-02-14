// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedCamera/VideoStream
  class SteamVR_TrackedCamera::VideoStream : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD4E50
    // private System.UInt32 <deviceIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint deviceIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: deviceIndex and: handle
    char __padding0[0x4] = {};
    // private System.UInt64 _handle
    // Size: 0x8
    // Offset: 0x18
    uint64_t handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean _hasCamera
    // Size: 0x1
    // Offset: 0x20
    bool hasCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasCamera and: refCount
    char __padding2[0x7] = {};
    // private System.UInt64 refCount
    // Size: 0x8
    // Offset: 0x28
    uint64_t refCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: VideoStream
    VideoStream(uint deviceIndex_ = {}, uint64_t handle_ = {}, bool hasCamera_ = {}, uint64_t refCount_ = {}) noexcept : deviceIndex{deviceIndex_}, handle{handle_}, hasCamera{hasCamera_}, refCount{refCount_} {}
    // public System.Void .ctor(System.UInt32 deviceIndex)
    // Offset: 0x16AEE78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera::VideoStream* New_ctor(uint deviceIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_TrackedCamera::VideoStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera::VideoStream*, creationType>(deviceIndex)));
    }
    // public System.UInt32 get_deviceIndex()
    // Offset: 0x16AEF40
    uint get_deviceIndex();
    // private System.Void set_deviceIndex(System.UInt32 value)
    // Offset: 0x16AEF48
    void set_deviceIndex(uint value);
    // public System.UInt64 get_handle()
    // Offset: 0x16AEF50
    uint64_t get_handle();
    // public System.Boolean get_hasCamera()
    // Offset: 0x16AEF58
    bool get_hasCamera();
    // public System.UInt64 Acquire()
    // Offset: 0x16AEF60
    uint64_t Acquire();
    // public System.UInt64 Release()
    // Offset: 0x16AF01C
    uint64_t Release();
  }; // SteamVR_TrackedCamera/VideoStream
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TrackedCamera::VideoStream), 40 + sizeof(uint64_t)> __GlobalNamespace_SteamVR_TrackedCamera_VideoStreamSizeCheck;
  static_assert(sizeof(SteamVR_TrackedCamera::VideoStream) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*, "", "SteamVR_TrackedCamera/VideoStream");
