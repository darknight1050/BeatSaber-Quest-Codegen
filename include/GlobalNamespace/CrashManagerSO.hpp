// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CrashManagerSO
  // [] Offset: FFFFFFFF
  class CrashManagerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _logString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* logString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _stackTrace
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CrashManagerSO
    CrashManagerSO(::Il2CppString* logString_ = {}, ::Il2CppString* stackTrace_ = {}) noexcept : logString{logString_}, stackTrace{stackTrace_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_logString()
    // Offset: 0xFD8020
    ::Il2CppString* get_logString();
    // public System.String get_stackTrace()
    // Offset: 0xFD8028
    ::Il2CppString* get_stackTrace();
    // public System.Void StartCatchingExceptions()
    // Offset: 0xFD8030
    void StartCatchingExceptions();
    // protected System.Void OnDisable()
    // Offset: 0xFD80A4
    void OnDisable();
    // private System.Void HandleLog(System.String logString, System.String stackTrace, UnityEngine.LogType type)
    // Offset: 0xFD8118
    void HandleLog(::Il2CppString* logString, ::Il2CppString* stackTrace, UnityEngine::LogType type);
    // public System.Void .ctor()
    // Offset: 0xFD81BC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrashManagerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CrashManagerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrashManagerSO*, creationType>()));
    }
  }; // CrashManagerSO
  #pragma pack(pop)
  static check_size<sizeof(CrashManagerSO), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_CrashManagerSOSizeCheck;
  static_assert(sizeof(CrashManagerSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrashManagerSO*, "", "CrashManagerSO");
