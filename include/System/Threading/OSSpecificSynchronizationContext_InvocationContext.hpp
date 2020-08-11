// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/InvocationContext
  class OSSpecificSynchronizationContext::InvocationContext : public ::CsObject {
    public:
    // private System.Threading.SendOrPostCallback m_Delegate
    // Offset: 0x10
    System::Threading::SendOrPostCallback* m_Delegate;
    // private System.Object m_State
    // Offset: 0x18
    ::CsObject* m_State;
    // public System.Void .ctor(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x13C67F8
    static OSSpecificSynchronizationContext::InvocationContext* New_ctor(System::Threading::SendOrPostCallback* d, ::CsObject* state);
    // public System.Void Invoke()
    // Offset: 0x13C684C
    void Invoke();
  }; // System.Threading.OSSpecificSynchronizationContext/InvocationContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext::InvocationContext*, "System.Threading", "OSSpecificSynchronizationContext/InvocationContext");
#pragma pack(pop)
