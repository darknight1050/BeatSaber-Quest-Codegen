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
  // Forward declaring type: RoomInviteNotification
  class RoomInviteNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithRoomInviteNotification
  class MessageWithRoomInviteNotification : public Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*> {
    public:
    // Creating value type constructor for type: MessageWithRoomInviteNotification
    MessageWithRoomInviteNotification() noexcept {}
    // protected Oculus.Platform.Models.RoomInviteNotification GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14B9550
    Oculus::Platform::Models::RoomInviteNotification* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14B04A8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithRoomInviteNotification* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithRoomInviteNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithRoomInviteNotification*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.RoomInviteNotification GetRoomInviteNotification()
    // Offset: 0x14B950C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.RoomInviteNotification Message::GetRoomInviteNotification()
    Oculus::Platform::Models::RoomInviteNotification* GetRoomInviteNotification();
  }; // Oculus.Platform.MessageWithRoomInviteNotification
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithRoomInviteNotification*, "Oculus.Platform", "MessageWithRoomInviteNotification");
