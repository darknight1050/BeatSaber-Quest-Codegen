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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController/<>c__DisplayClass10_1
  // [CompilerGeneratedAttribute] Offset: E1275C
  class EnterPlayerGuestNameViewController::$$c__DisplayClass10_1 : public ::Il2CppObject {
    public:
    // public System.String guestPlayerName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* guestPlayerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public EnterPlayerGuestNameViewController/<>c__DisplayClass10_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass10_1
    $$c__DisplayClass10_1(::Il2CppString* guestPlayerName_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0* CS$$$8__locals1_ = {}) noexcept : guestPlayerName{guestPlayerName_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Void <DidActivate>b__1()
    // Offset: 0x10BEA90
    void $DidActivate$b__1();
    // public System.Void .ctor()
    // Offset: 0x10BEA88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController::$$c__DisplayClass10_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController::$$c__DisplayClass10_1*, creationType>()));
    }
  }; // EnterPlayerGuestNameViewController/<>c__DisplayClass10_1
  #pragma pack(pop)
  static check_size<sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_1), 24 + sizeof(GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*)> __GlobalNamespace_EnterPlayerGuestNameViewController_$$c__DisplayClass10_1SizeCheck;
  static_assert(sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_1");
