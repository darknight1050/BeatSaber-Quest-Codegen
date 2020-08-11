// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ILogHandler.LogFormat
void UnityEngine::ILogHandler::LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::CsString* format, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogFormat", logType, context, format, args));
}
// Autogenerated method: UnityEngine.ILogHandler.LogException
void UnityEngine::ILogHandler::LogException(System::Exception* exception, UnityEngine::Object* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogException", exception, context));
}
