// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Autogenerated type: LeaderboardsDTO.TokenDTO
  class TokenDTO : public ::CsObject {
    public:
    // public System.String token
    // Offset: 0x10
    ::CsString* token;
    // public System.Int32 expireIn
    // Offset: 0x18
    int expireIn;
    // public System.Void .ctor()
    // Offset: 0xB47578
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TokenDTO* New_ctor();
  }; // LeaderboardsDTO.TokenDTO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::TokenDTO*, "LeaderboardsDTO", "TokenDTO");
#pragma pack(pop)
