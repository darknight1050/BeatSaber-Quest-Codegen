// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Warning
  class Warning : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::Warning::Logger
    class Logger;
    // Creating value type constructor for type: Warning
    Warning() noexcept {}
    // Get static field: static public System.Boolean logged
    static bool _get_logged();
    // Set static field: static public System.Boolean logged
    static void _set_logged(bool value);
    // static public System.Void Log(System.String message, RootMotion.Warning/Logger logger, System.Boolean logInEditMode)
    // Offset: 0x1A9B290
    static void Log(::Il2CppString* message, RootMotion::Warning::Logger* logger, bool logInEditMode);
    // static public System.Void Log(System.String message, UnityEngine.Transform context, System.Boolean logInEditMode)
    // Offset: 0x1A84E68
    static void Log(::Il2CppString* message, UnityEngine::Transform* context, bool logInEditMode);
  }; // RootMotion.Warning
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Warning*, "RootMotion", "Warning");
