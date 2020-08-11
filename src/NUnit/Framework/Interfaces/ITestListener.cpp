// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NUnit.Framework.Interfaces.ITestListener
#include "NUnit/Framework/Interfaces/ITestListener.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: NUnit.Framework.Interfaces.ITestResult
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
// Including type: NUnit.Framework.Interfaces.TestOutput
#include "NUnit/Framework/Interfaces/TestOutput.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Interfaces.ITestListener.TestStarted
void NUnit::Framework::Interfaces::ITestListener::TestStarted(NUnit::Framework::Interfaces::ITest* test) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestStarted", test));
}
// Autogenerated method: NUnit.Framework.Interfaces.ITestListener.TestFinished
void NUnit::Framework::Interfaces::ITestListener::TestFinished(NUnit::Framework::Interfaces::ITestResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestFinished", result));
}
// Autogenerated method: NUnit.Framework.Interfaces.ITestListener.TestOutput
void NUnit::Framework::Interfaces::ITestListener::TestOutput(NUnit::Framework::Interfaces::TestOutput* output) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestOutput", output));
}
