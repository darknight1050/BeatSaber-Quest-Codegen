// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.CallContextSecurityData
  class CallContextSecurityData : public System::ICloneable, public ::Il2CppObject {
    public:
    // private System.Security.Principal.IPrincipal _principal
    // Offset: 0x10
    System::Security::Principal::IPrincipal* principal;
    // System.Boolean get_HasInfo()
    // Offset: 0xFC3080
    bool get_HasInfo();
    // public System.Object Clone()
    // Offset: 0xFC3090
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public System.Void .ctor()
    // Offset: 0xFC3108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CallContextSecurityData* New_ctor();
  }; // System.Runtime.Remoting.Messaging.CallContextSecurityData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CallContextSecurityData*, "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
#pragma pack(pop)
