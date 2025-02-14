// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA5
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Grounding
  class Grounding : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Grounding::Quality
    struct Quality;
    // Nested type: RootMotion::FinalIK::Grounding::Leg
    class Leg;
    // Nested type: RootMotion::FinalIK::Grounding::Pelvis
    class Pelvis;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.Grounding/Quality
    struct Quality/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Quality
      constexpr Quality(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.Grounding/Quality Fastest
      static constexpr const int Fastest = 0;
      // Get static field: static public RootMotion.FinalIK.Grounding/Quality Fastest
      static RootMotion::FinalIK::Grounding::Quality _get_Fastest();
      // Set static field: static public RootMotion.FinalIK.Grounding/Quality Fastest
      static void _set_Fastest(RootMotion::FinalIK::Grounding::Quality value);
      // static field const value: static public RootMotion.FinalIK.Grounding/Quality Simple
      static constexpr const int Simple = 1;
      // Get static field: static public RootMotion.FinalIK.Grounding/Quality Simple
      static RootMotion::FinalIK::Grounding::Quality _get_Simple();
      // Set static field: static public RootMotion.FinalIK.Grounding/Quality Simple
      static void _set_Simple(RootMotion::FinalIK::Grounding::Quality value);
      // static field const value: static public RootMotion.FinalIK.Grounding/Quality Best
      static constexpr const int Best = 2;
      // Get static field: static public RootMotion.FinalIK.Grounding/Quality Best
      static RootMotion::FinalIK::Grounding::Quality _get_Best();
      // Set static field: static public RootMotion.FinalIK.Grounding/Quality Best
      static void _set_Best(RootMotion::FinalIK::Grounding::Quality value);
    }; // RootMotion.FinalIK.Grounding/Quality
    #pragma pack(pop)
    static check_size<sizeof(Grounding::Quality), 0 + sizeof(int)> __RootMotion_FinalIK_Grounding_QualitySizeCheck;
    static_assert(sizeof(Grounding::Quality) == 0x4);
    // [TooltipAttribute] Offset: 0xE07710
    // public UnityEngine.LayerMask layers
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::LayerMask layers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [TooltipAttribute] Offset: 0xE07748
    // public System.Single maxStep
    // Size: 0x4
    // Offset: 0x14
    float maxStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07780
    // public System.Single heightOffset
    // Size: 0x4
    // Offset: 0x18
    float heightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE077B8
    // public System.Single footSpeed
    // Size: 0x4
    // Offset: 0x1C
    float footSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE077F0
    // public System.Single footRadius
    // Size: 0x4
    // Offset: 0x20
    float footRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07828
    // [HideInInspector] Offset: 0xE07828
    // public System.Single footCenterOffset
    // Size: 0x4
    // Offset: 0x24
    float footCenterOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07874
    // public System.Single prediction
    // Size: 0x4
    // Offset: 0x28
    float prediction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE078AC
    // [RangeAttribute] Offset: 0xE078AC
    // public System.Single footRotationWeight
    // Size: 0x4
    // Offset: 0x2C
    float footRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07900
    // public System.Single footRotationSpeed
    // Size: 0x4
    // Offset: 0x30
    float footRotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07938
    // [RangeAttribute] Offset: 0xE07938
    // public System.Single maxFootRotationAngle
    // Size: 0x4
    // Offset: 0x34
    float maxFootRotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07990
    // public System.Boolean rotateSolver
    // Size: 0x1
    // Offset: 0x38
    bool rotateSolver;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rotateSolver and: pelvisSpeed
    char __padding10[0x3] = {};
    // [TooltipAttribute] Offset: 0xE079C8
    // public System.Single pelvisSpeed
    // Size: 0x4
    // Offset: 0x3C
    float pelvisSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07A00
    // [RangeAttribute] Offset: 0xE07A00
    // public System.Single pelvisDamper
    // Size: 0x4
    // Offset: 0x40
    float pelvisDamper;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07A54
    // public System.Single lowerPelvisWeight
    // Size: 0x4
    // Offset: 0x44
    float lowerPelvisWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07A8C
    // public System.Single liftPelvisWeight
    // Size: 0x4
    // Offset: 0x48
    float liftPelvisWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07AC4
    // public System.Single rootSphereCastRadius
    // Size: 0x4
    // Offset: 0x4C
    float rootSphereCastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07AFC
    // public System.Boolean overstepFallsDown
    // Size: 0x1
    // Offset: 0x50
    bool overstepFallsDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overstepFallsDown and: quality
    char __padding16[0x3] = {};
    // [TooltipAttribute] Offset: 0xE07B34
    // public RootMotion.FinalIK.Grounding/Quality quality
    // Size: 0x4
    // Offset: 0x54
    RootMotion::FinalIK::Grounding::Quality quality;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding::Quality) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE07B6C
    // private RootMotion.FinalIK.Grounding/Leg[] <legs>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::Grounding::Leg*>* legs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Grounding::Leg*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE07B7C
    // private RootMotion.FinalIK.Grounding/Pelvis <pelvis>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    RootMotion::FinalIK::Grounding::Pelvis* pelvis;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding::Pelvis*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE07B8C
    // private System.Boolean <isGrounded>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool isGrounded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isGrounded and: root
    char __padding20[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE07B9C
    // private UnityEngine.Transform <root>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE07BAC
    // private UnityEngine.RaycastHit <rootHit>k__BackingField
    // Size: 0x2C
    // Offset: 0x78
    UnityEngine::RaycastHit rootHit;
    // Field size check
    static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0xA4
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Grounding
    Grounding(UnityEngine::LayerMask layers_ = {}, float maxStep_ = {}, float heightOffset_ = {}, float footSpeed_ = {}, float footRadius_ = {}, float footCenterOffset_ = {}, float prediction_ = {}, float footRotationWeight_ = {}, float footRotationSpeed_ = {}, float maxFootRotationAngle_ = {}, bool rotateSolver_ = {}, float pelvisSpeed_ = {}, float pelvisDamper_ = {}, float lowerPelvisWeight_ = {}, float liftPelvisWeight_ = {}, float rootSphereCastRadius_ = {}, bool overstepFallsDown_ = {}, RootMotion::FinalIK::Grounding::Quality quality_ = {}, ::Array<RootMotion::FinalIK::Grounding::Leg*>* legs_ = {}, RootMotion::FinalIK::Grounding::Pelvis* pelvis_ = {}, bool isGrounded_ = {}, UnityEngine::Transform* root_ = {}, UnityEngine::RaycastHit rootHit_ = {}, bool initiated_ = {}) noexcept : layers{layers_}, maxStep{maxStep_}, heightOffset{heightOffset_}, footSpeed{footSpeed_}, footRadius{footRadius_}, footCenterOffset{footCenterOffset_}, prediction{prediction_}, footRotationWeight{footRotationWeight_}, footRotationSpeed{footRotationSpeed_}, maxFootRotationAngle{maxFootRotationAngle_}, rotateSolver{rotateSolver_}, pelvisSpeed{pelvisSpeed_}, pelvisDamper{pelvisDamper_}, lowerPelvisWeight{lowerPelvisWeight_}, liftPelvisWeight{liftPelvisWeight_}, rootSphereCastRadius{rootSphereCastRadius_}, overstepFallsDown{overstepFallsDown_}, quality{quality_}, legs{legs_}, pelvis{pelvis_}, isGrounded{isGrounded_}, root{root_}, rootHit{rootHit_}, initiated{initiated_} {}
    // public RootMotion.FinalIK.Grounding/Leg[] get_legs()
    // Offset: 0x1C45098
    ::Array<RootMotion::FinalIK::Grounding::Leg*>* get_legs();
    // private System.Void set_legs(RootMotion.FinalIK.Grounding/Leg[] value)
    // Offset: 0x1C450A0
    void set_legs(::Array<RootMotion::FinalIK::Grounding::Leg*>* value);
    // public RootMotion.FinalIK.Grounding/Pelvis get_pelvis()
    // Offset: 0x1C450A8
    RootMotion::FinalIK::Grounding::Pelvis* get_pelvis();
    // private System.Void set_pelvis(RootMotion.FinalIK.Grounding/Pelvis value)
    // Offset: 0x1C450B0
    void set_pelvis(RootMotion::FinalIK::Grounding::Pelvis* value);
    // public System.Boolean get_isGrounded()
    // Offset: 0x1C450B8
    bool get_isGrounded();
    // private System.Void set_isGrounded(System.Boolean value)
    // Offset: 0x1C450C0
    void set_isGrounded(bool value);
    // public UnityEngine.Transform get_root()
    // Offset: 0x1C450CC
    UnityEngine::Transform* get_root();
    // private System.Void set_root(UnityEngine.Transform value)
    // Offset: 0x1C450D4
    void set_root(UnityEngine::Transform* value);
    // public UnityEngine.RaycastHit get_rootHit()
    // Offset: 0x1C450DC
    UnityEngine::RaycastHit get_rootHit();
    // private System.Void set_rootHit(UnityEngine.RaycastHit value)
    // Offset: 0x1C450F4
    void set_rootHit(UnityEngine::RaycastHit value);
    // public System.Boolean get_rootGrounded()
    // Offset: 0x1C45114
    bool get_rootGrounded();
    // public UnityEngine.RaycastHit GetRootHit(System.Single maxDistanceMlp)
    // Offset: 0x1C45168
    UnityEngine::RaycastHit GetRootHit(float maxDistanceMlp);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x1C45548
    bool IsValid(::Il2CppString*& errorMessage);
    // public System.Void Initiate(UnityEngine.Transform root, UnityEngine.Transform[] feet)
    // Offset: 0x1C3EAD0
    void Initiate(UnityEngine::Transform* root, ::Array<UnityEngine::Transform*>* feet);
    // public System.Void Update()
    // Offset: 0x1C3F2D0
    void Update();
    // public UnityEngine.Vector3 GetLegsPlaneNormal()
    // Offset: 0x1C41128
    UnityEngine::Vector3 GetLegsPlaneNormal();
    // public System.Void Reset()
    // Offset: 0x1C3E634
    void Reset();
    // public System.Void LogWarning(System.String message)
    // Offset: 0x1C457C8
    void LogWarning(::Il2CppString* message);
    // public UnityEngine.Vector3 get_up()
    // Offset: 0x1C3F60C
    UnityEngine::Vector3 get_up();
    // public System.Single GetVerticalOffset(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x1C46554
    float GetVerticalOffset(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2);
    // public UnityEngine.Vector3 Flatten(UnityEngine.Vector3 v)
    // Offset: 0x1C466BC
    UnityEngine::Vector3 Flatten(UnityEngine::Vector3 v);
    // private System.Boolean get_useRootRotation()
    // Offset: 0x1C46484
    bool get_useRootRotation();
    // public UnityEngine.Vector3 GetFootCenterOffset()
    // Offset: 0x1C467C0
    UnityEngine::Vector3 GetFootCenterOffset();
    // public System.Void .ctor()
    // Offset: 0x1C3E274
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grounding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Grounding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grounding*, creationType>()));
    }
  }; // RootMotion.FinalIK.Grounding
  #pragma pack(pop)
  static check_size<sizeof(Grounding), 164 + sizeof(bool)> __RootMotion_FinalIK_GroundingSizeCheck;
  static_assert(sizeof(Grounding) == 0xA5);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding*, "RootMotion.FinalIK", "Grounding");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding::Quality, "RootMotion.FinalIK", "Grounding/Quality");
