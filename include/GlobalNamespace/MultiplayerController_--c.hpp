// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: MultiplayerController/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF5E4
  class MultiplayerController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerController/<>c <>9
    static GlobalNamespace::MultiplayerController::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerController/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerController::$$c* value);
    // Get static field: static public System.Func`2<LevelCompletionResults,System.Boolean> <>9__40_0
    static System::Func_2<GlobalNamespace::LevelCompletionResults*, bool>* _get_$$9__40_0();
    // Set static field: static public System.Func`2<LevelCompletionResults,System.Boolean> <>9__40_0
    static void _set_$$9__40_0(System::Func_2<GlobalNamespace::LevelCompletionResults*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xFB0C3C
    static void _cctor();
    // System.Boolean <HandleAllResultsCollected>b__40_0(LevelCompletionResults result)
    // Offset: 0xFB0CAC
    bool $HandleAllResultsCollected$b__40_0(GlobalNamespace::LevelCompletionResults* result);
    // public System.Void .ctor()
    // Offset: 0xFB0CA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerController::$$c*, creationType>()));
    }
  }; // MultiplayerController/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::$$c*, "", "MultiplayerController/<>c");
#pragma pack(pop)
