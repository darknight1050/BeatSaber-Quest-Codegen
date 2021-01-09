// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMasksModel
  class SongPackMasksModel;
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
  // Size: 0x30
  // Autogenerated type: SongPacksDropdown
  // [] Offset: FFFFFFFF
  class SongPacksDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SongPacksDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // [InjectAttribute] Offset: 0xDCECB0
    // private readonly SongPackMasksModel _songPackMasksModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SongPackMasksModel* songPackMasksModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMasksModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCECC0
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // Creating value type constructor for type: SongPacksDropdown
    SongPacksDropdown(HMUI::SimpleTextDropdown* simpleTextDropdown_ = {}, GlobalNamespace::SongPackMasksModel* songPackMasksModel_ = {}, System::Action_1<int>* didSelectCellWithIdxEvent_ = {}) noexcept : simpleTextDropdown{simpleTextDropdown_}, songPackMasksModel{songPackMasksModel_}, didSelectCellWithIdxEvent{didSelectCellWithIdxEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF3A444
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF3A4E8
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<SongPackMask,System.String>> get_songPacks()
    // Offset: 0xF3A58C
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>* get_songPacks();
    // protected System.Void Start()
    // Offset: 0xF3A5A8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF3A728
    void OnDestroy();
    // public SongPackMask GetSelectedSongPackMask()
    // Offset: 0xF3A804
    GlobalNamespace::SongPackMask GetSelectedSongPackMask();
    // public System.Void SelectCellWithSongPackMask(SongPackMask songPackMask)
    // Offset: 0xF3A8DC
    void SelectCellWithSongPackMask(GlobalNamespace::SongPackMask songPackMask);
    // private System.Int32 GetIdxForSongPackMask(SongPackMask songPackMask)
    // Offset: 0xF3A918
    int GetIdxForSongPackMask(GlobalNamespace::SongPackMask songPackMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0xF3AAB0
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0xF3AB24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPacksDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPacksDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPacksDropdown*, creationType>()));
    }
  }; // SongPacksDropdown
  static check_size<sizeof(SongPacksDropdown), 40 + sizeof(System::Action_1<int>*)> __GlobalNamespace_SongPacksDropdownSizeCheck;
  static_assert(sizeof(SongPacksDropdown) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPacksDropdown*, "", "SongPacksDropdown");
#pragma pack(pop)
