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
  // Forward declaring type: UserProof
  class UserProof;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithUserProof
  class MessageWithUserProof : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof*> {
    public:
    // protected Oculus.Platform.Models.UserProof GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE04B2C
    Oculus::Platform::Models::UserProof* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xDFADA8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithUserProof* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.UserProof GetUserProof()
    // Offset: 0xE04AE8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.UserProof Message::GetUserProof()
    Oculus::Platform::Models::UserProof* GetUserProof();
  }; // Oculus.Platform.MessageWithUserProof
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserProof*, "Oculus.Platform", "MessageWithUserProof");
#pragma pack(pop)
