// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO/UserInfo
  class PlatformUserModelSO::UserInfo : public ::Il2CppObject {
    public:
    // public System.String userId
    // Offset: 0x10
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x18
    ::Il2CppString* userName;
    // public System.Void .ctor()
    // Offset: 0x191DB90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlatformUserModelSO::UserInfo* New_ctor();
  }; // PlatformUserModelSO/UserInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO::UserInfo*, "", "PlatformUserModelSO/UserInfo");
#pragma pack(pop)
