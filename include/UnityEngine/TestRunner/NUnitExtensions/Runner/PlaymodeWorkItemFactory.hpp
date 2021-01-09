// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/WorkItemFactory.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.PlaymodeWorkItemFactory
  // [] Offset: FFFFFFFF
  class PlaymodeWorkItemFactory : public UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory {
    public:
    // Creating value type constructor for type: PlaymodeWorkItemFactory
    PlaymodeWorkItemFactory() noexcept {}
    // protected override UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem Create(NUnit.Framework.Internal.TestMethod method, NUnit.Framework.Interfaces.ITestFilter filter, NUnit.Framework.Interfaces.ITest loadedTest)
    // Offset: 0x1184870
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
    // Base method: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem WorkItemFactory::Create(NUnit.Framework.Internal.TestMethod method, NUnit.Framework.Interfaces.ITestFilter filter, NUnit.Framework.Interfaces.ITest loadedTest)
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* Create(NUnit::Framework::Internal::TestMethod* method, NUnit::Framework::Interfaces::ITestFilter* filter, NUnit::Framework::Interfaces::ITest* loadedTest);
    // public System.Void .ctor()
    // Offset: 0x11848E0
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
    // Base method: System.Void WorkItemFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeWorkItemFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeWorkItemFactory*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.PlaymodeWorkItemFactory
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "PlaymodeWorkItemFactory");
#pragma pack(pop)
