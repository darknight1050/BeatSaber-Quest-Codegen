// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.SetUpTearDownCommand
#include "UnityEngine/TestTools/SetUpTearDownCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.SetUpTearDownCommand/<>c
  class SetUpTearDownCommand::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.SetUpTearDownCommand/<>c <>9
    static UnityEngine::TestTools::SetUpTearDownCommand::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.SetUpTearDownCommand/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::SetUpTearDownCommand::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__1_0
    static System::Func_2<System::Reflection::MethodInfo*, bool>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<System::Reflection::MethodInfo*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xD9F46C
    static void _cctor();
    // System.Boolean <GetMethodsWithAttributeFromFixture>b__1_0(System.Reflection.MethodInfo x)
    // Offset: 0xD9F4DC
    bool $GetMethodsWithAttributeFromFixture$b__1_0(System::Reflection::MethodInfo* x);
    // public System.Void .ctor()
    // Offset: 0xD9F4D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SetUpTearDownCommand::$$c* New_ctor();
  }; // UnityEngine.TestTools.SetUpTearDownCommand/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::SetUpTearDownCommand::$$c*, "UnityEngine.TestTools", "SetUpTearDownCommand/<>c");
#pragma pack(pop)
