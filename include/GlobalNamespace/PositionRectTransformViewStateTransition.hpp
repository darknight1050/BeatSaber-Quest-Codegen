// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseStateTransition`1
#include "GlobalNamespace/BaseStateTransition_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3TransitionSO
  class Vector3TransitionSO;
  // Forward declaring type: BaseTransitionSO
  class BaseTransitionSO;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: Vector3Tween
  class Vector3Tween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PositionRectTransformViewStateTransition
  // [RequireComponent] Offset: E11138
  class PositionRectTransformViewStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::RectTransform*> {
    public:
    // [SpaceAttribute] Offset: 0xE21F64
    // private Vector3TransitionSO _transition
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::Vector3TransitionSO* transition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3TransitionSO*) == 0x8);
    // private Tweening.Vector3Tween _vectorTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::Vector3Tween* vectorTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // Creating value type constructor for type: PositionRectTransformViewStateTransition
    PositionRectTransformViewStateTransition(GlobalNamespace::Vector3TransitionSO* transition_ = {}, Tweening::Vector3Tween* vectorTween_ = {}) noexcept : transition{transition_}, vectorTween{vectorTween_} {}
    // private System.Void StartTween(UnityEngine.Vector3 endPosition)
    // Offset: 0x10A24E8
    void StartTween(UnityEngine::Vector3 endPosition);
    // private System.Void <StartTween>b__16_0(UnityEngine.Vector3 pos)
    // Offset: 0x10A2C00
    void $StartTween$b__16_0(UnityEngine::Vector3 pos);
    // private System.Void <StartTween>b__16_1()
    // Offset: 0x10A2CA4
    void $StartTween$b__16_1();
    // protected override BaseTransitionSO get_transition()
    // Offset: 0x10A24C0
    // Implemented from: BaseStateTransition
    // Base method: BaseTransitionSO BaseStateTransition::get_transition()
    GlobalNamespace::BaseTransitionSO* get_transition();
    // protected override System.Void TransitionToNormalState()
    // Offset: 0x10A24C8
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToNormalState()
    void TransitionToNormalState();
    // protected override System.Void TransitionToHighlightedState()
    // Offset: 0x10A2720
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToHighlightedState()
    void TransitionToHighlightedState();
    // protected override System.Void TransitionToPressedState()
    // Offset: 0x10A2740
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToPressedState()
    void TransitionToPressedState();
    // protected override System.Void TransitionToDisabledState()
    // Offset: 0x10A2760
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToDisabledState()
    void TransitionToDisabledState();
    // protected override System.Void TransitionToSelectedState()
    // Offset: 0x10A2780
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedState()
    void TransitionToSelectedState();
    // protected override System.Void TransitionToSelectedAndHighlightedState()
    // Offset: 0x10A27A0
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedAndHighlightedState()
    void TransitionToSelectedAndHighlightedState();
    // protected override System.Void SetNormalState()
    // Offset: 0x10A27C0
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetNormalState()
    void SetNormalState();
    // protected override System.Void SetHighlightedState()
    // Offset: 0x10A2868
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetHighlightedState()
    void SetHighlightedState();
    // protected override System.Void SetPressedState()
    // Offset: 0x10A2910
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetPressedState()
    void SetPressedState();
    // protected override System.Void SetDisabledState()
    // Offset: 0x10A29B8
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetDisabledState()
    void SetDisabledState();
    // protected override System.Void SetSelectedState()
    // Offset: 0x10A2A60
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedState()
    void SetSelectedState();
    // protected override System.Void SetSelectedAndHighlightedState()
    // Offset: 0x10A2B08
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedAndHighlightedState()
    void SetSelectedAndHighlightedState();
    // public System.Void .ctor()
    // Offset: 0x10A2BB0
    // Implemented from: BaseStateTransition`1
    // Base method: System.Void BaseStateTransition_1::.ctor()
    // Base method: System.Void BaseStateTransition::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PositionRectTransformViewStateTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PositionRectTransformViewStateTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PositionRectTransformViewStateTransition*, creationType>()));
    }
  }; // PositionRectTransformViewStateTransition
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PositionRectTransformViewStateTransition*, "", "PositionRectTransformViewStateTransition");
