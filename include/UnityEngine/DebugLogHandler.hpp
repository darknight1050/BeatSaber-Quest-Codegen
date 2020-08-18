// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
  // Forward declaring type: LogOption
  struct LogOption;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.DebugLogHandler
  class DebugLogHandler : public UnityEngine::ILogHandler, public ::Il2CppObject {
    public:
    // static System.Void Internal_Log(UnityEngine.LogType level, UnityEngine.LogOption options, System.String msg, UnityEngine.Object obj)
    // Offset: 0x1267E44
    static void Internal_Log(UnityEngine::LogType level, UnityEngine::LogOption options, ::Il2CppString* msg, UnityEngine::Object* obj);
    // static System.Void Internal_LogException(System.Exception exception, UnityEngine.Object obj)
    // Offset: 0x1267EAC
    static void Internal_LogException(System::Exception* exception, UnityEngine::Object* obj);
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, System.Object[] args)
    // Offset: 0x1267EFC
    // Implemented from: UnityEngine.ILogHandler
    // Base method: System.Void ILogHandler::LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x1267F68
    // Implemented from: UnityEngine.ILogHandler
    // Base method: System.Void ILogHandler::LogException(System.Exception exception, UnityEngine.Object context)
    void LogException(System::Exception* exception, UnityEngine::Object* context);
    // public System.Void .ctor()
    // Offset: 0x1267DF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DebugLogHandler* New_ctor();
  }; // UnityEngine.DebugLogHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DebugLogHandler*, "UnityEngine", "DebugLogHandler");
#pragma pack(pop)
