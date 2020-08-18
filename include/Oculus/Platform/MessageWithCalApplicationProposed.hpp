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
  // Forward declaring type: CalApplicationProposed
  class CalApplicationProposed;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithCalApplicationProposed
  class MessageWithCalApplicationProposed : public Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationProposed*> {
    public:
    // protected Oculus.Platform.Models.CalApplicationProposed GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xDFD4A0
    Oculus::Platform::Models::CalApplicationProposed* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xDF9F68
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithCalApplicationProposed* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.CalApplicationProposed GetCalApplicationProposed()
    // Offset: 0xDFD45C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CalApplicationProposed Message::GetCalApplicationProposed()
    Oculus::Platform::Models::CalApplicationProposed* GetCalApplicationProposed();
  }; // Oculus.Platform.MessageWithCalApplicationProposed
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCalApplicationProposed*, "Oculus.Platform", "MessageWithCalApplicationProposed");
#pragma pack(pop)
