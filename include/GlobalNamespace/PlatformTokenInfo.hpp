// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformTokenInfo
  class PlatformTokenInfo : public ::CsObject {
    public:
    // Nested type: GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo
    class PlatformEnvironmentInfo;
    // public readonly System.String platformToken
    // Offset: 0x10
    ::CsString* platformToken;
    // public readonly PlatformTokenInfo/PlatformEnvironmentInfo platformEnvironmentInfo
    // Offset: 0x18
    GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo* platformEnvironmentInfo;
    // public System.Void .ctor(System.String platformToken, PlatformTokenInfo/PlatformEnvironmentInfo platformEnvironmentInfo)
    // Offset: 0xBC2BC0
    static PlatformTokenInfo* New_ctor(::CsString* platformToken, GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo* platformEnvironmentInfo);
  }; // PlatformTokenInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformTokenInfo*, "", "PlatformTokenInfo");
#pragma pack(pop)
