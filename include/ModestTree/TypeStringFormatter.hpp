// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree
namespace ModestTree {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeStringFormatter
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeStringFormatter : public ::Il2CppObject {
    public:
    // Nested type: ModestTree::TypeStringFormatter::$$c
    class $$c;
    // Creating value type constructor for type: TypeStringFormatter
    TypeStringFormatter() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.String> _prettyNameCache
    static System::Collections::Generic::Dictionary_2<System::Type*, ::Il2CppString*>* _get__prettyNameCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.String> _prettyNameCache
    static void _set__prettyNameCache(System::Collections::Generic::Dictionary_2<System::Type*, ::Il2CppString*>* value);
    // static public System.String PrettyName(System.Type type)
    // Offset: 0x1367970
    static ::Il2CppString* PrettyName(System::Type* type);
    // static private System.String PrettyNameInternal(System.Type type)
    // Offset: 0x13699EC
    static ::Il2CppString* PrettyNameInternal(System::Type* type);
    // static private System.String GetCSharpTypeName(System.String typeName)
    // Offset: 0x1369E20
    static ::Il2CppString* GetCSharpTypeName(::Il2CppString* typeName);
    // static private System.Void .cctor()
    // Offset: 0x136A08C
    static void _cctor();
  }; // ModestTree.TypeStringFormatter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeStringFormatter*, "ModestTree", "TypeStringFormatter");
