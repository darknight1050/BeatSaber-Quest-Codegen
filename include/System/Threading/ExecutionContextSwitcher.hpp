// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Threading.ExecutionContext/Reader
#include "System/Threading/ExecutionContext_Reader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ExecutionContextSwitcher
  struct ExecutionContextSwitcher : public System::ValueType {
    public:
    // System.Threading.ExecutionContext/Reader outerEC
    // Offset: 0x0
    System::Threading::ExecutionContext::Reader outerEC;
    // System.Boolean outerECBelongsToScope
    // Offset: 0x8
    bool outerECBelongsToScope;
    // System.Object hecsw
    // Offset: 0x10
    ::Il2CppObject* hecsw;
    // System.Threading.Thread thread
    // Offset: 0x18
    System::Threading::Thread* thread;
    // Creating value type constructor for type: ExecutionContextSwitcher
    ExecutionContextSwitcher(System::Threading::ExecutionContext::Reader outerEC_ = {}, bool outerECBelongsToScope_ = {}, ::Il2CppObject* hecsw_ = {}, System::Threading::Thread* thread_ = {}) : outerEC{outerEC_}, outerECBelongsToScope{outerECBelongsToScope_}, hecsw{hecsw_}, thread{thread_} {}
    // System.Boolean UndoNoThrow()
    // Offset: 0x9AD784
    bool UndoNoThrow();
    // System.Void Undo()
    // Offset: 0x9AD78C
    void Undo();
  }; // System.Threading.ExecutionContextSwitcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContextSwitcher, "System.Threading", "ExecutionContextSwitcher");
#pragma pack(pop)
