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
  // Forward declaring type: NetSyncSessionsChangedNotification
  class NetSyncSessionsChangedNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification
  class MessageWithNetSyncSessionsChangedNotification : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionsChangedNotification*> {
    public:
    // Creating value type constructor for type: MessageWithNetSyncSessionsChangedNotification
    MessageWithNetSyncSessionsChangedNotification() noexcept {}
    // protected Oculus.Platform.Models.NetSyncSessionsChangedNotification GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14B7640
    Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14B0028
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetSyncSessionsChangedNotification* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetSyncSessionsChangedNotification*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetSyncSessionsChangedNotification GetNetSyncSessionsChangedNotification()
    // Offset: 0x14B75FC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncSessionsChangedNotification Message::GetNetSyncSessionsChangedNotification()
    Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification();
  }; // Oculus.Platform.MessageWithNetSyncSessionsChangedNotification
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*, "Oculus.Platform", "MessageWithNetSyncSessionsChangedNotification");
