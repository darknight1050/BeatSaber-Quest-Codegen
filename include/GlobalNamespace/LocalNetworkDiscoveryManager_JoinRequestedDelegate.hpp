// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  // Autogenerated type: LocalNetworkDiscoveryManager/JoinRequestedDelegate
  // [] Offset: FFFFFFFF
  class LocalNetworkDiscoveryManager::JoinRequestedDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: JoinRequestedDelegate
    JoinRequestedDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A67764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::JoinRequestedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::JoinRequestedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::JoinRequestedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Byte flags)
    // Offset: 0x1A65F7C
    void Invoke(::Il2CppString* userId, System::Net::IPAddress* remoteEndPoint, ::Il2CppString* userName, uint8_t flags);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Byte flags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A67778
    System::IAsyncResult* BeginInvoke(::Il2CppString* userId, System::Net::IPAddress* remoteEndPoint, ::Il2CppString* userName, uint8_t flags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A67828
    void EndInvoke(System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/JoinRequestedDelegate
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRequestedDelegate*, "", "LocalNetworkDiscoveryManager/JoinRequestedDelegate");
#pragma pack(pop)
