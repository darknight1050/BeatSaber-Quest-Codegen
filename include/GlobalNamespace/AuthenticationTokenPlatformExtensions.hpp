// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Including type: UserInfo
#include "GlobalNamespace/UserInfo.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AuthenticationTokenPlatformExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AuthenticationTokenPlatformExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AuthenticationTokenPlatformExtensions
    AuthenticationTokenPlatformExtensions() noexcept {}
    // static public AuthenticationToken/Platform ToAuthenticationTokenPlatform(UserInfo/Platform platform)
    // Offset: 0x100006C
    static GlobalNamespace::AuthenticationToken::Platform ToAuthenticationTokenPlatform(GlobalNamespace::UserInfo::Platform platform);
    // static public UserInfo/Platform ToUserInfoPlatform(AuthenticationToken/Platform platform)
    // Offset: 0x1000098
    static GlobalNamespace::UserInfo::Platform ToUserInfoPlatform(GlobalNamespace::AuthenticationToken::Platform platform);
  }; // AuthenticationTokenPlatformExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationTokenPlatformExtensions*, "", "AuthenticationTokenPlatformExtensions");
