// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleController/<DissolveCoroutine>d__63
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C234
  class ObstacleController::$DissolveCoroutine$d__63 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public ObstacleController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ObstacleController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $DissolveCoroutine$d__63
    $DissolveCoroutine$d__63(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::ObstacleController* $$4__this_ = {}, float duration_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, duration{duration_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10CAA20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleController::$DissolveCoroutine$d__63* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleController::$DissolveCoroutine$d__63::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleController::$DissolveCoroutine$d__63*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10CAA9C
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0x10CAAA0
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10CAB88
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10CAB90
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10CABF0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // ObstacleController/<DissolveCoroutine>d__63
  #pragma pack(pop)
  static check_size<sizeof(ObstacleController::$DissolveCoroutine$d__63), 40 + sizeof(float)> __GlobalNamespace_ObstacleController_$DissolveCoroutine$d__63SizeCheck;
  static_assert(sizeof(ObstacleController::$DissolveCoroutine$d__63) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleController::$DissolveCoroutine$d__63*, "", "ObstacleController/<DissolveCoroutine>d__63");
