// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockScoreSyncStateSender
  class MockScoreSyncStateSender : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: MockScoreSyncStateSender
    MockScoreSyncStateSender(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IMultiplayerSessionManager*
    constexpr operator GlobalNamespace::IMultiplayerSessionManager*() const noexcept {
      return multiplayerSessionManager;
    }
    // public System.Void .ctor(IMultiplayerSessionManager msm)
    // Offset: 0x2399DF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockScoreSyncStateSender* New_ctor(GlobalNamespace::IMultiplayerSessionManager* msm) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockScoreSyncStateSender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockScoreSyncStateSender*, creationType>(msm)));
    }
    // public System.Void Dispose()
    // Offset: 0x239EB1C
    void Dispose();
    // public System.Void SendScore(System.Int32 modifiedScore, System.Int32 rawScore, System.Int32 immediateMaxPossibleRawScore, System.Int32 combo, System.Int32 multiplier)
    // Offset: 0x239C31C
    void SendScore(int modifiedScore, int rawScore, int immediateMaxPossibleRawScore, int combo, int multiplier);
    // private System.Void HandleScoreSyncStateUpdate(StandardScoreSyncStateNetSerializable nodePose, IConnectedPlayer connectedPlayer)
    // Offset: 0x239EBE8
    void HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // MockScoreSyncStateSender
  #pragma pack(pop)
  static check_size<sizeof(MockScoreSyncStateSender), 16 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_MockScoreSyncStateSenderSizeCheck;
  static_assert(sizeof(MockScoreSyncStateSender) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockScoreSyncStateSender*, "", "MockScoreSyncStateSender");
