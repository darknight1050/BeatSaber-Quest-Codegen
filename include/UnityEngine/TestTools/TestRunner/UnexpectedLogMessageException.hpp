// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogMatch
  class LogMatch;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
  // [] Offset: FFFFFFFF
  class UnexpectedLogMessageException : public NUnit::Framework::ResultStateException {
    public:
    // public UnityEngine.TestTools.Logging.LogMatch LogEvent
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::TestTools::Logging::LogMatch* LogEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Logging::LogMatch*) == 0x8);
    // Creating value type constructor for type: UnexpectedLogMessageException
    UnexpectedLogMessageException(UnityEngine::TestTools::Logging::LogMatch* LogEvent_ = {}) noexcept : LogEvent{LogEvent_} {}
    // Creating conversion operator: operator UnityEngine::TestTools::Logging::LogMatch*
    constexpr operator UnityEngine::TestTools::Logging::LogMatch*() const noexcept {
      return LogEvent;
    }
    // public System.Void .ctor(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0x2175164
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnexpectedLogMessageException* New_ctor(UnityEngine::TestTools::Logging::LogMatch* log) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnexpectedLogMessageException*, creationType>(log)));
    }
    // static private System.String BuildMessage(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0x21751A0
    static ::Il2CppString* BuildMessage(UnityEngine::TestTools::Logging::LogMatch* log);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x21751F4
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState_NEW()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public override System.String get_StackTrace()
    // Offset: 0x217525C
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace_NEW()
    ::Il2CppString* get_StackTrace();
  }; // UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
  #pragma pack(pop)
  static check_size<sizeof(UnexpectedLogMessageException), 136 + sizeof(UnityEngine::TestTools::Logging::LogMatch*)> __UnityEngine_TestTools_TestRunner_UnexpectedLogMessageExceptionSizeCheck;
  static_assert(sizeof(UnexpectedLogMessageException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*, "UnityEngine.TestTools.TestRunner", "UnexpectedLogMessageException");
