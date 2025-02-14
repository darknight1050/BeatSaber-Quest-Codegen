// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.AddressablesRuntimeProperties
  class AddressablesRuntimeProperties : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AddressablesRuntimeProperties
    AddressablesRuntimeProperties() noexcept {}
    // Get static field: static private System.Collections.Generic.Stack`1<System.String> s_TokenStack
    static System::Collections::Generic::Stack_1<::Il2CppString*>* _get_s_TokenStack();
    // Set static field: static private System.Collections.Generic.Stack`1<System.String> s_TokenStack
    static void _set_s_TokenStack(System::Collections::Generic::Stack_1<::Il2CppString*>* value);
    // Get static field: static private System.Collections.Generic.Stack`1<System.Int32> s_TokenStartStack
    static System::Collections::Generic::Stack_1<int>* _get_s_TokenStartStack();
    // Set static field: static private System.Collections.Generic.Stack`1<System.Int32> s_TokenStartStack
    static void _set_s_TokenStartStack(System::Collections::Generic::Stack_1<int>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_CachedValues
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* _get_s_CachedValues();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_CachedValues
    static void _set_s_CachedValues(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* value);
    // static private System.Reflection.Assembly[] GetAssemblies()
    // Offset: 0x13D765C
    static ::Array<System::Reflection::Assembly*>* GetAssemblies();
    // static System.Int32 GetCachedValueCount()
    // Offset: 0x13D7680
    static int GetCachedValueCount();
    // static public System.Void SetPropertyValue(System.String name, System.String val)
    // Offset: 0x13D76FC
    static void SetPropertyValue(::Il2CppString* name, ::Il2CppString* val);
    // static public System.Void ClearCachedPropertyValues()
    // Offset: 0x13D7790
    static void ClearCachedPropertyValues();
    // static public System.String EvaluateProperty(System.String name)
    // Offset: 0x13D780C
    static ::Il2CppString* EvaluateProperty(::Il2CppString* name);
    // static public System.String EvaluateString(System.String input)
    // Offset: 0x13CE5E8
    static ::Il2CppString* EvaluateString(::Il2CppString* input);
    // static public System.String EvaluateString(System.String inputString, System.Char startDelimiter, System.Char endDelimiter, System.Func`2<System.String,System.String> varFunc)
    // Offset: 0x13D7C48
    static ::Il2CppString* EvaluateString(::Il2CppString* inputString, ::Il2CppChar startDelimiter, ::Il2CppChar endDelimiter, System::Func_2<::Il2CppString*, ::Il2CppString*>* varFunc);
    // static private System.Void .cctor()
    // Offset: 0x13D813C
    static void _cctor();
  }; // UnityEngine.AddressableAssets.Initialization.AddressablesRuntimeProperties
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*, "UnityEngine.AddressableAssets.Initialization", "AddressablesRuntimeProperties");
