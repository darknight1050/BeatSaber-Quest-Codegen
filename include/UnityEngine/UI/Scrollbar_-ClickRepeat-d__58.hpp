// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Scrollbar
#include "UnityEngine/UI/Scrollbar.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  // Autogenerated type: UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D7DA70
  class Scrollbar::$ClickRepeat$d__58 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public UnityEngine.UI.Scrollbar <>4__this
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Scrollbar* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Scrollbar*) == 0x8);
    // public UnityEngine.Vector2 screenPosition
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Vector2 screenPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Camera camera
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: $ClickRepeat$d__58
    $ClickRepeat$d__58(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, UnityEngine::UI::Scrollbar* $$4__this_ = {}, UnityEngine::Vector2 screenPosition_ = {}, UnityEngine::Camera* camera_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, screenPosition{screenPosition_}, camera{camera_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x157122C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Scrollbar::$ClickRepeat$d__58* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Scrollbar::$ClickRepeat$d__58::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Scrollbar::$ClickRepeat$d__58*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1571D10
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1571D14
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1571EC4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1571ECC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1571F2C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
  static check_size<sizeof(Scrollbar::$ClickRepeat$d__58), 48 + sizeof(UnityEngine::Camera*)> __UnityEngine_UI_Scrollbar_$ClickRepeat$d__58SizeCheck;
  static_assert(sizeof(Scrollbar::$ClickRepeat$d__58) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Scrollbar::$ClickRepeat$d__58*, "UnityEngine.UI", "Scrollbar/<ClickRepeat>d__58");
#pragma pack(pop)
