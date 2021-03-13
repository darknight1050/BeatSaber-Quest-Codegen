// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKExecutionOrder
  // [] Offset: FFFFFFFF
  class IKExecutionOrder : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xD13168
    // public RootMotion.FinalIK.IK[] IKComponents
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::IK*>* IKComponents;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xD131A0
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private System.Boolean fixedFrame
    // Size: 0x1
    // Offset: 0x28
    bool fixedFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IKExecutionOrder
    IKExecutionOrder(::Array<RootMotion::FinalIK::IK*>* IKComponents_ = {}, UnityEngine::Animator* animator_ = {}, bool fixedFrame_ = {}) noexcept : IKComponents{IKComponents_}, animator{animator_}, fixedFrame{fixedFrame_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Boolean get_animatePhysics()
    // Offset: 0x1A68150
    bool get_animatePhysics();
    // private System.Void Start()
    // Offset: 0x1A681EC
    void Start();
    // private System.Void Update()
    // Offset: 0x1A6825C
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1A68318
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1A68354
    void LateUpdate();
    // private System.Void FixTransforms()
    // Offset: 0x1A68290
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1A683E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKExecutionOrder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKExecutionOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKExecutionOrder*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKExecutionOrder
  #pragma pack(pop)
  static check_size<sizeof(IKExecutionOrder), 40 + sizeof(bool)> __RootMotion_FinalIK_IKExecutionOrderSizeCheck;
  static_assert(sizeof(IKExecutionOrder) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKExecutionOrder*, "RootMotion.FinalIK", "IKExecutionOrder");
