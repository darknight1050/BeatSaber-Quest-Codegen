// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.TestTools.EnumerableRepeatedTestCommand
#include "UnityEngine/TestTools/EnumerableRepeatedTestCommand.hpp"
// Including type: UnityEngine.TestTools.EnumerableRepeatedTestCommand/<ExecuteEnumerable>d__3
#include "UnityEngine/TestTools/EnumerableRepeatedTestCommand_-ExecuteEnumerable-d__3.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: NUnit.Framework.RepeatAttribute/RepeatedTestCommand
#include "NUnit/Framework/RepeatAttribute_RepeatedTestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.EnumerableRepeatedTestCommand..ctor
UnityEngine::TestTools::EnumerableRepeatedTestCommand* UnityEngine::TestTools::EnumerableRepeatedTestCommand::New_ctor(NUnit::Framework::RepeatAttribute::RepeatedTestCommand* commandToReplace) {
  return (EnumerableRepeatedTestCommand*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools", "EnumerableRepeatedTestCommand", commandToReplace));
}
// Autogenerated method: UnityEngine.TestTools.EnumerableRepeatedTestCommand.Execute
NUnit::Framework::Internal::TestResult* UnityEngine::TestTools::EnumerableRepeatedTestCommand::Execute(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "Execute", context));
}
// Autogenerated method: UnityEngine.TestTools.EnumerableRepeatedTestCommand.ExecuteEnumerable
System::Collections::IEnumerable* UnityEngine::TestTools::EnumerableRepeatedTestCommand::ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerable*>(this, "ExecuteEnumerable", context));
}
