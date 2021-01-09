// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresencePlatformHandler
#include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: TestRichPresencePlatformHandler
  // [] Offset: FFFFFFFF
  class TestRichPresencePlatformHandler : public ::Il2CppObject/*, public GlobalNamespace::IRichPresencePlatformHandler*/ {
    public:
    // Creating value type constructor for type: TestRichPresencePlatformHandler
    TestRichPresencePlatformHandler() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresencePlatformHandler
    operator GlobalNamespace::IRichPresencePlatformHandler() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresencePlatformHandler*>(this);
    }
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0xFEC9AC
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::SetPresence(IRichPresenceData richPresenceData)
    void SetPresence(GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0xFECA90
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::Clear()
    void Clear();
    // public System.Void .ctor()
    // Offset: 0xFECAFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRichPresencePlatformHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestRichPresencePlatformHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRichPresencePlatformHandler*, creationType>()));
    }
  }; // TestRichPresencePlatformHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestRichPresencePlatformHandler*, "", "TestRichPresencePlatformHandler");
#pragma pack(pop)
