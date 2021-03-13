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
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardEntryList
  // [] Offset: FFFFFFFF
  class MessageWithLeaderboardEntryList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList*> {
    public:
    // Creating value type constructor for type: MessageWithLeaderboardEntryList
    MessageWithLeaderboardEntryList() noexcept {}
    // protected Oculus.Platform.Models.LeaderboardEntryList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x138684C
    Oculus::Platform::Models::LeaderboardEntryList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1380F30
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLeaderboardEntryList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLeaderboardEntryList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLeaderboardEntryList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LeaderboardEntryList GetLeaderboardEntryList()
    // Offset: 0x1386808
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LeaderboardEntryList Message::GetLeaderboardEntryList_NEW()
    Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();
  }; // Oculus.Platform.MessageWithLeaderboardEntryList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardEntryList*, "Oculus.Platform", "MessageWithLeaderboardEntryList");
