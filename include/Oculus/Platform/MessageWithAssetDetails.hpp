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
  // Forward declaring type: AssetDetails
  class AssetDetails;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAssetDetails
  // [] Offset: FFFFFFFF
  class MessageWithAssetDetails : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetails*> {
    public:
    // Creating value type constructor for type: MessageWithAssetDetails
    MessageWithAssetDetails() noexcept {}
    // protected Oculus.Platform.Models.AssetDetails GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11D8398
    Oculus::Platform::Models::AssetDetails* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11D5908
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAssetDetails* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithAssetDetails::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAssetDetails*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AssetDetails GetAssetDetails()
    // Offset: 0x11D8354
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AssetDetails Message::GetAssetDetails()
    Oculus::Platform::Models::AssetDetails* GetAssetDetails();
  }; // Oculus.Platform.MessageWithAssetDetails
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetDetails*, "Oculus.Platform", "MessageWithAssetDetails");
