// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NUnit.Framework.Interfaces.ICommandWrapper
#include "NUnit/Framework/Interfaces/ICommandWrapper.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IWrapSetUpTearDown
  class IWrapSetUpTearDown/*, public NUnit::Framework::Interfaces::ICommandWrapper*/ {
    public:
    // Creating value type constructor for type: IWrapSetUpTearDown
    IWrapSetUpTearDown() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ICommandWrapper
    operator NUnit::Framework::Interfaces::ICommandWrapper() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ICommandWrapper*>(this);
    }
  }; // NUnit.Framework.Interfaces.IWrapSetUpTearDown
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IWrapSetUpTearDown*, "NUnit.Framework.Interfaces", "IWrapSetUpTearDown");
