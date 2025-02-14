// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
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
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CentralLeaderboardViewController/<>c
  // [CompilerGeneratedAttribute] Offset: E126EC
  class CentralLeaderboardViewController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly CentralLeaderboardViewController/<>c <>9
    static GlobalNamespace::CentralLeaderboardViewController::$$c* _get_$$9();
    // Set static field: static public readonly CentralLeaderboardViewController/<>c <>9
    static void _set_$$9(GlobalNamespace::CentralLeaderboardViewController::$$c* value);
    // Get static field: static public System.Func`2<CentralLeaderboardViewController/LeaderboardPanel,System.String> <>9__26_1
    static System::Func_2<GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, ::Il2CppString*>* _get_$$9__26_1();
    // Set static field: static public System.Func`2<CentralLeaderboardViewController/LeaderboardPanel,System.String> <>9__26_1
    static void _set_$$9__26_1(System::Func_2<GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<CentralLeaderboardViewController/ScoreScopeInfo,HMUI.IconSegmentedControl/DataItem> <>9__26_2
    static System::Func_2<GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, HMUI::IconSegmentedControl::DataItem*>* _get_$$9__26_2();
    // Set static field: static public System.Func`2<CentralLeaderboardViewController/ScoreScopeInfo,HMUI.IconSegmentedControl/DataItem> <>9__26_2
    static void _set_$$9__26_2(System::Func_2<GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, HMUI::IconSegmentedControl::DataItem*>* value);
    // Get static field: static public System.Func`2<GameplayModifierParamsSO,System.String> <>9__37_0
    static System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, ::Il2CppString*>* _get_$$9__37_0();
    // Set static field: static public System.Func`2<GameplayModifierParamsSO,System.String> <>9__37_0
    static void _set_$$9__37_0(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x108CDE4
    static void _cctor();
    // System.String <DidActivate>b__26_1(CentralLeaderboardViewController/LeaderboardPanel x)
    // Offset: 0x108CE50
    ::Il2CppString* $DidActivate$b__26_1(GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel* x);
    // HMUI.IconSegmentedControl/DataItem <DidActivate>b__26_2(CentralLeaderboardViewController/ScoreScopeInfo x)
    // Offset: 0x108CE68
    HMUI::IconSegmentedControl::DataItem* $DidActivate$b__26_2(GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo* x);
    // System.String <LoadScoresAsync>b__37_0(GameplayModifierParamsSO m)
    // Offset: 0x108CEE4
    ::Il2CppString* $LoadScoresAsync$b__37_0(GlobalNamespace::GameplayModifierParamsSO* m);
    // public System.Void .ctor()
    // Offset: 0x108CE48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CentralLeaderboardViewController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CentralLeaderboardViewController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CentralLeaderboardViewController::$$c*, creationType>()));
    }
  }; // CentralLeaderboardViewController/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::$$c*, "", "CentralLeaderboardViewController/<>c");
