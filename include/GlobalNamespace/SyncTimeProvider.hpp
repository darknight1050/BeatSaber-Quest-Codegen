// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ITimeProvider
#include "GlobalNamespace/ITimeProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SyncTimeProvider
  // [] Offset: FFFFFFFF
  class SyncTimeProvider : public ::Il2CppObject/*, public GlobalNamespace::ITimeProvider*/ {
    public:
    // [InjectAttribute] Offset: 0xD2A248
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: SyncTimeProvider
    SyncTimeProvider(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ITimeProvider
    operator GlobalNamespace::ITimeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::ITimeProvider*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IMultiplayerSessionManager*
    constexpr operator GlobalNamespace::IMultiplayerSessionManager*() const noexcept {
      return multiplayerSessionManager;
    }
    // public System.Single get_time()
    // Offset: 0x101A488
    float get_time_NEW();
    // public System.Void .ctor()
    // Offset: 0x101A53C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SyncTimeProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SyncTimeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SyncTimeProvider*, creationType>()));
    }
  }; // SyncTimeProvider
  #pragma pack(pop)
  static check_size<sizeof(SyncTimeProvider), 16 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_SyncTimeProviderSizeCheck;
  static_assert(sizeof(SyncTimeProvider) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SyncTimeProvider*, "", "SyncTimeProvider");
