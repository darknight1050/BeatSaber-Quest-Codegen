// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.TypeStringFormatter
#include "ModestTree/TypeStringFormatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  // Autogenerated type: ModestTree.TypeStringFormatter/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D92EC8
  class TypeStringFormatter::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly ModestTree.TypeStringFormatter/<>c <>9
    static ModestTree::TypeStringFormatter::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.TypeStringFormatter/<>c <>9
    static void _set_$$9(ModestTree::TypeStringFormatter::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static void _set_$$9__2_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10E73E0
    static void _cctor();
    // System.String <PrettyNameInternal>b__2_0(System.Type t)
    // Offset: 0x10E7450
    ::Il2CppString* $PrettyNameInternal$b__2_0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0x10E7448
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeStringFormatter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeStringFormatter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeStringFormatter::$$c*, creationType>()));
    }
  }; // ModestTree.TypeStringFormatter/<>c
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeStringFormatter::$$c*, "ModestTree", "TypeStringFormatter/<>c");
#pragma pack(pop)
