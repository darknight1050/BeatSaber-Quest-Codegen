// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EditAvatarViewController/AvatarEditPart
#include "GlobalNamespace/EditAvatarViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: Menu.ViewControllers
namespace Menu::ViewControllers {
  // Size: 0x20
  // Autogenerated type: Menu.ViewControllers.EditAvatarHistorySnapshot
  // [] Offset: FFFFFFFF
  class EditAvatarHistorySnapshot : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD34A0
    // private readonly EditAvatarViewController/AvatarEditPart <avatarEditPart>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarViewController::AvatarEditPart) == 0x4);
    // Padding between fields: avatarEditPart and: avatarData
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD34B0
    // private readonly AvatarData <avatarData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarData* avatarData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarData*) == 0x8);
    // Creating value type constructor for type: EditAvatarHistorySnapshot
    EditAvatarHistorySnapshot(GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart_ = {}, GlobalNamespace::AvatarData* avatarData_ = {}) noexcept : avatarEditPart{avatarEditPart_}, avatarData{avatarData_} {}
    // public EditAvatarViewController/AvatarEditPart get_avatarEditPart()
    // Offset: 0x1A71E2C
    GlobalNamespace::EditAvatarViewController::AvatarEditPart get_avatarEditPart();
    // public AvatarData get_avatarData()
    // Offset: 0x1A71E34
    GlobalNamespace::AvatarData* get_avatarData();
    // public System.Void .ctor(AvatarData avatarData, EditAvatarViewController/AvatarEditPart avatarEditPart)
    // Offset: 0x1A71E3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarHistorySnapshot* New_ctor(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart) {
      static auto ___internal__logger = ::Logger::get().WithContext("Menu::ViewControllers::EditAvatarHistorySnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarHistorySnapshot*, creationType>(avatarData, avatarEditPart)));
    }
  }; // Menu.ViewControllers.EditAvatarHistorySnapshot
  static check_size<sizeof(EditAvatarHistorySnapshot), 24 + sizeof(GlobalNamespace::AvatarData*)> __Menu_ViewControllers_EditAvatarHistorySnapshotSizeCheck;
  static_assert(sizeof(EditAvatarHistorySnapshot) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Menu::ViewControllers::EditAvatarHistorySnapshot*, "Menu.ViewControllers", "EditAvatarHistorySnapshot");
#pragma pack(pop)
