// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelFilteringNavigationController
#include "GlobalNamespace/LevelFilteringNavigationController.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LevelFilteringNavigationController/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C994
  class LevelFilteringNavigationController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly LevelFilteringNavigationController/<>c <>9
    static GlobalNamespace::LevelFilteringNavigationController::$$c* _get_$$9();
    // Set static field: static public readonly LevelFilteringNavigationController/<>c <>9
    static void _set_$$9(GlobalNamespace::LevelFilteringNavigationController::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__28_0
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__28_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__28_0
    static void _set_$$9__28_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__41_0
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__41_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__41_0
    static void _set_$$9__41_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__41_2
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__41_2();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__41_2
    static void _set_$$9__41_2(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1095FB8
    static void _cctor();
    // System.String <Setup>b__28_0(IBeatmapLevelPack pack)
    // Offset: 0x1096024
    ::Il2CppString* $Setup$b__28_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // System.String <SelectAnnotatedBeatmapLevelCollection>b__41_0(IBeatmapLevelPack pack)
    // Offset: 0x10960D0
    ::Il2CppString* $SelectAnnotatedBeatmapLevelCollection$b__41_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // System.String <SelectAnnotatedBeatmapLevelCollection>b__41_2(IBeatmapLevelPack pack)
    // Offset: 0x109617C
    ::Il2CppString* $SelectAnnotatedBeatmapLevelCollection$b__41_2(GlobalNamespace::IBeatmapLevelPack* pack);
    // public System.Void .ctor()
    // Offset: 0x109601C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelFilteringNavigationController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelFilteringNavigationController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelFilteringNavigationController::$$c*, creationType>()));
    }
  }; // LevelFilteringNavigationController/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFilteringNavigationController::$$c*, "", "LevelFilteringNavigationController/<>c");
