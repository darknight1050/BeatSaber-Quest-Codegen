// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  class MasterServerConnectionManager::MasterServerConnectionManagerParamsBase : public ::Il2CppObject/*, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>*/ {
    public:
    // public MasterServerEndPoint masterServerEndPoint
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MasterServerEndPoint* masterServerEndPoint;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerEndPoint*) == 0x8);
    // public IAuthenticationTokenProvider authenticationTokenProvider
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAuthenticationTokenProvider*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MasterServerConnectionManagerParamsBase
    MasterServerConnectionManagerParamsBase(GlobalNamespace::MasterServerEndPoint* masterServerEndPoint_ = {}, GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}) noexcept : masterServerEndPoint{masterServerEndPoint_}, authenticationTokenProvider{authenticationTokenProvider_}, userId{userId_}, userName{userName_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>
    operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>*>(this);
    }
    // protected System.Void .ctor()
    // Offset: 0x14E1518
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::MasterServerConnectionManagerParamsBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, creationType>()));
    }
  }; // MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  #pragma pack(pop)
  static check_size<sizeof(MasterServerConnectionManager::MasterServerConnectionManagerParamsBase), 40 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerConnectionManager_MasterServerConnectionManagerParamsBaseSizeCheck;
  static_assert(sizeof(MasterServerConnectionManager::MasterServerConnectionManagerParamsBase) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, "", "MasterServerConnectionManager/MasterServerConnectionManagerParamsBase");
