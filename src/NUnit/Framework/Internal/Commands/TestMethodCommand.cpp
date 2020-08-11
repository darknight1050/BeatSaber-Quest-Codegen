// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestMethodCommand
#include "NUnit/Framework/Internal/Commands/TestMethodCommand.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Commands.TestMethodCommand..ctor
NUnit::Framework::Internal::Commands::TestMethodCommand* NUnit::Framework::Internal::Commands::TestMethodCommand::New_ctor(NUnit::Framework::Internal::TestMethod* testMethod) {
  return (TestMethodCommand*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Commands", "TestMethodCommand", testMethod));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.TestMethodCommand.RunTestMethod
::CsObject* NUnit::Framework::Internal::Commands::TestMethodCommand::RunTestMethod(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "RunTestMethod", context));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.TestMethodCommand.RunNonAsyncTestMethod
::CsObject* NUnit::Framework::Internal::Commands::TestMethodCommand::RunNonAsyncTestMethod(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "RunNonAsyncTestMethod", context));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.TestMethodCommand.Execute
NUnit::Framework::Internal::TestResult* NUnit::Framework::Internal::Commands::TestMethodCommand::Execute(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "Execute", context));
}
