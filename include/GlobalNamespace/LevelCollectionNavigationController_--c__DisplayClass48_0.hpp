// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelCollectionNavigationController
#include "GlobalNamespace/LevelCollectionNavigationController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: LevelCollectionNavigationController/<>c__DisplayClass48_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBFA94
  class LevelCollectionNavigationController::$$c__DisplayClass48_0 : public ::Il2CppObject {
    public:
    // public LevelCollectionNavigationController <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::LevelCollectionNavigationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCollectionNavigationController*) == 0x8);
    // public HMUI.ViewController viewController
    // Size: 0x8
    // Offset: 0x18
    HMUI::ViewController* viewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass48_0
    $$c__DisplayClass48_0(GlobalNamespace::LevelCollectionNavigationController* $$4__this_ = {}, HMUI::ViewController* viewController_ = {}) noexcept : $$4__this{$$4__this_}, viewController{viewController_} {}
    // System.Void <PresentDetailViewController>b__0()
    // Offset: 0xF21AF0
    void $PresentDetailViewController$b__0();
    // public System.Void .ctor()
    // Offset: 0xF21880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionNavigationController::$$c__DisplayClass48_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass48_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionNavigationController::$$c__DisplayClass48_0*, creationType>()));
    }
  }; // LevelCollectionNavigationController/<>c__DisplayClass48_0
  static check_size<sizeof(LevelCollectionNavigationController::$$c__DisplayClass48_0), 24 + sizeof(HMUI::ViewController*)> __GlobalNamespace_LevelCollectionNavigationController_$$c__DisplayClass48_0SizeCheck;
  static_assert(sizeof(LevelCollectionNavigationController::$$c__DisplayClass48_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass48_0*, "", "LevelCollectionNavigationController/<>c__DisplayClass48_0");
#pragma pack(pop)
