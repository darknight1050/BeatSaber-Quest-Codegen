// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficultyDropdown
#include "GlobalNamespace/BeatmapDifficultyDropdown.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
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
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficultyDropdown/<>c
  // [CompilerGeneratedAttribute] Offset: E1266C
  class BeatmapDifficultyDropdown::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BeatmapDifficultyDropdown/<>c <>9
    static GlobalNamespace::BeatmapDifficultyDropdown::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapDifficultyDropdown/<>c <>9
    static void _set_$$9(GlobalNamespace::BeatmapDifficultyDropdown::$$c* value);
    // Get static field: static public System.Func`2<System.Tuple`2<BeatmapDifficultyMask,System.String>,System.String> <>9__11_0
    static System::Func_2<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*, ::Il2CppString*>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<System.Tuple`2<BeatmapDifficultyMask,System.String>,System.String> <>9__11_0
    static void _set_$$9__11_0(System::Func_2<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x11AD208
    static void _cctor();
    // System.String <Start>b__11_0(System.Tuple`2<BeatmapDifficultyMask,System.String> x)
    // Offset: 0x11AD274
    ::Il2CppString* $Start$b__11_0(System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>* x);
    // public System.Void .ctor()
    // Offset: 0x11AD26C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDifficultyDropdown::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDifficultyDropdown::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDifficultyDropdown::$$c*, creationType>()));
    }
  }; // BeatmapDifficultyDropdown/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultyDropdown::$$c*, "", "BeatmapDifficultyDropdown/<>c");
