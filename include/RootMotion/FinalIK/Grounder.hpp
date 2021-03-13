// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
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
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Grounder
  // [] Offset: FFFFFFFF
  class Grounder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::Grounder::GrounderDelegate
    class GrounderDelegate;
    // [TooltipAttribute] Offset: 0xD1263C
    // [RangeAttribute] Offset: 0xD1263C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: weight and: solver
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xD12690
    // public RootMotion.FinalIK.Grounding solver
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::Grounding* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // public RootMotion.FinalIK.Grounder/GrounderDelegate OnPreGrounder
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::Grounder::GrounderDelegate* OnPreGrounder;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounder::GrounderDelegate*) == 0x8);
    // public RootMotion.FinalIK.Grounder/GrounderDelegate OnPostGrounder
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::Grounder::GrounderDelegate* OnPostGrounder;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounder::GrounderDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD126C8
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Grounder
    Grounder(float weight_ = {}, RootMotion::FinalIK::Grounding* solver_ = {}, RootMotion::FinalIK::Grounder::GrounderDelegate* OnPreGrounder_ = {}, RootMotion::FinalIK::Grounder::GrounderDelegate* OnPostGrounder_ = {}, bool initiated_ = {}) noexcept : weight{weight_}, solver{solver_}, OnPreGrounder{OnPreGrounder_}, OnPostGrounder{OnPostGrounder_}, initiated{initiated_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ResetPosition()
    // Offset: 0xFFFFFFFF
    void ResetPosition_NEW();
    // public System.Boolean get_initiated()
    // Offset: 0x1A58424
    bool get_initiated();
    // protected System.Void set_initiated(System.Boolean value)
    // Offset: 0x1A5842C
    void set_initiated(bool value);
    // protected UnityEngine.Vector3 GetSpineOffsetTarget()
    // Offset: 0x1A58438
    UnityEngine::Vector3 GetSpineOffsetTarget();
    // protected System.Void LogWarning(System.String message)
    // Offset: 0x1A5870C
    void LogWarning(::Il2CppString* message);
    // private UnityEngine.Vector3 GetLegSpineBendVector(RootMotion.FinalIK.Grounding/Leg leg)
    // Offset: 0x1A5857C
    UnityEngine::Vector3 GetLegSpineBendVector(RootMotion::FinalIK::Grounding::Leg* leg);
    // private UnityEngine.Vector3 GetLegSpineTangent(RootMotion.FinalIK.Grounding/Leg leg)
    // Offset: 0x1A58740
    UnityEngine::Vector3 GetLegSpineTangent(RootMotion::FinalIK::Grounding::Leg* leg);
    // protected System.Void OpenUserManual()
    // Offset: 0xFFFFFFFF
    void OpenUserManual_NEW();
    // protected System.Void OpenScriptReference()
    // Offset: 0xFFFFFFFF
    void OpenScriptReference_NEW();
    // protected System.Void .ctor()
    // Offset: 0x1A58948
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grounder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Grounder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grounder*, creationType>()));
    }
  }; // RootMotion.FinalIK.Grounder
  #pragma pack(pop)
  static check_size<sizeof(Grounder), 56 + sizeof(bool)> __RootMotion_FinalIK_GrounderSizeCheck;
  static_assert(sizeof(Grounder) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounder*, "RootMotion.FinalIK", "Grounder");
