// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LobbyPlayersDataModel
#include "GlobalNamespace/LobbyPlayersDataModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: LobbyPlayersDataModel/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF004
  class LobbyPlayersDataModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly LobbyPlayersDataModel/<>c <>9
    static GlobalNamespace::LobbyPlayersDataModel::$$c* _get_$$9();
    // Set static field: static public readonly LobbyPlayersDataModel/<>c <>9
    static void _set_$$9(GlobalNamespace::LobbyPlayersDataModel::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__42_0
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__42_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__42_0
    static void _set_$$9__42_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1AD197C
    static void _cctor();
    // System.String <SetOwnedSongPacks>b__42_0(IBeatmapLevelPack pack)
    // Offset: 0x1AD19EC
    ::Il2CppString* $SetOwnedSongPacks$b__42_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // public System.Void .ctor()
    // Offset: 0x1AD19E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyPlayersDataModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyPlayersDataModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyPlayersDataModel::$$c*, creationType>()));
    }
  }; // LobbyPlayersDataModel/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayersDataModel::$$c*, "", "LobbyPlayersDataModel/<>c");
#pragma pack(pop)
