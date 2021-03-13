// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GuestNameButtonsListItem
  class GuestNameButtonsListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController/<>c__DisplayClass10_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C944
  class EnterPlayerGuestNameViewController::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<System.String> guestPlayerNames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public EnterPlayerGuestNameViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::EnterPlayerGuestNameViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass10_0
    $$c__DisplayClass10_0(System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController* $$4__this_ = {}) noexcept : guestPlayerNames{guestPlayerNames_}, $$4__this{$$4__this_} {}
    // System.Void <DidActivate>b__0(System.Int32 idx, GuestNameButtonsListItem item)
    // Offset: 0xFE39AC
    void $DidActivate$b__0(int idx, GlobalNamespace::GuestNameButtonsListItem* item);
    // public System.Void .ctor()
    // Offset: 0xFE3434
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // EnterPlayerGuestNameViewController/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_0), 24 + sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*)> __GlobalNamespace_EnterPlayerGuestNameViewController_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_0");
