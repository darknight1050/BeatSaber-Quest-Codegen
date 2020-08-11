// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.GUI.TestRunnerFilter
  class TestRunnerFilter : public ::CsObject {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::GUI::TestRunnerFilter::$$c
    class $$c;
    // public System.String[] assemblyNames
    // Offset: 0x10
    ::Array<::CsString*>* assemblyNames;
    // public System.String[] groupNames
    // Offset: 0x18
    ::Array<::CsString*>* groupNames;
    // public System.String[] categoryNames
    // Offset: 0x20
    ::Array<::CsString*>* categoryNames;
    // Get static field: static public UnityEngine.TestTools.TestRunner.GUI.TestRunnerFilter empty
    static UnityEngine::TestTools::TestRunner::GUI::TestRunnerFilter* _get_empty();
    // Set static field: static public UnityEngine.TestTools.TestRunner.GUI.TestRunnerFilter empty
    static void _set_empty(UnityEngine::TestTools::TestRunner::GUI::TestRunnerFilter* value);
    // public System.String[] testNames
    // Offset: 0x28
    ::Array<::CsString*>* testNames;
    // public System.Int32 testRepetitions
    // Offset: 0x30
    int testRepetitions;
    // public System.Boolean synchronousOnly
    // Offset: 0x34
    bool synchronousOnly;
    // public NUnit.Framework.Interfaces.ITestFilter BuildNUnitFilter()
    // Offset: 0xE30300
    NUnit::Framework::Interfaces::ITestFilter* BuildNUnitFilter();
    // static private System.Void .cctor()
    // Offset: 0xE30898
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xE30888
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestRunnerFilter* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.GUI.TestRunnerFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::GUI::TestRunnerFilter*, "UnityEngine.TestTools.TestRunner.GUI", "TestRunnerFilter");
#pragma pack(pop)
