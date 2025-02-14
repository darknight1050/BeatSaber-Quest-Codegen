// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnNetworkReceive
  class EventBasedNetListener::OnNetworkReceive : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnNetworkReceive
    OnNetworkReceive() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B21418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnNetworkReceive* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnNetworkReceive::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnNetworkReceive*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1B1FE2C
    void Invoke(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B21428
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B214C8
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnNetworkReceive
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnNetworkReceive*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceive");
