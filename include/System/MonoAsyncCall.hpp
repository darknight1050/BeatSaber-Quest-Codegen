// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.MonoAsyncCall
  class MonoAsyncCall : public ::Il2CppObject {
    public:
    // private System.Object msg
    // Offset: 0x10
    ::Il2CppObject* msg;
    // private System.IntPtr cb_method
    // Offset: 0x18
    System::IntPtr cb_method;
    // private System.Object cb_target
    // Offset: 0x20
    ::Il2CppObject* cb_target;
    // private System.Object state
    // Offset: 0x28
    ::Il2CppObject* state;
    // private System.Object res
    // Offset: 0x30
    ::Il2CppObject* res;
    // private System.Object out_args
    // Offset: 0x38
    ::Il2CppObject* out_args;
    // public System.Void .ctor()
    // Offset: 0xF72BB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MonoAsyncCall* New_ctor();
  }; // System.MonoAsyncCall
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::MonoAsyncCall*, "System", "MonoAsyncCall");
#pragma pack(pop)
