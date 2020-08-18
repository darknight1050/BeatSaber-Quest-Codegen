// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.VoipMuteState
#include "Oculus/Platform/VoipMuteState.hpp"
// Including type: Oculus.Platform.SystemVoipStatus
#include "Oculus/Platform/SystemVoipStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.SystemVoipState
  class SystemVoipState : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.VoipMuteState MicrophoneMuted
    // Offset: 0x10
    Oculus::Platform::VoipMuteState MicrophoneMuted;
    // public readonly Oculus.Platform.SystemVoipStatus Status
    // Offset: 0x14
    Oculus::Platform::SystemVoipStatus Status;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE04218
    static SystemVoipState* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.SystemVoipState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SystemVoipState*, "Oculus.Platform.Models", "SystemVoipState");
#pragma pack(pop)
