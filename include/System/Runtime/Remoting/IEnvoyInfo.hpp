// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.IEnvoyInfo
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C96914
  class IEnvoyInfo {
    public:
    // Creating value type constructor for type: IEnvoyInfo
    IEnvoyInfo() noexcept {}
    // public System.Runtime.Remoting.Messaging.IMessageSink get_EnvoySinks()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks_NEW();
  }; // System.Runtime.Remoting.IEnvoyInfo
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::IEnvoyInfo*, "System.Runtime.Remoting", "IEnvoyInfo");
