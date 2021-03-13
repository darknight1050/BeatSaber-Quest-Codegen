// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: RoomJoinPolicy
  struct RoomJoinPolicy;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MatchmakingOptions
  // [] Offset: FFFFFFFF
  class MatchmakingOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: MatchmakingOptions
    MatchmakingOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetCreateRoomDataStore(System.String key, System.String value)
    // Offset: 0x137E398
    void SetCreateRoomDataStore(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void ClearCreateRoomDataStore()
    // Offset: 0x137E41C
    void ClearCreateRoomDataStore();
    // public System.Void SetCreateRoomJoinPolicy(Oculus.Platform.RoomJoinPolicy value)
    // Offset: 0x137E488
    void SetCreateRoomJoinPolicy(Oculus::Platform::RoomJoinPolicy value);
    // public System.Void SetCreateRoomMaxUsers(System.UInt32 value)
    // Offset: 0x137E504
    void SetCreateRoomMaxUsers(uint value);
    // public System.Void AddEnqueueAdditionalUser(System.UInt64 userID)
    // Offset: 0x137E580
    void AddEnqueueAdditionalUser(uint64_t userID);
    // public System.Void ClearEnqueueAdditionalUsers()
    // Offset: 0x137E5FC
    void ClearEnqueueAdditionalUsers();
    // public System.Void SetEnqueueDataSettings(System.String key, System.Int32 value)
    // Offset: 0x137E668
    void SetEnqueueDataSettings(::Il2CppString* key, int value);
    // public System.Void SetEnqueueDataSettings(System.String key, System.Double value)
    // Offset: 0x137E6EC
    void SetEnqueueDataSettings(::Il2CppString* key, double value);
    // public System.Void SetEnqueueDataSettings(System.String key, System.String value)
    // Offset: 0x137E778
    void SetEnqueueDataSettings(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void ClearEnqueueDataSettings()
    // Offset: 0x137E7FC
    void ClearEnqueueDataSettings();
    // public System.Void SetEnqueueIsDebug(System.Boolean value)
    // Offset: 0x137E868
    void SetEnqueueIsDebug(bool value);
    // public System.Void SetEnqueueQueryKey(System.String value)
    // Offset: 0x137E8E4
    void SetEnqueueQueryKey(::Il2CppString* value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.MatchmakingOptions options)
    // Offset: 0x137D2B4
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x137E320
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MatchmakingOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x137E960
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize_NEW()
    void Finalize();
  }; // Oculus.Platform.MatchmakingOptions
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_MatchmakingOptionsSizeCheck;
  static_assert(sizeof(MatchmakingOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MatchmakingOptions*, "Oculus.Platform", "MatchmakingOptions");
