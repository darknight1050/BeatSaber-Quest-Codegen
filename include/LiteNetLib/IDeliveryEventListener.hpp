// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.IDeliveryEventListener
  // [] Offset: FFFFFFFF
  class IDeliveryEventListener {
    public:
    // Creating value type constructor for type: IDeliveryEventListener
    IDeliveryEventListener() noexcept {}
    // public System.Void OnMessageDelivered(LiteNetLib.NetPeer peer, System.Object userData)
    // Offset: 0xFFFFFFFF
    void OnMessageDelivered_NEW(LiteNetLib::NetPeer* peer, ::Il2CppObject* userData);
  }; // LiteNetLib.IDeliveryEventListener
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::IDeliveryEventListener*, "LiteNetLib", "IDeliveryEventListener");
