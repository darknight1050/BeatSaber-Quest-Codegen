// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ILogger
#include "UnityEngine/ILogger.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
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
  // Autogenerated type: UnityEngine.Logger
  class Logger : public ::CsObject, public UnityEngine::ILogger, public UnityEngine::ILogHandler {
    public:
    // private UnityEngine.ILogHandler <logHandler>k__BackingField
    // Offset: 0x10
    UnityEngine::ILogHandler* logHandler;
    // private System.Boolean <logEnabled>k__BackingField
    // Offset: 0x18
    bool logEnabled;
    // private UnityEngine.LogType <filterLogType>k__BackingField
    // Offset: 0x1C
    UnityEngine::LogType filterLogType;
    // public System.Void .ctor(UnityEngine.ILogHandler logHandler)
    // Offset: 0x12F20F4
    static Logger* New_ctor(UnityEngine::ILogHandler* logHandler);
    // public System.Void set_logHandler(UnityEngine.ILogHandler value)
    // Offset: 0x12FAC80
    void set_logHandler(UnityEngine::ILogHandler* value);
    // public System.Boolean get_logEnabled()
    // Offset: 0x12FAC88
    bool get_logEnabled();
    // public System.Void set_logEnabled(System.Boolean value)
    // Offset: 0x12FAC90
    void set_logEnabled(bool value);
    // public UnityEngine.LogType get_filterLogType()
    // Offset: 0x12FAC9C
    UnityEngine::LogType get_filterLogType();
    // public System.Void set_filterLogType(UnityEngine.LogType value)
    // Offset: 0x12FACA4
    void set_filterLogType(UnityEngine::LogType value);
    // public System.Boolean IsLogTypeAllowed(UnityEngine.LogType logType)
    // Offset: 0x12FACAC
    bool IsLogTypeAllowed(UnityEngine::LogType logType);
    // static private System.String GetString(System.Object message)
    // Offset: 0x12FACE8
    static ::CsString* GetString(::CsObject* message);
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0x12FAC78
    // Implemented from: UnityEngine.ILogger
    // Base method: UnityEngine.ILogHandler ILogger::get_logHandler()
    UnityEngine::ILogHandler* get_logHandler();
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0x12FAE18
    // Implemented from: UnityEngine.ILogger
    // Base method: System.Void ILogger::Log(UnityEngine.LogType logType, System.Object message)
    void Log(UnityEngine::LogType logType, ::CsObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0x12FAF98
    // Implemented from: UnityEngine.ILogger
    // Base method: System.Void ILogger::Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    void Log(UnityEngine::LogType logType, ::CsObject* message, UnityEngine::Object* context);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, System.Object[] args)
    // Offset: 0x12FB128
    // Implemented from: UnityEngine.ILogger
    // Base method: System.Void ILogger::LogFormat(UnityEngine.LogType logType, System.String format, System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::CsString* format, ::Array<::CsObject*>* args);
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, System.Object[] args)
    // Offset: 0x12FB23C
    // Implemented from: UnityEngine.ILogHandler
    // Base method: System.Void ILogHandler::LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::CsString* format, ::Array<::CsObject*>* args);
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x12FB354
    // Implemented from: UnityEngine.ILogHandler
    // Base method: System.Void ILogHandler::LogException(System.Exception exception, UnityEngine.Object context)
    void LogException(System::Exception* exception, UnityEngine::Object* context);
  }; // UnityEngine.Logger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Logger*, "UnityEngine", "Logger");
#pragma pack(pop)
