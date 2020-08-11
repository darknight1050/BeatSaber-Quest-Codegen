// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardEntryDTO
  class LeaderboardEntryDTO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HTTPLeaderboardsModel/<>c
  class HTTPLeaderboardsModel::$$c : public ::CsObject {
    public:
    // Get static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static GlobalNamespace::HTTPLeaderboardsModel::$$c* _get_$$9();
    // Set static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static void _set_$$9(GlobalNamespace::HTTPLeaderboardsModel::$$c* value);
    // Get static field: static public System.Func`2<LeaderboardsDTO.LeaderboardEntryDTO,System.String> <>9__12_0
    static System::Func_2<LeaderboardsDTO::LeaderboardEntryDTO*, ::CsString*>* _get_$$9__12_0();
    // Set static field: static public System.Func`2<LeaderboardsDTO.LeaderboardEntryDTO,System.String> <>9__12_0
    static void _set_$$9__12_0(System::Func_2<LeaderboardsDTO::LeaderboardEntryDTO*, ::CsString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xB41BC0
    static void _cctor();
    // System.String <GetLeaderboardEntriesAsync>b__12_0(LeaderboardsDTO.LeaderboardEntryDTO x)
    // Offset: 0xB41C30
    ::CsString* $GetLeaderboardEntriesAsync$b__12_0(LeaderboardsDTO::LeaderboardEntryDTO* x);
    // public System.Void .ctor()
    // Offset: 0xB41C28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPLeaderboardsModel::$$c* New_ctor();
  }; // HTTPLeaderboardsModel/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel::$$c*, "", "HTTPLeaderboardsModel/<>c");
#pragma pack(pop)
