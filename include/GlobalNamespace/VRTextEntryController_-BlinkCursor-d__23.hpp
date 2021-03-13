// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTextEntryController
#include "GlobalNamespace/VRTextEntryController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VRTextEntryController/<BlinkCursor>d__23
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C634
  class VRTextEntryController::$BlinkCursor$d__23 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public VRTextEntryController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VRTextEntryController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRTextEntryController*) == 0x8);
    // private UnityEngine.Color <cursorColor>5__2
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color $cursorColor$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: $BlinkCursor$d__23
    $BlinkCursor$d__23(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::VRTextEntryController* $$4__this_ = {}, UnityEngine::Color $cursorColor$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $cursorColor$5__2{$cursorColor$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x20E01DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTextEntryController::$BlinkCursor$d__23* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTextEntryController::$BlinkCursor$d__23*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x20E0208
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0x20E020C
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x20E0370
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x20E0378
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x20E03D8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // VRTextEntryController/<BlinkCursor>d__23
  #pragma pack(pop)
  static check_size<sizeof(VRTextEntryController::$BlinkCursor$d__23), 40 + sizeof(UnityEngine::Color)> __GlobalNamespace_VRTextEntryController_$BlinkCursor$d__23SizeCheck;
  static_assert(sizeof(VRTextEntryController::$BlinkCursor$d__23) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*, "", "VRTextEntryController/<BlinkCursor>d__23");
