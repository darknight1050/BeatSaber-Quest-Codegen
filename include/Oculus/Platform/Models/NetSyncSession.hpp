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
  // Size: 0x38
  // Autogenerated type: Oculus.Platform.Models.NetSyncSession
  // [] Offset: FFFFFFFF
  class NetSyncSession : public ::Il2CppObject {
    public:
    // public readonly System.Int64 ConnectionId
    // Size: 0x8
    // Offset: 0x10
    int64_t ConnectionId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Boolean Muted
    // Size: 0x1
    // Offset: 0x18
    bool Muted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Muted and: SessionId
    char __padding1[0x7] = {};
    // public readonly System.UInt64 SessionId
    // Size: 0x8
    // Offset: 0x20
    uint64_t SessionId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 UserId
    // Size: 0x8
    // Offset: 0x28
    uint64_t UserId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String VoipGroup
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* VoipGroup;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NetSyncSession
    NetSyncSession(int64_t ConnectionId_ = {}, bool Muted_ = {}, uint64_t SessionId_ = {}, uint64_t UserId_ = {}, ::Il2CppString* VoipGroup_ = {}) noexcept : ConnectionId{ConnectionId_}, Muted{Muted_}, SessionId{SessionId_}, UserId{UserId_}, VoipGroup{VoipGroup_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11E17F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncSession* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::NetSyncSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncSession*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.NetSyncSession
  static check_size<sizeof(NetSyncSession), 48 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_NetSyncSessionSizeCheck;
  static_assert(sizeof(NetSyncSession) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSession*, "Oculus.Platform.Models", "NetSyncSession");
#pragma pack(pop)
