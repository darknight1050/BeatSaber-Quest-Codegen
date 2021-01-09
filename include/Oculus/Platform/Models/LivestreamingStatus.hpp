// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x19
  // Autogenerated type: Oculus.Platform.Models.LivestreamingStatus
  // [] Offset: FFFFFFFF
  class LivestreamingStatus : public ::Il2CppObject {
    public:
    // public readonly System.Boolean CommentsVisible
    // Size: 0x1
    // Offset: 0x10
    bool CommentsVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean IsPaused
    // Size: 0x1
    // Offset: 0x11
    bool IsPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean LivestreamingEnabled
    // Size: 0x1
    // Offset: 0x12
    bool LivestreamingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: LivestreamingEnabled and: LivestreamingType
    char __padding2[0x1] = {};
    // public readonly System.Int32 LivestreamingType
    // Size: 0x4
    // Offset: 0x14
    int LivestreamingType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean MicEnabled
    // Size: 0x1
    // Offset: 0x18
    bool MicEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LivestreamingStatus
    LivestreamingStatus(bool CommentsVisible_ = {}, bool IsPaused_ = {}, bool LivestreamingEnabled_ = {}, int LivestreamingType_ = {}, bool MicEnabled_ = {}) noexcept : CommentsVisible{CommentsVisible_}, IsPaused{IsPaused_}, LivestreamingEnabled{LivestreamingEnabled_}, LivestreamingType{LivestreamingType_}, MicEnabled{MicEnabled_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DBA44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingStatus* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LivestreamingStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingStatus*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingStatus
  static check_size<sizeof(LivestreamingStatus), 24 + sizeof(bool)> __Oculus_Platform_Models_LivestreamingStatusSizeCheck;
  static_assert(sizeof(LivestreamingStatus) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingStatus*, "Oculus.Platform.Models", "LivestreamingStatus");
#pragma pack(pop)
