// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Amplifier
#include "RootMotion/FinalIK/Amplifier.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Amplifier/Body
  class Amplifier::Body : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Amplifier::Body::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xE0C2AC
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0C2E4
    // public UnityEngine.Transform relativeTo
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* relativeTo;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0C31C
    // public RootMotion.FinalIK.Amplifier/Body/EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x20
    ::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>* effectorLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0C354
    // public System.Single verticalWeight
    // Size: 0x4
    // Offset: 0x28
    float verticalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0C38C
    // public System.Single horizontalWeight
    // Size: 0x4
    // Offset: 0x2C
    float horizontalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0C3C4
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x30
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastRelativePos
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 lastRelativePos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 smoothDelta
    // Size: 0xC
    // Offset: 0x40
    UnityEngine::Vector3 smoothDelta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0x4C
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Body
    Body(UnityEngine::Transform* transform_ = {}, UnityEngine::Transform* relativeTo_ = {}, ::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>* effectorLinks_ = {}, float verticalWeight_ = {}, float horizontalWeight_ = {}, float speed_ = {}, UnityEngine::Vector3 lastRelativePos_ = {}, UnityEngine::Vector3 smoothDelta_ = {}, bool firstUpdate_ = {}) noexcept : transform{transform_}, relativeTo{relativeTo_}, effectorLinks{effectorLinks_}, verticalWeight{verticalWeight_}, horizontalWeight{horizontalWeight_}, speed{speed_}, lastRelativePos{lastRelativePos_}, smoothDelta{smoothDelta_}, firstUpdate{firstUpdate_} {}
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single w, System.Single deltaTime)
    // Offset: 0x1C92D88
    void Update(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float w, float deltaTime);
    // static private UnityEngine.Vector3 Multiply(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2)
    // Offset: 0x1C931F4
    static UnityEngine::Vector3 Multiply(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2);
    // public System.Void .ctor()
    // Offset: 0x1C93204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Amplifier::Body* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Amplifier::Body::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Amplifier::Body*, creationType>()));
    }
  }; // RootMotion.FinalIK.Amplifier/Body
  #pragma pack(pop)
  static check_size<sizeof(Amplifier::Body), 76 + sizeof(bool)> __RootMotion_FinalIK_Amplifier_BodySizeCheck;
  static_assert(sizeof(Amplifier::Body) == 0x4D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier::Body*, "RootMotion.FinalIK", "Amplifier/Body");
