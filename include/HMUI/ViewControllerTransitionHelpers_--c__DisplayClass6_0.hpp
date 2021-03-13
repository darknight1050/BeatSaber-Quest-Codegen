// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass6_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D01D30
  class ViewControllerTransitionHelpers::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x10
    HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Single moveOffset
    // Size: 0x4
    // Offset: 0x18
    float moveOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseCanvasGroupAlpha
    // Size: 0x4
    // Offset: 0x1C
    float baseCanvasGroupAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(HMUI::ViewController* toPresentViewController_ = {}, float moveOffset_ = {}, float baseCanvasGroupAlpha_ = {}, HMUI::ViewController* toDismissViewController_ = {}) noexcept : toPresentViewController{toPresentViewController_}, moveOffset{moveOffset_}, baseCanvasGroupAlpha{baseCanvasGroupAlpha_}, toDismissViewController{toDismissViewController_} {}
    // System.Void <DoVerticalTransition>b__0(System.Single t)
    // Offset: 0x211AFCC
    void $DoVerticalTransition$b__0(float t);
    // public System.Void .ctor()
    // Offset: 0x211AFC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(ViewControllerTransitionHelpers::$$c__DisplayClass6_0), 32 + sizeof(HMUI::ViewController*)> __HMUI_ViewControllerTransitionHelpers_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$$c__DisplayClass6_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass6_0");
