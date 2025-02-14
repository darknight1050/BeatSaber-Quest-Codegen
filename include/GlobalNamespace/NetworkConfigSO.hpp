// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: INetworkConfig
#include "GlobalNamespace/INetworkConfig.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NetworkConfigSO
  class NetworkConfigSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::INetworkConfig*/ {
    public:
    // private System.Int32 _maxPartySize
    // Size: 0x4
    // Offset: 0x18
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _discoveryPort
    // Size: 0x4
    // Offset: 0x1C
    int discoveryPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _partyPort
    // Size: 0x4
    // Offset: 0x20
    int partyPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplayerPort
    // Size: 0x4
    // Offset: 0x24
    int multiplayerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _masterServerPort
    // Size: 0x4
    // Offset: 0x28
    int masterServerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: masterServerPort and: masterServerHostName
    char __padding4[0x4] = {};
    // private System.String _masterServerHostName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* masterServerHostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _masterServerStatusUrl
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* masterServerStatusUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NetworkConfigSO
    NetworkConfigSO(int maxPartySize_ = {}, int discoveryPort_ = {}, int partyPort_ = {}, int multiplayerPort_ = {}, int masterServerPort_ = {}, ::Il2CppString* masterServerHostName_ = {}, ::Il2CppString* masterServerStatusUrl_ = {}) noexcept : maxPartySize{maxPartySize_}, discoveryPort{discoveryPort_}, partyPort{partyPort_}, multiplayerPort{multiplayerPort_}, masterServerPort{masterServerPort_}, masterServerHostName{masterServerHostName_}, masterServerStatusUrl{masterServerStatusUrl_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkConfig
    operator GlobalNamespace::INetworkConfig() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkConfig*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Int32 get_maxPartySize()
    // Offset: 0x23EE618
    int get_maxPartySize();
    // public System.Int32 get_discoveryPort()
    // Offset: 0x23EE620
    int get_discoveryPort();
    // public System.Int32 get_partyPort()
    // Offset: 0x23EE628
    int get_partyPort();
    // public System.Int32 get_multiplayerPort()
    // Offset: 0x23EE630
    int get_multiplayerPort();
    // public MasterServerEndPoint get_masterServerEndPoint()
    // Offset: 0x23EE638
    GlobalNamespace::MasterServerEndPoint* get_masterServerEndPoint();
    // public System.String get_masterServerStatusUrl()
    // Offset: 0x23EE6B0
    ::Il2CppString* get_masterServerStatusUrl();
    // public System.Void .ctor()
    // Offset: 0x23EE6B8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkConfigSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkConfigSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkConfigSO*, creationType>()));
    }
  }; // NetworkConfigSO
  #pragma pack(pop)
  static check_size<sizeof(NetworkConfigSO), 56 + sizeof(::Il2CppString*)> __GlobalNamespace_NetworkConfigSOSizeCheck;
  static_assert(sizeof(NetworkConfigSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkConfigSO*, "", "NetworkConfigSO");
