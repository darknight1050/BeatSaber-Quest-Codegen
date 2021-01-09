// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingEnqueueResult
  // [] Offset: FFFFFFFF
  class MessageWithMatchmakingEnqueueResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingEnqueueResult*> {
    public:
    // Creating value type constructor for type: MessageWithMatchmakingEnqueueResult
    MessageWithMatchmakingEnqueueResult() noexcept {}
    // protected Oculus.Platform.Models.MatchmakingEnqueueResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11DC128
    Oculus::Platform::Models::MatchmakingEnqueueResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11D6088
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithMatchmakingEnqueueResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithMatchmakingEnqueueResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithMatchmakingEnqueueResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.MatchmakingEnqueueResult GetMatchmakingEnqueueResult()
    // Offset: 0x11DC0E4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingEnqueueResult Message::GetMatchmakingEnqueueResult()
    Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();
  }; // Oculus.Platform.MessageWithMatchmakingEnqueueResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingEnqueueResult*, "Oculus.Platform", "MessageWithMatchmakingEnqueueResult");
