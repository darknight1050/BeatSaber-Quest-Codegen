// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInit/<>c
  class AppInit::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly AppInit/<>c <>9
    static GlobalNamespace::AppInit::$$c* _get_$$9();
    // Set static field: static public readonly AppInit/<>c <>9
    static void _set_$$9(GlobalNamespace::AppInit::$$c* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__7_0
    static System::Func_1<bool>* _get_$$9__7_0();
    // Set static field: static public System.Func`1<System.Boolean> <>9__7_0
    static void _set_$$9__7_0(System::Func_1<bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x18EEFA4
    static void _cctor();
    // System.Boolean <StartCoroutine>b__7_0()
    // Offset: 0x18EF014
    bool $StartCoroutine$b__7_0();
    // public System.Void .ctor()
    // Offset: 0x18EF00C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AppInit::$$c* New_ctor();
  }; // AppInit/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInit::$$c*, "", "AppInit/<>c");
#pragma pack(pop)
