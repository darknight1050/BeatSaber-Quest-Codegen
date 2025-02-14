// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerIntroCountdown
#include "GlobalNamespace/MultiplayerIntroCountdown.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroCountdown/<CountdownRoutine>d__23
  // [CompilerGeneratedAttribute] Offset: E122AC
  class MultiplayerIntroCountdown::$CountdownRoutine$d__23 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerIntroCountdown <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerIntroCountdown* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroCountdown*) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x28
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single seconds
    // Size: 0x4
    // Offset: 0x2C
    float seconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single durationMultiplier
    // Size: 0x4
    // Offset: 0x30
    float durationMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <soundDelayAfterText>5__2
    // Size: 0x4
    // Offset: 0x34
    float $soundDelayAfterText$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $CountdownRoutine$d__23
    $CountdownRoutine$d__23(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MultiplayerIntroCountdown* $$4__this_ = {}, float delay_ = {}, float seconds_ = {}, float durationMultiplier_ = {}, float $soundDelayAfterText$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, delay{delay_}, seconds{seconds_}, durationMultiplier{durationMultiplier_}, $soundDelayAfterText$5__2{$soundDelayAfterText$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x23F4384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroCountdown::$CountdownRoutine$d__23* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroCountdown::$CountdownRoutine$d__23::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroCountdown::$CountdownRoutine$d__23*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x23F48A8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x23F48AC
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x23F4BD8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x23F4BE0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x23F4C40
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerIntroCountdown/<CountdownRoutine>d__23
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroCountdown::$CountdownRoutine$d__23), 52 + sizeof(float)> __GlobalNamespace_MultiplayerIntroCountdown_$CountdownRoutine$d__23SizeCheck;
  static_assert(sizeof(MultiplayerIntroCountdown::$CountdownRoutine$d__23) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdown::$CountdownRoutine$d__23*, "", "MultiplayerIntroCountdown/<CountdownRoutine>d__23");
