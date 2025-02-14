// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestTools.TestRunner.RunStartedEvent
  class RunStartedEvent : public UnityEngine::Events::UnityEvent_1<NUnit::Framework::Interfaces::ITest*> {
    public:
    // Creating value type constructor for type: RunStartedEvent
    RunStartedEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x14A3680
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunStartedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::RunStartedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunStartedEvent*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.RunStartedEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::RunStartedEvent*, "UnityEngine.TestTools.TestRunner", "RunStartedEvent");
