// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ICommandWrapper
  class ICommandWrapper {
    public:
    // public NUnit.Framework.Internal.Commands.TestCommand Wrap(NUnit.Framework.Internal.Commands.TestCommand command)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::Commands::TestCommand* Wrap(NUnit::Framework::Internal::Commands::TestCommand* command);
  }; // NUnit.Framework.Interfaces.ICommandWrapper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ICommandWrapper*, "NUnit.Framework.Interfaces", "ICommandWrapper");
#pragma pack(pop)
