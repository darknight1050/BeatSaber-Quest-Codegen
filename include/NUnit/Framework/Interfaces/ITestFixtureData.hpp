// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Interfaces.ITestData
#include "NUnit/Framework/Interfaces/ITestData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITestFixtureData
  class ITestFixtureData : public NUnit::Framework::Interfaces::ITestData {
    public:
    // public System.Type[] get_TypeArgs()
    // Offset: 0xFFFFFFFF
    ::Array<System::Type*>* get_TypeArgs();
  }; // NUnit.Framework.Interfaces.ITestFixtureData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestFixtureData*, "NUnit.Framework.Interfaces", "ITestFixtureData");
#pragma pack(pop)
