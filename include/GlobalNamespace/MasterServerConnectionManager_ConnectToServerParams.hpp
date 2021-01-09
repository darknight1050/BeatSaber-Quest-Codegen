// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
#include "GlobalNamespace/MasterServerConnectionManager_MasterServerConnectionManagerParamsBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  // Autogenerated type: MasterServerConnectionManager/ConnectToServerParams
  // [] Offset: FFFFFFFF
  class MasterServerConnectionManager::ConnectToServerParams : public GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase {
    public:
    // public System.String secret
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x48
    System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.String serverUserId
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* serverUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String serverUserName
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* serverUserName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ConnectToServerParams
    ConnectToServerParams(::Il2CppString* secret_ = {}, ::Il2CppString* code_ = {}, ::Il2CppString* password_ = {}, System::Net::IPEndPoint* endPoint_ = {}, ::Il2CppString* serverUserId_ = {}, ::Il2CppString* serverUserName_ = {}) noexcept : secret{secret_}, code{code_}, password{password_}, endPoint{endPoint_}, serverUserId{serverUserId_}, serverUserName{serverUserName_} {}
    // public System.Void .ctor()
    // Offset: 0x1AE71E4
    // Implemented from: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
    // Base method: System.Void MasterServerConnectionManagerParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::ConnectToServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::ConnectToServerParams*, creationType>()));
    }
  }; // MasterServerConnectionManager/ConnectToServerParams
  static check_size<sizeof(MasterServerConnectionManager::ConnectToServerParams), 88 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerConnectionManager_ConnectToServerParamsSizeCheck;
  static_assert(sizeof(MasterServerConnectionManager::ConnectToServerParams) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams*, "", "MasterServerConnectionManager/ConnectToServerParams");
#pragma pack(pop)
