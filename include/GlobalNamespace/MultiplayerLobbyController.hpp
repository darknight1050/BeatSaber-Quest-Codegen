// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLobbyAvatarManager
  class MultiplayerLobbyAvatarManager;
  // Forward declaring type: MultiplayerLobbyCenterStageManager
  class MultiplayerLobbyCenterStageManager;
  // Forward declaring type: MultiplayerLobbyAvatarPlaceManager
  class MultiplayerLobbyAvatarPlaceManager;
  // Forward declaring type: MenuEnvironmentManager
  class MenuEnvironmentManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  // Autogenerated type: MultiplayerLobbyController
  // [] Offset: FFFFFFFF
  class MultiplayerLobbyController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _innerCircleRadius
    // Size: 0x4
    // Offset: 0x18
    float innerCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOuterCircleRadius
    // Size: 0x4
    // Offset: 0x1C
    float minOuterCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xDCED30
    // private readonly MultiplayerLobbyAvatarManager _multiplayerLobbyAvatarManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLobbyAvatarManager* multiplayerLobbyAvatarManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDCED40
    // private readonly MultiplayerLobbyCenterStageManager _multiplayerLobbyCenterStageManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerLobbyCenterStageManager* multiplayerLobbyCenterStageManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyCenterStageManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDCED50
    // private readonly MultiplayerLobbyAvatarPlaceManager _multiplayerLobbyAvatarPlaceManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* multiplayerLobbyAvatarPlaceManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDCED60
    // private readonly MenuEnvironmentManager _menuEnvironmentManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MenuEnvironmentManager* menuEnvironmentManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuEnvironmentManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCED70
    // private System.Boolean <lobbyActivated>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool lobbyActivated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerLobbyController
    MultiplayerLobbyController(float innerCircleRadius_ = {}, float minOuterCircleRadius_ = {}, GlobalNamespace::MultiplayerLobbyAvatarManager* multiplayerLobbyAvatarManager_ = {}, GlobalNamespace::MultiplayerLobbyCenterStageManager* multiplayerLobbyCenterStageManager_ = {}, GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* multiplayerLobbyAvatarPlaceManager_ = {}, GlobalNamespace::MenuEnvironmentManager* menuEnvironmentManager_ = {}, bool lobbyActivated_ = {}) noexcept : innerCircleRadius{innerCircleRadius_}, minOuterCircleRadius{minOuterCircleRadius_}, multiplayerLobbyAvatarManager{multiplayerLobbyAvatarManager_}, multiplayerLobbyCenterStageManager{multiplayerLobbyCenterStageManager_}, multiplayerLobbyAvatarPlaceManager{multiplayerLobbyAvatarPlaceManager_}, menuEnvironmentManager{menuEnvironmentManager_}, lobbyActivated{lobbyActivated_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_lobbyActivated()
    // Offset: 0xF6B1E4
    bool get_lobbyActivated();
    // private System.Void set_lobbyActivated(System.Boolean value)
    // Offset: 0xF6B1EC
    void set_lobbyActivated(bool value);
    // public System.Void ActivateMultiplayerLobby()
    // Offset: 0xF6B1F8
    void ActivateMultiplayerLobby();
    // public System.Void DeactivateMultiplayerLobby()
    // Offset: 0xF6B2A4
    void DeactivateMultiplayerLobby();
    // public System.Void .ctor()
    // Offset: 0xF6B324
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyController*, creationType>()));
    }
  }; // MultiplayerLobbyController
  static check_size<sizeof(MultiplayerLobbyController), 64 + sizeof(bool)> __GlobalNamespace_MultiplayerLobbyControllerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyController) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyController*, "", "MultiplayerLobbyController");
#pragma pack(pop)
