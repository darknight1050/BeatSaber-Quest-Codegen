// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PauseController
#include "GlobalNamespace/PauseController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  // Autogenerated type: PauseController/<>c__DisplayClass20_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF4E4
  class PauseController::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    // public System.Boolean value
    // Size: 0x1
    // Offset: 0x10
    bool value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass20_0
    $$c__DisplayClass20_0(bool value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return value;
    }
    // System.Void <get_canPause>b__0(System.Boolean newValue)
    // Offset: 0xF07654
    void $get_canPause$b__0(bool newValue);
    // public System.Void .ctor()
    // Offset: 0xF06580
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseController::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PauseController::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseController::$$c__DisplayClass20_0*, creationType>()));
    }
  }; // PauseController/<>c__DisplayClass20_0
  static check_size<sizeof(PauseController::$$c__DisplayClass20_0), 16 + sizeof(bool)> __GlobalNamespace_PauseController_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(PauseController::$$c__DisplayClass20_0) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseController::$$c__DisplayClass20_0*, "", "PauseController/<>c__DisplayClass20_0");
#pragma pack(pop)
