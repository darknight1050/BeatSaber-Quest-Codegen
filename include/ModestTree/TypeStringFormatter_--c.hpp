// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.TypeStringFormatter
#include "ModestTree/TypeStringFormatter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Autogenerated type: ModestTree.TypeStringFormatter/<>c
  class TypeStringFormatter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly ModestTree.TypeStringFormatter/<>c <>9
    static ModestTree::TypeStringFormatter::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.TypeStringFormatter/<>c <>9
    static void _set_$$9(ModestTree::TypeStringFormatter::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static void _set_$$9__2_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xCC0A7C
    static void _cctor();
    // System.String <PrettyNameInternal>b__2_0(System.Type t)
    // Offset: 0xCC0AEC
    ::Il2CppString* $PrettyNameInternal$b__2_0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0xCC0AE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TypeStringFormatter::$$c* New_ctor();
  }; // ModestTree.TypeStringFormatter/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeStringFormatter::$$c*, "ModestTree", "TypeStringFormatter/<>c");
#pragma pack(pop)
