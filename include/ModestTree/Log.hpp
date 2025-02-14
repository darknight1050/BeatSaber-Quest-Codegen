// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Log
  class Log : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Log
    Log() noexcept {}
    // static public System.Void Debug(System.String message, params System.Object[] args)
    // Offset: 0x13676EC
    static void Debug(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Debug(System.String message, params System.Object[] args)
    static void Debug(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Debug(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Debug(::Il2CppString* message, TParams&&... args) {
      Debug(message, {args...});
    }
    // static public System.Void Info(System.String message, params System.Object[] args)
    // Offset: 0x13676F0
    static void Info(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Info(System.String message, params System.Object[] args)
    static void Info(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Info(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Info(::Il2CppString* message, TParams&&... args) {
      Info(message, {args...});
    }
    // static public System.Void Warn(System.String message, params System.Object[] args)
    // Offset: 0x1366F8C
    static void Warn(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Warn(System.String message, params System.Object[] args)
    static void Warn(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Warn(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Warn(::Il2CppString* message, TParams&&... args) {
      Warn(message, {args...});
    }
    // static public System.Void Trace(System.String message, params System.Object[] args)
    // Offset: 0x1367778
    static void Trace(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Trace(System.String message, params System.Object[] args)
    static void Trace(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Trace(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Trace(::Il2CppString* message, TParams&&... args) {
      Trace(message, {args...});
    }
    // static public System.Void ErrorException(System.Exception e)
    // Offset: 0x1367800
    static void ErrorException(System::Exception* e);
    // static public System.Void ErrorException(System.String message, System.Exception e)
    // Offset: 0x1367868
    static void ErrorException(::Il2CppString* message, System::Exception* e);
    // static public System.Void Error(System.String message, params System.Object[] args)
    // Offset: 0x13678E8
    static void Error(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Error(System.String message, params System.Object[] args)
    static void Error(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Error(System.String message, params System.Object[] args)
    template<class ...TParams>
    static void Error(::Il2CppString* message, TParams&&... args) {
      Error(message, {args...});
    }
  }; // ModestTree.Log
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Log*, "ModestTree", "Log");
