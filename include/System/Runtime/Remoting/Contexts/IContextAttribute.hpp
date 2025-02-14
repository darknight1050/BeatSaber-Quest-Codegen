// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContextAttribute
  // [ComVisibleAttribute] Offset: D7E2F4
  class IContextAttribute {
    public:
    // Creating value type constructor for type: IContextAttribute
    IContextAttribute() noexcept {}
    // public System.Void GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFF
    void GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Boolean IsContextOK(System.Runtime.Remoting.Contexts.Context ctx, System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFF
    bool IsContextOK(System::Runtime::Remoting::Contexts::Context* ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
  }; // System.Runtime.Remoting.Contexts.IContextAttribute
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContextAttribute*, "System.Runtime.Remoting.Contexts", "IContextAttribute");
