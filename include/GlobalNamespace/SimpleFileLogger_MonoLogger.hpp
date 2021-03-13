// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleFileLogger
#include "GlobalNamespace/SimpleFileLogger.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SimpleFileLogger/MonoLogger
  // [] Offset: FFFFFFFF
  class SimpleFileLogger::MonoLogger : public UnityEngine::MonoBehaviour {
    public:
    // private readonly System.Collections.Generic.List`1<System.String> _lines
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* lines;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: MonoLogger
    MonoLogger(System::Collections::Generic::List_1<::Il2CppString*>* lines_ = {}) noexcept : lines{lines_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0x211E3C8
    void OnDestroy();
    // public System.Void Log(System.String text)
    // Offset: 0x211E060
    void Log(::Il2CppString* text);
    // public System.Void Clear()
    // Offset: 0x211E354
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x211E41C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleFileLogger::MonoLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleFileLogger::MonoLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleFileLogger::MonoLogger*, creationType>()));
    }
  }; // SimpleFileLogger/MonoLogger
  #pragma pack(pop)
  static check_size<sizeof(SimpleFileLogger::MonoLogger), 24 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __GlobalNamespace_SimpleFileLogger_MonoLoggerSizeCheck;
  static_assert(sizeof(SimpleFileLogger::MonoLogger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleFileLogger::MonoLogger*, "", "SimpleFileLogger/MonoLogger");
