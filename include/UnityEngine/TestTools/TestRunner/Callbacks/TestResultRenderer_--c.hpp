// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
#include "UnityEngine/TestTools/TestRunner/Callbacks/TestResultRenderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x10
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE6798
  class TestResultRenderer::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c <>9
    static UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__8_0
    static System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1194EFC
    static void _cctor();
    // System.String <Draw>b__8_0(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x1194F6C
    ::Il2CppString* $Draw$b__8_0(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x1194F64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestResultRenderer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestResultRenderer::$$c*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRenderer/<>c");
#pragma pack(pop)
