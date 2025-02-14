// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkPlayerModel
#include "GlobalNamespace/LocalNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkPlayerModel/CreatePartyConfig
  class LocalNetworkPlayerModel::CreatePartyConfig : public GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>*/ {
    public:
    // public System.Boolean anyoneCanJoin
    // Size: 0x1
    // Offset: 0x38
    bool anyoneCanJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean otherPlayersCanInvite
    // Size: 0x1
    // Offset: 0x39
    bool otherPlayersCanInvite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CreatePartyConfig
    CreatePartyConfig(bool anyoneCanJoin_ = {}, bool otherPlayersCanInvite_ = {}) noexcept : anyoneCanJoin{anyoneCanJoin_}, otherPlayersCanInvite{otherPlayersCanInvite_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>
    operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x10D3FFC
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkPlayerModel::CreatePartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkPlayerModel::CreatePartyConfig*, creationType>()));
    }
  }; // LocalNetworkPlayerModel/CreatePartyConfig
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkPlayerModel::CreatePartyConfig), 57 + sizeof(bool)> __GlobalNamespace_LocalNetworkPlayerModel_CreatePartyConfigSizeCheck;
  static_assert(sizeof(LocalNetworkPlayerModel::CreatePartyConfig) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig*, "", "LocalNetworkPlayerModel/CreatePartyConfig");
