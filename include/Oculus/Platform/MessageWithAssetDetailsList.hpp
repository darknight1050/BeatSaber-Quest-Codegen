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
  // Forward declaring type: AssetDetailsList
  class AssetDetailsList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithAssetDetailsList
  class MessageWithAssetDetailsList : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList*> {
    public:
    // protected Oculus.Platform.Models.AssetDetailsList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xDFC9DC
    Oculus::Platform::Models::AssetDetailsList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xDF9D28
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithAssetDetailsList* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.AssetDetailsList GetAssetDetailsList()
    // Offset: 0xDFC998
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AssetDetailsList Message::GetAssetDetailsList()
    Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();
  }; // Oculus.Platform.MessageWithAssetDetailsList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetDetailsList*, "Oculus.Platform", "MessageWithAssetDetailsList");
#pragma pack(pop)
