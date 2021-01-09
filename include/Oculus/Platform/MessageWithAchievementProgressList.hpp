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
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAchievementProgressList
  // [] Offset: FFFFFFFF
  class MessageWithAchievementProgressList : public Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementProgressList*> {
    public:
    // Creating value type constructor for type: MessageWithAchievementProgressList
    MessageWithAchievementProgressList() noexcept {}
    // protected Oculus.Platform.Models.AchievementProgressList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11D7D68
    Oculus::Platform::Models::AchievementProgressList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11D57E8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAchievementProgressList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithAchievementProgressList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAchievementProgressList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AchievementProgressList GetAchievementProgressList()
    // Offset: 0x11D7D24
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AchievementProgressList Message::GetAchievementProgressList()
    Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList();
  }; // Oculus.Platform.MessageWithAchievementProgressList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAchievementProgressList*, "Oculus.Platform", "MessageWithAchievementProgressList");
