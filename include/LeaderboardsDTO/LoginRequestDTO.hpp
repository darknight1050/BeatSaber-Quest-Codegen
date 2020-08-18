// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Autogenerated type: LeaderboardsDTO.LoginRequestDTO
  class LoginRequestDTO : public ::Il2CppObject {
    public:
    // public System.String platform
    // Offset: 0x10
    ::Il2CppString* platform;
    // public System.String platformUserId
    // Offset: 0x18
    ::Il2CppString* platformUserId;
    // public System.String platformAuthToken
    // Offset: 0x20
    ::Il2CppString* platformAuthToken;
    // public System.String platformEnviroment
    // Offset: 0x28
    ::Il2CppString* platformEnviroment;
    // public System.String publicUserDisplayName
    // Offset: 0x30
    ::Il2CppString* publicUserDisplayName;
    // public System.String buildVersion
    // Offset: 0x38
    ::Il2CppString* buildVersion;
    // public System.Void .ctor()
    // Offset: 0xB4823C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LoginRequestDTO* New_ctor();
  }; // LeaderboardsDTO.LoginRequestDTO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LoginRequestDTO*, "LeaderboardsDTO", "LoginRequestDTO");
#pragma pack(pop)
