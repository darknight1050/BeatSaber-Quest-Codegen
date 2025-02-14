// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_InputField/<MouseDragOutsideRect>d__285
  // [CompilerGeneratedAttribute] Offset: DD5A70
  class TMP_InputField::$MouseDragOutsideRect$d__285 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public TMPro.TMP_InputField <>4__this
    // Size: 0x8
    // Offset: 0x20
    TMPro::TMP_InputField* $$4__this;
    // Field size check
    static_assert(sizeof(TMPro::TMP_InputField*) == 0x8);
    // public UnityEngine.EventSystems.PointerEventData eventData
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::EventSystems::PointerEventData* eventData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // Creating value type constructor for type: $MouseDragOutsideRect$d__285
    $MouseDragOutsideRect$d__285(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, TMPro::TMP_InputField* $$4__this_ = {}, UnityEngine::EventSystems::PointerEventData* eventData_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, eventData{eventData_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1150254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_InputField::$MouseDragOutsideRect$d__285* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_InputField::$MouseDragOutsideRect$d__285::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_InputField::$MouseDragOutsideRect$d__285*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1150280
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1150284
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x11504DC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x11504E4
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1150544
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // TMPro.TMP_InputField/<MouseDragOutsideRect>d__285
  #pragma pack(pop)
  static check_size<sizeof(TMP_InputField::$MouseDragOutsideRect$d__285), 40 + sizeof(UnityEngine::EventSystems::PointerEventData*)> __TMPro_TMP_InputField_$MouseDragOutsideRect$d__285SizeCheck;
  static_assert(sizeof(TMP_InputField::$MouseDragOutsideRect$d__285) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::$MouseDragOutsideRect$d__285*, "TMPro", "TMP_InputField/<MouseDragOutsideRect>d__285");
