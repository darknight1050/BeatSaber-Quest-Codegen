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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Animation
  class Animation;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.SolverManager
  // [] Offset: FFFFFFFF
  class SolverManager : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xD121F8
    // public System.Boolean fixTransforms
    // Size: 0x1
    // Offset: 0x18
    bool fixTransforms;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixTransforms and: animator
    char __padding0[0x7] = {};
    // private UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private UnityEngine.Animation legacy
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Animation* legacy;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private System.Boolean updateFrame
    // Size: 0x1
    // Offset: 0x30
    bool updateFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean componentInitiated
    // Size: 0x1
    // Offset: 0x31
    bool componentInitiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean skipSolverUpdate
    // Size: 0x1
    // Offset: 0x32
    bool skipSolverUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SolverManager
    SolverManager(bool fixTransforms_ = {}, UnityEngine::Animator* animator_ = {}, UnityEngine::Animation* legacy_ = {}, bool updateFrame_ = {}, bool componentInitiated_ = {}, bool skipSolverUpdate_ = {}) noexcept : fixTransforms{fixTransforms_}, animator{animator_}, legacy{legacy_}, updateFrame{updateFrame_}, componentInitiated{componentInitiated_}, skipSolverUpdate{skipSolverUpdate_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Disable()
    // Offset: 0x192B674
    void Disable();
    // protected System.Void InitiateSolver()
    // Offset: 0x192B70C
    void InitiateSolver_NEW();
    // protected System.Void UpdateSolver()
    // Offset: 0x192B710
    void UpdateSolver_NEW();
    // protected System.Void FixTransforms()
    // Offset: 0x192B714
    void FixTransforms_NEW();
    // private System.Void OnDisable()
    // Offset: 0x192B718
    void OnDisable();
    // private System.Void Start()
    // Offset: 0x192B7A8
    void Start();
    // private System.Boolean get_animatePhysics()
    // Offset: 0x192B7AC
    bool get_animatePhysics();
    // private System.Void Initiate()
    // Offset: 0x192B750
    void Initiate();
    // private System.Void Update()
    // Offset: 0x192BA5C
    void Update();
    // private System.Void FindAnimatorRecursive(UnityEngine.Transform t, System.Boolean findInChildren)
    // Offset: 0x192B89C
    void FindAnimatorRecursive(UnityEngine::Transform* t, bool findInChildren);
    // private System.Boolean get_isAnimated()
    // Offset: 0x192BAA8
    bool get_isAnimated();
    // private System.Void FixedUpdate()
    // Offset: 0x192BB64
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x192BBC0
    void LateUpdate();
    // public System.Void UpdateSolverExternal()
    // Offset: 0x192BC1C
    void UpdateSolverExternal();
    // public System.Void .ctor()
    // Offset: 0x191A874
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SolverManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::SolverManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SolverManager*, creationType>()));
    }
  }; // RootMotion.SolverManager
  #pragma pack(pop)
  static check_size<sizeof(SolverManager), 50 + sizeof(bool)> __RootMotion_SolverManagerSizeCheck;
  static_assert(sizeof(SolverManager) == 0x33);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::SolverManager*, "RootMotion", "SolverManager");
