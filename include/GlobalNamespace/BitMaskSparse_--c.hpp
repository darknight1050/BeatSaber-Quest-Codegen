// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BitMaskSparse
#include "GlobalNamespace/BitMaskSparse.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BitMaskSparse/<>c
  // [CompilerGeneratedAttribute] Offset: DE280C
  class BitMaskSparse::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BitMaskSparse/<>c <>9
    static GlobalNamespace::BitMaskSparse::$$c* _get_$$9();
    // Set static field: static public readonly BitMaskSparse/<>c <>9
    static void _set_$$9(GlobalNamespace::BitMaskSparse::$$c* value);
    // Get static field: static public System.Func`2<System.UInt32,System.String> <>9__8_0
    static System::Func_2<uint, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.UInt32,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<uint, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x232CC60
    static void _cctor();
    // System.String <ToString>b__8_0(System.UInt32 i)
    // Offset: 0x232CCCC
    ::Il2CppString* $ToString$b__8_0(uint i);
    // public System.Void .ctor()
    // Offset: 0x232CCC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitMaskSparse::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BitMaskSparse::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitMaskSparse::$$c*, creationType>()));
    }
  }; // BitMaskSparse/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMaskSparse::$$c*, "", "BitMaskSparse/<>c");
