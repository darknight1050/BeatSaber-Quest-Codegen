// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Autogenerated type: UnityEngine.TestTools.Logging.LogMatch
  class LogMatch : public ::Il2CppObject {
    public:
    // private System.Boolean m_UseRegex
    // Offset: 0x10
    bool m_UseRegex;
    // private System.String m_Message
    // Offset: 0x18
    ::Il2CppString* m_Message;
    // private System.String m_MessageRegex
    // Offset: 0x20
    ::Il2CppString* m_MessageRegex;
    // private System.String m_LogType
    // Offset: 0x28
    ::Il2CppString* m_LogType;
    // public System.String get_Message()
    // Offset: 0xD9D7D8
    ::Il2CppString* get_Message();
    // public System.Text.RegularExpressions.Regex get_MessageRegex()
    // Offset: 0xD9D7E0
    System::Text::RegularExpressions::Regex* get_MessageRegex();
    // public System.Nullable`1<UnityEngine.LogType> get_LogType()
    // Offset: 0xD9D858
    System::Nullable_1<UnityEngine::LogType> get_LogType();
    // public System.Boolean Matches(UnityEngine.TestTools.Logging.LogEvent log)
    // Offset: 0xD9D974
    bool Matches(UnityEngine::TestTools::Logging::LogEvent* log);
    // public override System.String ToString()
    // Offset: 0xD9DA4C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0xD9DB14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogMatch* New_ctor();
  }; // UnityEngine.TestTools.Logging.LogMatch
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogMatch*, "UnityEngine.TestTools.Logging", "LogMatch");
#pragma pack(pop)
