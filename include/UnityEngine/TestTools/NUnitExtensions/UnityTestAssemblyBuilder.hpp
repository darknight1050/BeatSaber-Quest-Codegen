// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Api.DefaultTestAssemblyBuilder
#include "NUnit/Framework/Api/DefaultTestAssemblyBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestPlatform
  struct TestPlatform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Autogenerated type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
  class UnityTestAssemblyBuilder : public NUnit::Framework::Api::DefaultTestAssemblyBuilder {
    public:
    // Nested type: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3
    class $BuildAsync$d__3;
    // private readonly System.String m_ProductName
    // Offset: 0x18
    ::Il2CppString* m_ProductName;
    // public NUnit.Framework.Interfaces.ITest Build(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform[] testPlatforms, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0xD94790
    NUnit::Framework::Interfaces::ITest* Build(::Array<System::Reflection::Assembly*>* assemblies, ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // public System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest> BuildAsync(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform[] testPlatforms, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0xD9E9A0
    System::Collections::Generic::IEnumerator_1<NUnit::Framework::Interfaces::ITest*>* BuildAsync(::Array<System::Reflection::Assembly*>* assemblies, ::Array<UnityEngine::TestTools::TestPlatform>* testPlatforms, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Object> GetNUnitTestBuilderSettings(UnityEngine.TestTools.TestPlatform testPlatform)
    // Offset: 0xD9EA94
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* GetNUnitTestBuilderSettings(UnityEngine::TestTools::TestPlatform testPlatform);
    // public System.Void .ctor()
    // Offset: 0xD9E920
    // Implemented from: NUnit.Framework.Api.DefaultTestAssemblyBuilder
    // Base method: System.Void DefaultTestAssemblyBuilder::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnityTestAssemblyBuilder* New_ctor();
  }; // UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*, "UnityEngine.TestTools.NUnitExtensions", "UnityTestAssemblyBuilder");
#pragma pack(pop)
