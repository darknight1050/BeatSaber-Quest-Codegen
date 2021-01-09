// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  // Autogenerated type: Oculus.Platform.StandalonePlatform
  // [] Offset: FFFFFFFF
  class StandalonePlatform : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::StandalonePlatform::UnityLogDelegate
    class UnityLogDelegate;
    // Creating value type constructor for type: StandalonePlatform
    StandalonePlatform() noexcept {}
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> InitializeInEditor()
    // Offset: 0x11D00A0
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* InitializeInEditor();
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.UInt64 appID, System.String accessToken)
    // Offset: 0x11E39C4
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(uint64_t appID, ::Il2CppString* accessToken);
    // public System.Void .ctor()
    // Offset: 0x11D0098
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandalonePlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::StandalonePlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandalonePlatform*, creationType>()));
    }
  }; // Oculus.Platform.StandalonePlatform
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::StandalonePlatform*, "Oculus.Platform", "StandalonePlatform");
#pragma pack(pop)
