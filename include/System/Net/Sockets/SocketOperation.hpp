// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketOperation
  // [] Offset: FFFFFFFF
  struct SocketOperation/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SocketOperation
    constexpr SocketOperation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketOperation Accept
    static constexpr const int Accept = 0;
    // Get static field: static public System.Net.Sockets.SocketOperation Accept
    static System::Net::Sockets::SocketOperation _get_Accept();
    // Set static field: static public System.Net.Sockets.SocketOperation Accept
    static void _set_Accept(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation Connect
    static constexpr const int Connect = 1;
    // Get static field: static public System.Net.Sockets.SocketOperation Connect
    static System::Net::Sockets::SocketOperation _get_Connect();
    // Set static field: static public System.Net.Sockets.SocketOperation Connect
    static void _set_Connect(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation Receive
    static constexpr const int Receive = 2;
    // Get static field: static public System.Net.Sockets.SocketOperation Receive
    static System::Net::Sockets::SocketOperation _get_Receive();
    // Set static field: static public System.Net.Sockets.SocketOperation Receive
    static void _set_Receive(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation ReceiveFrom
    static constexpr const int ReceiveFrom = 3;
    // Get static field: static public System.Net.Sockets.SocketOperation ReceiveFrom
    static System::Net::Sockets::SocketOperation _get_ReceiveFrom();
    // Set static field: static public System.Net.Sockets.SocketOperation ReceiveFrom
    static void _set_ReceiveFrom(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation Send
    static constexpr const int Send = 4;
    // Get static field: static public System.Net.Sockets.SocketOperation Send
    static System::Net::Sockets::SocketOperation _get_Send();
    // Set static field: static public System.Net.Sockets.SocketOperation Send
    static void _set_Send(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation SendTo
    static constexpr const int SendTo = 5;
    // Get static field: static public System.Net.Sockets.SocketOperation SendTo
    static System::Net::Sockets::SocketOperation _get_SendTo();
    // Set static field: static public System.Net.Sockets.SocketOperation SendTo
    static void _set_SendTo(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation RecvJustCallback
    static constexpr const int RecvJustCallback = 6;
    // Get static field: static public System.Net.Sockets.SocketOperation RecvJustCallback
    static System::Net::Sockets::SocketOperation _get_RecvJustCallback();
    // Set static field: static public System.Net.Sockets.SocketOperation RecvJustCallback
    static void _set_RecvJustCallback(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation SendJustCallback
    static constexpr const int SendJustCallback = 7;
    // Get static field: static public System.Net.Sockets.SocketOperation SendJustCallback
    static System::Net::Sockets::SocketOperation _get_SendJustCallback();
    // Set static field: static public System.Net.Sockets.SocketOperation SendJustCallback
    static void _set_SendJustCallback(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation Disconnect
    static constexpr const int Disconnect = 8;
    // Get static field: static public System.Net.Sockets.SocketOperation Disconnect
    static System::Net::Sockets::SocketOperation _get_Disconnect();
    // Set static field: static public System.Net.Sockets.SocketOperation Disconnect
    static void _set_Disconnect(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation AcceptReceive
    static constexpr const int AcceptReceive = 9;
    // Get static field: static public System.Net.Sockets.SocketOperation AcceptReceive
    static System::Net::Sockets::SocketOperation _get_AcceptReceive();
    // Set static field: static public System.Net.Sockets.SocketOperation AcceptReceive
    static void _set_AcceptReceive(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation ReceiveGeneric
    static constexpr const int ReceiveGeneric = 10;
    // Get static field: static public System.Net.Sockets.SocketOperation ReceiveGeneric
    static System::Net::Sockets::SocketOperation _get_ReceiveGeneric();
    // Set static field: static public System.Net.Sockets.SocketOperation ReceiveGeneric
    static void _set_ReceiveGeneric(System::Net::Sockets::SocketOperation value);
    // static field const value: static public System.Net.Sockets.SocketOperation SendGeneric
    static constexpr const int SendGeneric = 11;
    // Get static field: static public System.Net.Sockets.SocketOperation SendGeneric
    static System::Net::Sockets::SocketOperation _get_SendGeneric();
    // Set static field: static public System.Net.Sockets.SocketOperation SendGeneric
    static void _set_SendGeneric(System::Net::Sockets::SocketOperation value);
  }; // System.Net.Sockets.SocketOperation
  #pragma pack(pop)
  static check_size<sizeof(SocketOperation), 0 + sizeof(int)> __System_Net_Sockets_SocketOperationSizeCheck;
  static_assert(sizeof(SocketOperation) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketOperation, "System.Net.Sockets", "SocketOperation");
