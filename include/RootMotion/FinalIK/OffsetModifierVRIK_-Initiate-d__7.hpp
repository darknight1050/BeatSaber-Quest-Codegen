// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifierVRIK
#include "RootMotion/FinalIK/OffsetModifierVRIK.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetModifierVRIK/<Initiate>d__7
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D11D04
  class OffsetModifierVRIK::$Initiate$d__7 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public RootMotion.FinalIK.OffsetModifierVRIK <>4__this
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::OffsetModifierVRIK* $$4__this;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::OffsetModifierVRIK*) == 0x8);
    // Creating value type constructor for type: $Initiate$d__7
    $Initiate$d__7(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, RootMotion::FinalIK::OffsetModifierVRIK* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x19197E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetModifierVRIK::$Initiate$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::OffsetModifierVRIK::$Initiate$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetModifierVRIK::$Initiate$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1919A28
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0x1919A2C
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1919B68
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1919B70
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1919BD0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // RootMotion.FinalIK.OffsetModifierVRIK/<Initiate>d__7
  #pragma pack(pop)
  static check_size<sizeof(OffsetModifierVRIK::$Initiate$d__7), 32 + sizeof(RootMotion::FinalIK::OffsetModifierVRIK*)> __RootMotion_FinalIK_OffsetModifierVRIK_$Initiate$d__7SizeCheck;
  static_assert(sizeof(OffsetModifierVRIK::$Initiate$d__7) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifierVRIK::$Initiate$d__7*, "RootMotion.FinalIK", "OffsetModifierVRIK/<Initiate>d__7");
