// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: RootMotion.FinalIK.InteractionObject/WeightCurve
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTarget
  // [HelpURLAttribute] Offset: E06464
  // [AddComponentMenu] Offset: E06464
  class InteractionTarget : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionTarget::Multiplier
    class Multiplier;
    // [TooltipAttribute] Offset: 0xE08F48
    // public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    // Size: 0x4
    // Offset: 0x18
    RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // Padding between fields: effectorType and: multipliers
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xE08F80
    // public RootMotion.FinalIK.InteractionTarget/Multiplier[] multipliers
    // Size: 0x8
    // Offset: 0x20
    ::Array<RootMotion::FinalIK::InteractionTarget::Multiplier*>* multipliers;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::InteractionTarget::Multiplier*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE08FB8
    // public System.Single interactionSpeedMlp
    // Size: 0x4
    // Offset: 0x28
    float interactionSpeedMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: interactionSpeedMlp and: pivot
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0xE08FF0
    // public UnityEngine.Transform pivot
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* pivot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE09028
    // public UnityEngine.Vector3 twistAxis
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 twistAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xE09060
    // public System.Single twistWeight
    // Size: 0x4
    // Offset: 0x44
    float twistWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE09098
    // public System.Single swingWeight
    // Size: 0x4
    // Offset: 0x48
    float swingWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE090D0
    // public System.Boolean rotateOnce
    // Size: 0x1
    // Offset: 0x4C
    bool rotateOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rotateOnce and: defaultLocalRotation
    char __padding7[0x3] = {};
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform lastPivot
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* lastPivot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: InteractionTarget
    InteractionTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType_ = {}, ::Array<RootMotion::FinalIK::InteractionTarget::Multiplier*>* multipliers_ = {}, float interactionSpeedMlp_ = {}, UnityEngine::Transform* pivot_ = {}, UnityEngine::Vector3 twistAxis_ = {}, float twistWeight_ = {}, float swingWeight_ = {}, bool rotateOnce_ = {}, UnityEngine::Quaternion defaultLocalRotation_ = {}, UnityEngine::Transform* lastPivot_ = {}) noexcept : effectorType{effectorType_}, multipliers{multipliers_}, interactionSpeedMlp{interactionSpeedMlp_}, pivot{pivot_}, twistAxis{twistAxis_}, twistWeight{twistWeight_}, swingWeight{swingWeight_}, rotateOnce{rotateOnce_}, defaultLocalRotation{defaultLocalRotation_}, lastPivot{lastPivot_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OpenUserManual()
    // Offset: 0x1DF3B44
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1DF3B90
    void OpenScriptReference();
    // private System.Void OpenTutorial1()
    // Offset: 0x1DF3BDC
    void OpenTutorial1();
    // private System.Void OpenTutorial2()
    // Offset: 0x1DF3C28
    void OpenTutorial2();
    // private System.Void OpenTutorial3()
    // Offset: 0x1DF3C74
    void OpenTutorial3();
    // private System.Void OpenTutorial4()
    // Offset: 0x1DF3CC0
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x1DF3D0C
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1DF3D58
    void ASThread();
    // public System.Single GetValue(RootMotion.FinalIK.InteractionObject/WeightCurve/Type curveType)
    // Offset: 0x1DEF6A0
    float GetValue(RootMotion::FinalIK::InteractionObject::WeightCurve::Type curveType);
    // public System.Void ResetRotation()
    // Offset: 0x1DEE644
    void ResetRotation();
    // public System.Void RotateTo(UnityEngine.Vector3 position)
    // Offset: 0x1DECA3C
    void RotateTo(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x1DF3DA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTarget*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTarget
  #pragma pack(pop)
  static check_size<sizeof(InteractionTarget), 96 + sizeof(UnityEngine::Transform*)> __RootMotion_FinalIK_InteractionTargetSizeCheck;
  static_assert(sizeof(InteractionTarget) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTarget*, "RootMotion.FinalIK", "InteractionTarget");
