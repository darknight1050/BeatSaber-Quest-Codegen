// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.UIKeyboard
#include "HMUI/UIKeyboard.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: UIKeyboardKey
  class UIKeyboardKey;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  // Autogenerated type: HMUI.UIKeyboard/<>c__DisplayClass12_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA62A0
  class UIKeyboard::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // public HMUI.UIKeyboardKey key
    // Size: 0x8
    // Offset: 0x10
    HMUI::UIKeyboardKey* key;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboardKey*) == 0x8);
    // public HMUI.UIKeyboard <>4__this
    // Size: 0x8
    // Offset: 0x18
    HMUI::UIKeyboard* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass12_0
    $$c__DisplayClass12_0(HMUI::UIKeyboardKey* key_ = {}, HMUI::UIKeyboard* $$4__this_ = {}) noexcept : key{key_}, $$4__this{$$4__this_} {}
    // System.Void <Awake>b__2()
    // Offset: 0x197FBC8
    void $Awake$b__2();
    // public System.Void .ctor()
    // Offset: 0x197FA60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIKeyboard::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // HMUI.UIKeyboard/<>c__DisplayClass12_0
  static check_size<sizeof(UIKeyboard::$$c__DisplayClass12_0), 24 + sizeof(HMUI::UIKeyboard*)> __HMUI_UIKeyboard_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(UIKeyboard::$$c__DisplayClass12_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::UIKeyboard::$$c__DisplayClass12_0*, "HMUI", "UIKeyboard/<>c__DisplayClass12_0");
#pragma pack(pop)
