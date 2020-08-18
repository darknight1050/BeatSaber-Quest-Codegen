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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResultAndRoom
  class MatchmakingEnqueueResultAndRoom;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingEnqueueResultAndRoom
  class MessageWithMatchmakingEnqueueResultAndRoom : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*> {
    public:
    // protected Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE00748
    Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xDFA4A8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithMatchmakingEnqueueResultAndRoom* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom GetMatchmakingEnqueueResultAndRoom()
    // Offset: 0xE00704
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom Message::GetMatchmakingEnqueueResultAndRoom()
    Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* GetMatchmakingEnqueueResultAndRoom();
  }; // Oculus.Platform.MessageWithMatchmakingEnqueueResultAndRoom
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*, "Oculus.Platform", "MessageWithMatchmakingEnqueueResultAndRoom");
#pragma pack(pop)
