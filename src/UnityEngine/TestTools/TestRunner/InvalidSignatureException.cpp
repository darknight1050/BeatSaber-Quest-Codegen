// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.InvalidSignatureException
#include "UnityEngine/TestTools/TestRunner/InvalidSignatureException.hpp"
// Including type: NUnit.Framework.Interfaces.ResultState
#include "NUnit/Framework/Interfaces/ResultState.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.TestRunner.InvalidSignatureException..ctor
UnityEngine::TestTools::TestRunner::InvalidSignatureException* UnityEngine::TestTools::TestRunner::InvalidSignatureException::New_ctor(::CsString* message) {
  return (InvalidSignatureException*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.TestRunner", "InvalidSignatureException", message));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.InvalidSignatureException.get_ResultState
NUnit::Framework::Interfaces::ResultState* UnityEngine::TestTools::TestRunner::InvalidSignatureException::get_ResultState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::ResultState*>(this, "get_ResultState"));
}
