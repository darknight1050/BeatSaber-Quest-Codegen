// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: Microsoft.Extensions.Logging
namespace Microsoft::Extensions::Logging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Extensions.Logging.ILogger
  // [] Offset: FFFFFFFF
  class ILogger {
    public:
    // Creating value type constructor for type: ILogger
    ILogger() noexcept {}
    // public System.Void LogError(System.String message)
    // Offset: 0xFFFFFFFF
    void LogError_NEW(::Il2CppString* message);
    // public System.Void LogInformation(System.String message)
    // Offset: 0xFFFFFFFF
    void LogInformation_NEW(::Il2CppString* message);
    // public System.Void LogWarning(System.String message)
    // Offset: 0xFFFFFFFF
    void LogWarning_NEW(::Il2CppString* message);
  }; // Microsoft.Extensions.Logging.ILogger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Extensions::Logging::ILogger*, "Microsoft.Extensions.Logging", "ILogger");
