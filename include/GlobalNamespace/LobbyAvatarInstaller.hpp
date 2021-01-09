// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: LobbyAvatarInstaller
  // [] Offset: FFFFFFFF
  class LobbyAvatarInstaller : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xDC23BC
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: LobbyAvatarInstaller
    LobbyAvatarInstaller(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : connectedPlayer{connectedPlayer_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1AC89DC
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1AC8A38
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyAvatarInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyAvatarInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyAvatarInstaller*, creationType>()));
    }
  }; // LobbyAvatarInstaller
  static check_size<sizeof(LobbyAvatarInstaller), 32 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_LobbyAvatarInstallerSizeCheck;
  static_assert(sizeof(LobbyAvatarInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyAvatarInstaller*, "", "LobbyAvatarInstaller");
#pragma pack(pop)
