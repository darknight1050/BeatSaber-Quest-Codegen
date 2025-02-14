// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HostGameServerLobbyFlowCoordinator
#include "GlobalNamespace/HostGameServerLobbyFlowCoordinator.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HostGameServerLobbyFlowCoordinator/<>c
  // [CompilerGeneratedAttribute] Offset: E1250C
  class HostGameServerLobbyFlowCoordinator::$$c : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c::$$UpdateMissingEntitlementsAsync$b__43_2$d
    struct $$UpdateMissingEntitlementsAsync$b__43_2$d;
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly HostGameServerLobbyFlowCoordinator/<>c <>9
    static GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c* _get_$$9();
    // Set static field: static public readonly HostGameServerLobbyFlowCoordinator/<>c <>9
    static void _set_$$9(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c* value);
    // Get static field: static public System.Func`2<IConnectedPlayer,IConnectedPlayer> <>9__43_0
    static System::Func_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::IConnectedPlayer*>* _get_$$9__43_0();
    // Set static field: static public System.Func`2<IConnectedPlayer,IConnectedPlayer> <>9__43_0
    static void _set_$$9__43_0(System::Func_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::IConnectedPlayer*>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<IConnectedPlayer,System.Threading.Tasks.Task`1<EntitlementsStatus>>,System.Threading.Tasks.Task`1<System.Collections.Generic.KeyValuePair`2<IConnectedPlayer,EntitlementsStatus>>> <>9__43_2
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::IConnectedPlayer*, System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>, System::Threading::Tasks::Task_1<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::EntitlementsStatus>>*>* _get_$$9__43_2();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<IConnectedPlayer,System.Threading.Tasks.Task`1<EntitlementsStatus>>,System.Threading.Tasks.Task`1<System.Collections.Generic.KeyValuePair`2<IConnectedPlayer,EntitlementsStatus>>> <>9__43_2
    static void _set_$$9__43_2(System::Func_2<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::IConnectedPlayer*, System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>, System::Threading::Tasks::Task_1<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::EntitlementsStatus>>*>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerDataModel>,System.Boolean> <>9__47_0
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>, bool>* _get_$$9__47_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerDataModel>,System.Boolean> <>9__47_0
    static void _set_$$9__47_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>, bool>* value);
    // Get static field: static public System.Func`3<System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerDataModel>,System.Boolean> <>9__47_1
    static System::Func_3<bool, System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>, bool>* _get_$$9__47_1();
    // Set static field: static public System.Func`3<System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerDataModel>,System.Boolean> <>9__47_1
    static void _set_$$9__47_1(System::Func_3<bool, System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x106759C
    static void _cctor();
    // IConnectedPlayer <UpdateMissingEntitlementsAsync>b__43_0(IConnectedPlayer player)
    // Offset: 0x1067608
    GlobalNamespace::IConnectedPlayer* $UpdateMissingEntitlementsAsync$b__43_0(GlobalNamespace::IConnectedPlayer* player);
    // System.Threading.Tasks.Task`1<System.Collections.Generic.KeyValuePair`2<IConnectedPlayer,EntitlementsStatus>> <UpdateMissingEntitlementsAsync>b__43_2(System.Collections.Generic.KeyValuePair`2<IConnectedPlayer,System.Threading.Tasks.Task`1<EntitlementsStatus>> pair)
    // Offset: 0x1067610
    System::Threading::Tasks::Task_1<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::EntitlementsStatus>>* $UpdateMissingEntitlementsAsync$b__43_2(System::Collections::Generic::KeyValuePair_2<GlobalNamespace::IConnectedPlayer*, System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*> pair);
    // System.Boolean <CheckIfAllPlayersAreReady>b__47_0(System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerDataModel> keyPlayerPair)
    // Offset: 0x106771C
    bool $CheckIfAllPlayersAreReady$b__47_0(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*> keyPlayerPair);
    // System.Boolean <CheckIfAllPlayersAreReady>b__47_1(System.Boolean current, System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerDataModel> player)
    // Offset: 0x10677C8
    bool $CheckIfAllPlayersAreReady$b__47_1(bool current, System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*> player);
    // public System.Void .ctor()
    // Offset: 0x1067600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostGameServerLobbyFlowCoordinator::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostGameServerLobbyFlowCoordinator::$$c*, creationType>()));
    }
  }; // HostGameServerLobbyFlowCoordinator/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c*, "", "HostGameServerLobbyFlowCoordinator/<>c");
