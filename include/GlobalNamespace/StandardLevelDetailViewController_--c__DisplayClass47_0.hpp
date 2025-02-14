// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelDetailViewController
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelDetailView
  class StandardLevelDetailView;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelDetailViewController/<>c__DisplayClass47_0
  // [CompilerGeneratedAttribute] Offset: E1282C
  class StandardLevelDetailViewController::$$c__DisplayClass47_0 : public ::Il2CppObject {
    public:
    // public System.Action handleDidPressRefreshButton
    // Size: 0x8
    // Offset: 0x10
    System::Action* handleDidPressRefreshButton;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> handleDidChangeDifficultyBeatmap
    // Size: 0x8
    // Offset: 0x18
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* handleDidChangeDifficultyBeatmap;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // public System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> handleDidFavoriteToggleChange
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* handleDidFavoriteToggleChange;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>*) == 0x8);
    // public StandardLevelDetailViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StandardLevelDetailViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelDetailViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass47_0
    $$c__DisplayClass47_0(System::Action* handleDidPressRefreshButton_ = {}, System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* handleDidChangeDifficultyBeatmap_ = {}, System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* handleDidFavoriteToggleChange_ = {}, GlobalNamespace::StandardLevelDetailViewController* $$4__this_ = {}) noexcept : handleDidPressRefreshButton{handleDidPressRefreshButton_}, handleDidChangeDifficultyBeatmap{handleDidChangeDifficultyBeatmap_}, handleDidFavoriteToggleChange{handleDidFavoriteToggleChange_}, $$4__this{$$4__this_} {}
    // System.Void <DidActivate>b__2()
    // Offset: 0x117A8DC
    void $DidActivate$b__2();
    // System.Void <DidActivate>b__3()
    // Offset: 0x117A90C
    void $DidActivate$b__3();
    // System.Void <DidActivate>b__6()
    // Offset: 0x117A93C
    void $DidActivate$b__6();
    // System.Void <DidActivate>b__7()
    // Offset: 0x117A988
    void $DidActivate$b__7();
    // public System.Void .ctor()
    // Offset: 0x11794F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelDetailViewController::$$c__DisplayClass47_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelDetailViewController::$$c__DisplayClass47_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelDetailViewController::$$c__DisplayClass47_0*, creationType>()));
    }
  }; // StandardLevelDetailViewController/<>c__DisplayClass47_0
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelDetailViewController::$$c__DisplayClass47_0), 40 + sizeof(GlobalNamespace::StandardLevelDetailViewController*)> __GlobalNamespace_StandardLevelDetailViewController_$$c__DisplayClass47_0SizeCheck;
  static_assert(sizeof(StandardLevelDetailViewController::$$c__DisplayClass47_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailViewController::$$c__DisplayClass47_0*, "", "StandardLevelDetailViewController/<>c__DisplayClass47_0");
