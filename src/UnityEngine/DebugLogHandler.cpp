// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.DebugLogHandler
#include "UnityEngine/DebugLogHandler.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Including type: UnityEngine.LogOption
#include "UnityEngine/LogOption.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.DebugLogHandler.Internal_Log
void UnityEngine::DebugLogHandler::Internal_Log(UnityEngine::LogType level, UnityEngine::LogOption options, ::CsString* msg, UnityEngine::Object* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "DebugLogHandler", "Internal_Log", level, options, msg, obj));
}
// Autogenerated method: UnityEngine.DebugLogHandler.Internal_LogException
void UnityEngine::DebugLogHandler::Internal_LogException(System::Exception* exception, UnityEngine::Object* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "DebugLogHandler", "Internal_LogException", exception, obj));
}
// Autogenerated method: UnityEngine.DebugLogHandler.LogFormat
void UnityEngine::DebugLogHandler::LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::CsString* format, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogFormat", logType, context, format, args));
}
// Autogenerated method: UnityEngine.DebugLogHandler.LogException
void UnityEngine::DebugLogHandler::LogException(System::Exception* exception, UnityEngine::Object* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogException", exception, context));
}
// Autogenerated method: UnityEngine.DebugLogHandler..ctor
UnityEngine::DebugLogHandler* UnityEngine::DebugLogHandler::New_ctor() {
  return (DebugLogHandler*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "DebugLogHandler"));
}
