// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardDidUpdate
  class MessageWithLeaderboardDidUpdate : public Oculus::Platform::Message_1<bool> {
    public:
    // protected System.Boolean GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xDFF2D0
    bool GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xDFA2C8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLeaderboardDidUpdate* New_ctor(System::IntPtr c_message);
    // public override System.Boolean GetLeaderboardDidUpdate()
    // Offset: 0xDFF28C
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Boolean Message::GetLeaderboardDidUpdate()
    bool GetLeaderboardDidUpdate();
  }; // Oculus.Platform.MessageWithLeaderboardDidUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardDidUpdate*, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
#pragma pack(pop)
