// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: GroupPresenceLeaveIntent
  class GroupPresenceLeaveIntent;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithGroupPresenceLeaveIntent
  class MessageWithGroupPresenceLeaveIntent : public Oculus::Platform::Message_1<Oculus::Platform::Models::GroupPresenceLeaveIntent*> {
    public:
    // Creating value type constructor for type: MessageWithGroupPresenceLeaveIntent
    MessageWithGroupPresenceLeaveIntent() noexcept {}
    // protected Oculus.Platform.Models.GroupPresenceLeaveIntent GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14B41D0
    Oculus::Platform::Models::GroupPresenceLeaveIntent* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14AFB48
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithGroupPresenceLeaveIntent* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithGroupPresenceLeaveIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithGroupPresenceLeaveIntent*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.GroupPresenceLeaveIntent GetGroupPresenceLeaveIntent()
    // Offset: 0x14B418C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.GroupPresenceLeaveIntent Message::GetGroupPresenceLeaveIntent()
    Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();
  }; // Oculus.Platform.MessageWithGroupPresenceLeaveIntent
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithGroupPresenceLeaveIntent*, "Oculus.Platform", "MessageWithGroupPresenceLeaveIntent");
