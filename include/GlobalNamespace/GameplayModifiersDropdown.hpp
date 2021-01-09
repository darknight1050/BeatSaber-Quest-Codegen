// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: GameplayModifiersDropdown
  // [] Offset: FFFFFFFF
  class GameplayModifiersDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GameplayModifiersDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCEC90
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<GameplayModifierMask,System.String>> _gameplayModifiersData
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>* gameplayModifiersData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>*) == 0x8);
    // Creating value type constructor for type: GameplayModifiersDropdown
    GameplayModifiersDropdown(HMUI::SimpleTextDropdown* simpleTextDropdown_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, System::Action_1<int>* didSelectCellWithIdxEvent_ = {}, System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>* gameplayModifiersData_ = {}) noexcept : simpleTextDropdown{simpleTextDropdown_}, gameplayModifiersModel{gameplayModifiersModel_}, didSelectCellWithIdxEvent{didSelectCellWithIdxEvent_}, gameplayModifiersData{gameplayModifiersData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1A21A6C
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1A21B10
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<GameplayModifierMask,System.String>> get_gameplayModifiersData()
    // Offset: 0x1A21BB4
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>* get_gameplayModifiersData();
    // protected System.Void Start()
    // Offset: 0x1A21D40
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A21EC8
    void OnDestroy();
    // public GameplayModifierMask GetSelectedGameplayModifierMask()
    // Offset: 0x1A1F4D0
    GlobalNamespace::GameplayModifierMask GetSelectedGameplayModifierMask();
    // public System.Void SelectCellWithGameplayModifierMask(GameplayModifierMask gameplayModifierMask)
    // Offset: 0x1A1F82C
    void SelectCellWithGameplayModifierMask(GlobalNamespace::GameplayModifierMask gameplayModifierMask);
    // private System.Int32 GetIdxForGameplayModifierMask(GameplayModifierMask gameplayModifierMask)
    // Offset: 0x1A21FA4
    int GetIdxForGameplayModifierMask(GlobalNamespace::GameplayModifierMask gameplayModifierMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1A22128
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Tuple`2<GameplayModifierMask,System.String> <get_gameplayModifiersData>b__7_0(GameplayModifierMask value)
    // Offset: 0x1A221A4
    System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>* $get_gameplayModifiersData$b__7_0(GlobalNamespace::GameplayModifierMask value);
    // public System.Void .ctor()
    // Offset: 0x1A2219C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiersDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersDropdown*, creationType>()));
    }
  }; // GameplayModifiersDropdown
  static check_size<sizeof(GameplayModifiersDropdown), 48 + sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*>*)> __GlobalNamespace_GameplayModifiersDropdownSizeCheck;
  static_assert(sizeof(GameplayModifiersDropdown) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersDropdown*, "", "GameplayModifiersDropdown");
#pragma pack(pop)
