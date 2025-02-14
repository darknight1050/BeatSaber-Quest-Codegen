// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimelineAsset
#include "UnityEngine/Timeline/TimelineAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27
  // [CompilerGeneratedAttribute] Offset: DD7A10
  class TimelineAsset::$get_outputs$d__27 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.Playables.PlayableBinding <>2__current
    // Size: 0x20
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableBinding) == 0x20);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x38
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.Timeline.TimelineAsset <>4__this
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Timeline::TimelineAsset* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineAsset*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TrackAsset> <>7__wrap1
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset*>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> <>7__wrap2
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* $$7__wrap2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*) == 0x8);
    // Creating value type constructor for type: $get_outputs$d__27
    $get_outputs$d__27(int $$1__state_ = {}, UnityEngine::Playables::PlayableBinding $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::Timeline::TimelineAsset* $$4__this_ = {}, System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset*>* $$7__wrap1_ = {}, System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* $$7__wrap2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_}, $$7__wrap2{$$7__wrap2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x231CE7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineAsset::$get_outputs$d__27* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineAsset::$get_outputs$d__27*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x231CEB4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x231D0C4
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x231D004
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x231CF44
    void $$m__Finally2();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x231D4F8
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x231D508
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x231D568
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x231D5D0
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x231D67C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27
  #pragma pack(pop)
  static check_size<sizeof(TimelineAsset::$get_outputs$d__27), 80 + sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*)> __UnityEngine_Timeline_TimelineAsset_$get_outputs$d__27SizeCheck;
  static_assert(sizeof(TimelineAsset::$get_outputs$d__27) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*, "UnityEngine.Timeline", "TimelineAsset/<get_outputs>d__27");
