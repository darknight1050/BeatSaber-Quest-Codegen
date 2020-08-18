// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Channels.IChannelSender
#include "System/Runtime/Remoting/Channels/IChannelSender.hpp"
// Including type: System.Runtime.Remoting.Channels.IChannelReceiver
#include "System/Runtime/Remoting/Channels/IChannelReceiver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Autogenerated type: System.Runtime.Remoting.Channels.CrossAppDomainChannel
  class CrossAppDomainChannel : public System::Runtime::Remoting::Channels::IChannelSender, public System::Runtime::Remoting::Channels::IChannelReceiver, public ::Il2CppObject {
    public:
    // Get static field: static private System.Object s_lock
    static ::Il2CppObject* _get_s_lock();
    // Set static field: static private System.Object s_lock
    static void _set_s_lock(::Il2CppObject* value);
    // static System.Void RegisterCrossAppDomainChannel()
    // Offset: 0xFB5078
    static void RegisterCrossAppDomainChannel();
    // static private System.Void .cctor()
    // Offset: 0xFB573C
    static void _cctor();
    // public System.String get_ChannelName()
    // Offset: 0xFB519C
    // Implemented from: System.Runtime.Remoting.Channels.IChannel
    // Base method: System.String IChannel::get_ChannelName()
    ::Il2CppString* get_ChannelName();
    // public System.Int32 get_ChannelPriority()
    // Offset: 0xFB51E4
    // Implemented from: System.Runtime.Remoting.Channels.IChannel
    // Base method: System.Int32 IChannel::get_ChannelPriority()
    int get_ChannelPriority();
    // public System.Object get_ChannelData()
    // Offset: 0xFB51EC
    // Implemented from: System.Runtime.Remoting.Channels.IChannelReceiver
    // Base method: System.Object IChannelReceiver::get_ChannelData()
    ::Il2CppObject* get_ChannelData();
    // public System.Void StartListening(System.Object data)
    // Offset: 0xFB5314
    // Implemented from: System.Runtime.Remoting.Channels.IChannelReceiver
    // Base method: System.Void IChannelReceiver::StartListening(System.Object data)
    void StartListening(::Il2CppObject* data);
    // public System.Runtime.Remoting.Messaging.IMessageSink CreateMessageSink(System.String url, System.Object data, System.String uri)
    // Offset: 0xFB5318
    // Implemented from: System.Runtime.Remoting.Channels.IChannelSender
    // Base method: System.Runtime.Remoting.Messaging.IMessageSink IChannelSender::CreateMessageSink(System.String url, System.Object data, System.String uri)
    System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::Il2CppString* url, ::Il2CppObject* data, ::Il2CppString*& uri);
    // public System.Void .ctor()
    // Offset: 0xFB5194
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CrossAppDomainChannel* New_ctor();
  }; // System.Runtime.Remoting.Channels.CrossAppDomainChannel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainChannel*, "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
#pragma pack(pop)
